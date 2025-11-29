from langchain_ollama import ChatOllama
from langchain_core.output_parsers import StrOutputParser
from langchain_core.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain_core.documents import Document
from langchain.retrievers import EnsembleRetriever, BM25Retriever
from langchain.chains.history_aware_retriever import create_history_aware_retriever
from langchain.chains.combine_documents import create_stuff_documents_chain
from langchain.chains.retrieval import create_retrieval_chain
from langchain_community.vectorstores import Chroma 
import database
import docs_utils
from typing import List
import json
import os
from sentence_transformers import CrossEncoder

# Lấy docs đã được embedding -> tìm ra k tài liệu liên quan nhất
vector_retriever = docs_utils.vector_store.as_retriever(search_kwargs={"k": 100})

# Tao bm25 retriever 
bm25_path = "./bm25_db/index.pkl"

if os.path.exists(bm25_path):
    bm25_store = docs_utils.BM25Store(persist_dir="./bm25_db").load()
    docs = bm25_store.docs
    bm25_retriever = BM25Retriever.from_documents(
        [docs_utils.Document(page_content=d) for d in docs]
    )
    bm25_retriever.k = 100
    print("BM25 retriever loaded.")
else:
    print("BM25 index chưa tồn tại.")
    bm25_retriever = None

# hybrid_retriever 
if bm25_retriever:
    retriever = EnsembleRetriever(
        retrievers=[vector_retriever, bm25_retriever],
        weights=[0.7, 0.3],
    )
else:
    # fallback chỉ dùng vector store nếu BM25 chưa có
    retriever = vector_retriever
    print("Sử dụng tạm thời chỉ vector retriever (chưa có BM25).")

# Rerank 
model1 = CrossEncoder("cross-encoder/ms-marco-MiniLM-L-6-v2")
def rerank_with_crossencoder(query: str, docs: list[str], model_name="cross-encoder/ms-marco-MiniLM-L-6-v2", top_n=5):
    model1 = CrossEncoder(model_name)
    
    # Tạo các cặp (query, document)
    pairs = [[query, doc] for doc in docs]
    
    # Tính điểm tương đồng
    scores = model1.predict(pairs)
    
    # Sắp xếp tài liệu theo điểm giảm dần
    ranked_results = sorted(
        zip(docs, scores),
        key=lambda x: x[1],
        reverse=True
    )
    
    # Trả về top_n tài liệu kèm điểm
    return ranked_results[:top_n]

output_parser = StrOutputParser()

flirting_system_prompt = """
Bạn là một trợ lý AI chỉ được phép nói tiếng Việt.
Bạn chỉ trả lời tiếng việt không cần thêm tôi sẽ trả lời này cho bạn hay thêm bất cứ gì khác. 
Nhiệm vụ của bạn là hướng dẫn người dùng soạn tin nhắn hẹn hò hoặc tán tỉnh tự nhiên, chân thật và dễ thương.
Nếu câu hỏi không liên quan đến nhắn tin hẹn hò, hãy trả lời: “Xin lỗi, chủ đề này không thuộc lĩnh vực của mình.”

Hướng dẫn:
- Đề xuất 3 tin nhắn tự nhiên mà người dùng có thể gửi tiếp theo.
- Mỗi tin nhắn dưới 25 từ.
- Giữ tông giọng phù hợp với cuộc trò chuyện (không gượng gạo, không quá lố).
- Không sao chép nguyên văn tin nhắn của đối phương.
- Không để tin nhắn trong ngoặc kép ("") mà trả lời như nói chuyện thật.
- Luôn trả lời hoàn toàn bằng tiếng Việt, không pha tiếng Anh.

Tài liệu tham khảo (nếu có):
{context}
"""

contextualize_system_prompt = """
Dựa trên lịch sử trò chuyện và câu hỏi mới nhất của người dùng,
hãy diễn đạt lại câu hỏi sao cho nó có thể hiểu được
mà không cần xem lại lịch sử trò chuyện.
KHÔNG trả lời câu hỏi, chỉ cần diễn đạt lại nếu cần thiết; nếu không, giữ nguyên.
"""

contextualize_q_prompt = ChatPromptTemplate.from_messages([
    ("system", contextualize_system_prompt),
    MessagesPlaceholder("chat_history"),
    ("human", "{input}")
])

qa_prompt = ChatPromptTemplate.from_messages([
    ("system", flirting_system_prompt),
    MessagesPlaceholder("chat_history"),
    ("human", "{input}")
])

def get_rag_chain(model):
    llm = ChatOllama(model=model, temperature=0.4)
    # Truy vấn ngữ nghĩa dựa vào những câu hỏi trước 
    history_aware_retriever = create_history_aware_retriever(
        llm=llm,
        retriever=retriever,
        prompt=contextualize_q_prompt
    )
    # Hướng dẫn chatbot xử lý 
    question_answer_chain = create_stuff_documents_chain(
        llm=llm,
        prompt=qa_prompt
    )
    rag_chain = create_retrieval_chain(
        retriever=history_aware_retriever,
        combine_docs_chain=question_answer_chain
    )

    return rag_chain
    