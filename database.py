import sqlite3
from fastapi import HTTPException

db_name = "dating_app.db"
def get_connection():
    try: 
        connection = sqlite3.connect(db_name)
        connection.row_factory = sqlite3.Row
        return connection 
    except Exception as e:
        print(f"Error: {e}")
        return None 

def create_chat_history():
    """Tạo bảng chat_history lưu lại thông tin trò chuyện ."""
    connection = get_connection()
    connection.execute("""
        CREATE TABLE IF NOT EXISTS chat_history (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            session_id TEXT,
            user_input TEXT,
            assistant_response TEXT,
            model TEXT,
            created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
        )
    """)
    connection.close()

def insert_chat_history(session_id: str, user_input: str, assistant_response: str, model: str):
    """ Ghi lại một lượt hội thoại (người hỏi + phản hồi của AI) vào bảng chat_history."""
    connection = get_connection()
    cursor = connection.cursor()

    cursor.execute('''
        INSERT INTO chat_history (session_id, user_input, assistant_response, model)
        VALUES ( ?, ?, ?, ?)
    ''', (
        session_id,
        user_input,
        assistant_response,
        model
    ))
    connection.commit()
    connection.close()
def create_document_store():
    "Tạo bảng lưu document tuwf local"
    connection = get_connection()
    connection.execute('''CREATE TABLE IF NOT EXISTS document_store
                    (id INTEGER PRIMARY KEY AUTOINCREMENT,
                     filename TEXT,
                     upload_timestamp TIMESTAMP DEFAULT CURRENT_TIMESTAMP)''')
    connection.close()
 
def create_document():
    """Tạo bảng lưu document từ URL"""
    connection = get_connection()
    connection.execute('''
        CREATE TABLE IF NOT EXISTS documents (
            id TEXT PRIMARY KEY,
            url TEXT,
            content TEXT,
            created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
        )
    ''')
    connection.close()

def insert_document_record(filename):
    "Ghi lại document "
    connection = get_connection()
    cursor = connection.cursor()
    cursor.execute("SELECT COUNT(*) FROM document_store WHERE filename = ?", (filename,))
    count = cursor.fetchone()[0]
    if count > 0:
        connection.close()
        raise HTTPException(status_code=409, detail="File đã tồn tại")
    cursor.execute('INSERT INTO document_store (filename) VALUES (?)', (filename,))
    
    file_id = cursor.lastrowid 
    connection.commit()
    connection.close()
    return file_id

def insert_document_url_record(file_id: str, url: str, content: str):
    """Lưu toàn bộ nội dung gốc và URL vào SQLite"""
    connection = get_connection()
    cursor = connection.cursor()
    cursor.execute("""
        INSERT INTO documents (id, url, content)
        VALUES (?, ?, ?)
    """, (file_id, url, content))
    
    connection.commit()
    connection.close()

def get_chat_history(session_id):
    connection = get_connection()
    cursor = connection.cursor()
    cursor.execute('SELECT user_input, assistant_response FROM chat_history WHERE session_id = ? ORDER BY created_at', (session_id,))
    messages = []
    for row in cursor.fetchall():
        messages.extend([
            {"role": "human", "content": row['user_input']},
            {"role": "ai", "content": row['assistant_response']}
        ])
    connection.close()
    return messages


def delete_document_record(file_id):
    connection = get_connection()
    connection.execute('DELETE FROM document_store WHERE id = ?', (file_id,))
    connection.commit()
    connection.close()
    return True
def delete_document_url_record(file_id):
    connection = get_connection()
    connection.execute('DELETE FROM documents WHERE id = ?', (file_id,))
    connection.commit()
    connection.close()
    return True
def get_all_documents():
    connection = get_connection()
    cursor = connection.cursor()
    cursor.execute('SELECT id, filename, upload_timestamp FROM document_store ORDER BY upload_timestamp DESC')
    documents = cursor.fetchall()
    
    result = []
    for doc in documents:
        result.append({
            "id": str(doc[0]),
            "filename": doc[1],
        })
    connection.close()
    return result
# Tạo bảng 
create_chat_history()
create_document_store()
create_document()

        