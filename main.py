from fastapi import FastAPI, UploadFile, File, HTTPException 
from pydantic_utils import QueryInput
from langchain_community.document_loaders import WebBaseLoader
import shutil
import os
import langchain_utils
import db_utils 
import chroma_utils 
import pydantic_utils
import uuid 
app = FastAPI()

@app.get("/")
def root():
    return {"message": "RAG Chatbot API đang hoạt động!"}

@app.post("/chat", response_model= pydantic_utils.QueryResponse)
def chat(query_input : QueryInput ) : 
    session_id = query_input.session_id 
    chat_history = chroma_utils.get_chat_history(session_id)
    rag_chain = langchain_utils.get_rag_chain(query_input.model.value)
    response = rag_chain.invoke({
        "input" : query_input,
        "chat_history" : chat_history,
        "session_id" : session_id
    })
    answer = response["answer"]
    # Cập nhật lịch sử
    chroma_utils.insert_chat_history(
    session_id=session_id,
    user_input=query_input.question,
    assistant_response=answer,
    model="llama3"
    )

    return pydantic_utils.QueryResponse(
        answer=answer,
        session_id=session_id,
        model=query_input.model
    )
 

@app.post("/upload/local")
def upload_from_local(file: UploadFile = File(...)):
    """Upload tài liệu local (docx, pdf, html)"""

    allowed_extensions = ['.pdf', '.docx','.html']
    file_extension = os.path.splitext(file.filename)[1].lower()
    if not file_extension in allowed_extensions :
        raise HTTPException(status_code=400, detail="Không hỗ trợ file")
    temp_file_path = f"temp_{file.filename}"
    try : 
        with open(temp_file_path,"wb") as buffer:
            shutil.copyfileobj(file.file,buffer)
        
        file_id = chroma_utils.insert_document_record(file.filename)
        successed_chunks= db_utils.upload_file_from_local(file, temp_file_path)
        successed_vector_store = db_utils.embedding_documents(successed_chunks)
        if successed_vector_store :
            return ("Upload thành công")
        else : 
            db_utils.delete_document_record(file_id)
            raise HTTPException(status_code=500, detail=f"Failed to index {file.filename}.")
    finally : 
        if os.path.exists(temp_file_path) : 
            os.remove(temp_file_path)
            
@app.post("/upload/url")
def upload_from_url(body: pydantic_utils.URLUpload):
    """Upload tài liệu từ URL"""
    file_id = str(uuid.uuid4())
    try:
        loader = WebBaseLoader(body.url)
        docs = loader.load()
        full_text = "\n".join([d.page_content for d in docs])
        chroma_utils.insert_document_url_record(file_id, body.url, full_text)
        splitted_chunks = db_utils.split_documents(docs)
        successed_vector_store = db_utils.embedding_documents(splitted_chunks)

        if successed_vector_store :
            return ("Upload thành công")
        else : 
            chroma_utils.delete_document_url_record(file_id)
            raise HTTPException(status_code=500, detail=f"Lỗi upload.")
    except Exception as e : 
        raise HTTPException(status_code=500, detail=f"Lỗi xử lý:  {str(e)}")
    
@app.get("/list-docs", response_model=list[pydantic_utils.DocumentInfo])
def list_documents():
    return db_utils.get_all_documents()

@app.post("/delete-doc")
def delete_document(request : pydantic_utils.DeleteFileRequest):
    chroma_delete_success = chroma_utils.delete_doc_from_chroma(request.file_id)

    if chroma_delete_success : 
        return ("Xóa thành công file : {request.file_id}")
    else : 
        return ("Xóa không thành công")