from langchain_ollama import ChatOllama
from langchain_core.output_parsers import StrOutputParser
from langchain_core.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain_core.documents import Document
from langchain.chains.history_aware_retriever import create_history_aware_retriever
from langchain.chains.combine_documents import create_stuff_documents_chain
from langchain.chains.retrieval import create_retrieval_chain
from langchain_community.vectorstores import Chroma 
import chroma_utils
import db_utils
from typing import List
import json

model = "llama3"
# Lấy docs đã được embedding -> tìm ra k tài liệu liên quan nhất
retriever = db_utils.vector_store.as_retriever(search_kwargs={"k": 4})


output_parser = StrOutputParser()


flirting_prompt = ("""
   You are an AI dating message coach that helps users craft the perfect next message
   in a romantic or flirty conversation. The user wants to impress their match
   and keep the chat fun, natural, and emotionally engaging.

   Guidelines:
   - Suggest 3 natural replies the user could send next.
   - Keep each under 25 words.
   - Fit the tone of the conversation (don’t overdo the flirting).
   - Avoid copying the other person’s message.
   - Make it feel spontaneous and human.
   Some documents : 
   """
)
contextualize_system_prompt = ("""
    "Given a chat history and the latest user question "
    "which might reference context in the chat history, "
    "formulate a standalone question which can be understood "
    "without the chat history. Do NOT answer the question, "
    "just reformulate it if needed and otherwise return it as is."
                               """
)

contextualize_q_prompt = ChatPromptTemplate.from_messages(
    [
        ("system",contextualize_system_prompt),
        MessagesPlaceholder("chat_history"),
        ("human", "{input}")
    ]
)


qa_prompt = ChatPromptTemplate.from_messages(
    [
    ("system", flirting_prompt),
    ("system", "Context: {context}"),
    MessagesPlaceholder("chat_history"),
    ("human", "{input}")
    ]
)

def get_rag_chain(model):
    llm = ChatOllama(model=model, temperature=0.0)
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
    