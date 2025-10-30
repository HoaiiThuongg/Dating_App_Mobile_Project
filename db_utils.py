from langchain_community.document_loaders import PyPDFLoader,TextLoader, WebBaseLoader, UnstructuredWordDocumentLoader
from langchain.text_splitter import RecursiveCharacterTextSplitter
from langchain_community.embeddings import OllamaEmbeddings
from langchain_community.vectorstores import Chroma
import os
import shutil 

embedding_model = OllamaEmbeddings(model="mxbai-embed-large")
# Tao vector store 
vector_store = Chroma(
    persist_directory="./chroma_db",
    embedding_function=embedding_model
)
def upload_file_from_local(file, filepath):

            # Xác định loại file
            if file.filename.endswith(".txt"):
                loader = TextLoader(filepath, encoding="utf-8")
            elif file.filename.endswith(".pdf"):
                loader = PyPDFLoader(filepath)
            elif file.filename.endswith(".docx"):
                loader = UnstructuredWordDocumentLoader(filepath)
            else:
                raise ValueError("Loại file không được hỗ trợ (chỉ .txt, .pdf, .docx)")

            # Load và xử lý
            docs = loader.load()
            splited_docs_chunks = split_documents(docs)

            return splited_docs_chunks 
        
def split_documents(docs):
    text_splitters = RecursiveCharacterTextSplitter(chunk_size = 1000, chunk_overlap = 200, separators=["\n\n", "\n", ".", "!", "?", " ", ""] )
    chunks = text_splitters.split_documents(docs)
    return chunks 

def embedding_documents (chunks):
    # them chunks vao vectorstore 
    vector_store.add_documents(chunks)
    # luu xuong 
    vector_store.persist() 

    return vector_store 