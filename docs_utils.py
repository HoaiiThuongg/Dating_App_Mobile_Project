from langchain_community.document_loaders import PyPDFLoader,TextLoader, WebBaseLoader, UnstructuredWordDocumentLoader
from langchain.text_splitter import RecursiveCharacterTextSplitter
from langchain_community.embeddings import OllamaEmbeddings
from langchain_community.vectorstores import Chroma
from langchain.retrievers import BM25Retriever
import os
import json
import pickle
from rank_bm25 import BM25Okapi
from langchain.schema import Document
import shutil 

embedding_model = OllamaEmbeddings(model="mxbai-embed-large")
# Tao vector store 
vector_store = Chroma(
    persist_directory="./chroma_db",
    embedding_function=embedding_model
)
#Tao BM25 
class BM25Store:
    """
    Quản lý BM25 retriever: build, save, load, search.
    """
    def __init__(self, persist_dir="./bm25_db"):
        self.persist_dir = persist_dir
        os.makedirs(persist_dir, exist_ok=True)
        self.bm25 = None
        self.docs = None

    def from_documents(self, docs):
        texts = [d.page_content for d in docs]
        tokenized = [t.lower().split() for t in texts]
        self.bm25 = BM25Okapi(tokenized)
        self.docs = texts
        return self

    def save(self):
        with open(os.path.join(self.persist_dir, "index.pkl"), "wb") as f:
            pickle.dump(self.bm25, f)
        with open(os.path.join(self.persist_dir, "docs.json"), "w", encoding="utf-8") as f:
            json.dump(self.docs, f, ensure_ascii=False, indent=2)
        print("BM25 index saved to", self.persist_dir)

    def load(self):
        index_path = os.path.join(self.persist_dir, "index.pkl")
        docs_path = os.path.join(self.persist_dir, "docs.json")
        if not os.path.exists(index_path) or not os.path.exists(docs_path):
           print("Không tìm thấy BM25 index, tạo mới rỗng...")
           self.bm25 = BM25Okapi([])
           self.docs = []
           self.save()
           return self
        with open(os.path.join(self.persist_dir, "index.pkl"), "rb") as f:
            self.bm25 = pickle.load(f)
        with open(os.path.join(self.persist_dir, "docs.json"), "r", encoding="utf-8") as f:
            self.docs = json.load(f)
        print(" BM25 index loaded from", self.persist_dir)
        return self

    def get_relevant_documents(self, query, top_k=5):
        tokenized_q = query.lower().split()
        scores = self.bm25.get_scores(tokenized_q)
        ranked = sorted(zip(self.docs, scores), key=lambda x: x[1], reverse=True)
        return [Document(page_content=d) for d, _ in ranked[:top_k]]


def embedding_documents_by_bm25(chunks):
    """
    Tạo BM25 index và lưu xuống đĩa (pickle + json).
    """
    try:
        store = BM25Store(persist_dir= "./bm25_db").from_documents(chunks)
        store.save()
        return True
    except Exception as e:
        print("Khong thuc hien BM25 thanh cong:", e)
        return False
    
#Khi chay ham nay thi no luu san vao vectorstore va chi viec lay tu vector store bo vao ragchain 
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
