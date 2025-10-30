import sqlite3

db_name = "dating_app.db"
def get_connection():
    try: 
        connection = sqlite3.connect(db_name)
        return connection 
    except Exception as e:
        print(f"Error: {e}")
        return None 

def create_chat_history():
    """Tạo bảng chat_history lưu lại thông tin trò chuyện ."""
    conn = get_connection()
    conn.execute("""
        CREATE TABLE IF NOT EXISTS chat_history (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            session_id TEXT,
            user_input TEXT,
            assistant_response TEXT,
            model TEXT,
            created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
        )
    """)
    conn.close()

def insert_chat_history(session_id: str, user_input: str, assistant_response: str, model: str):
    """ Ghi lại một lượt hội thoại (người hỏi + phản hồi của AI) vào bảng chat_history."""
    conn = get_connection()
    cursor = conn.cursor()

    cursor.execute('''
        INSERT INTO chat_history (session_id, user_input, assistant_response, model)
        VALUES ( ?, ?, ?, ?)
    ''', (
        session_id,
        user_input,
        assistant_response,
        model
    ))
    conn.commit()
    conn.close()
def create_document_store():
    "Tạo bảng lưu document tuwf local"
    conn = get_connection()
    conn.execute('''CREATE TABLE IF NOT EXISTS document_store
                    (id INTEGER PRIMARY KEY AUTOINCREMENT,
                     filename TEXT,
                     upload_timestamp TIMESTAMP DEFAULT CURRENT_TIMESTAMP)''')
    conn.close()
 
def create_document():
    """Tạo bảng lưu document từ URL"""
    conn = get_connection()
    conn.execute('''
        CREATE TABLE IF NOT EXISTS documents (
            id TEXT PRIMARY KEY,
            url TEXT,
            content TEXT,
            created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
        )
    ''')
    conn.close()

def insert_document_record(filename):
    "Ghi lại document "
    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute('INSERT INTO document_store (filename) VALUES (?)', (filename,))
    file_id = cursor.lastrowid 
    conn.commit()
    conn.close()
    return file_id

def insert_document_url_record(file_id: str, url: str, content: str):
    """Lưu toàn bộ nội dung gốc và URL vào SQLite"""
    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute("""
        INSERT INTO documents (id, url, content)
        VALUES (?, ?, ?)
    """, (file_id, url, content))
    conn.commit()
    conn.close()

def get_chat_history(session_id):
    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute('SELECT user_input, assistant_response FROM chat_history WHERE session_id = ? ORDER BY created_at', (session_id,))
    messages = []
    for row in cursor.fetchall():
        messages.extend([
            {"role": "human", "content": row['user_input']},
            {"role": "ai", "content": row['assistant_response']}
        ])
    conn.close()
    return messages


def delete_document_record(file_id):
    conn = get_connection()
    conn.execute('DELETE FROM document_store WHERE id = ?', (file_id,))
    conn.commit()
    conn.close()
    return True
def delete_document_url_record(file_id):
    conn = get_connection()
    conn.execute('DELETE FROM documents WHERE id = ?', (file_id,))
    conn.commit()
    conn.close()
    return True
def get_all_documents():
    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute('SELECT id, filename, upload_timestamp FROM document_store ORDER BY upload_timestamp DESC')
    documents = cursor.fetchall()
    conn.close()
    return [dict(doc) for doc in documents]
# Tạo bảng 
create_chat_history()
create_document_store()
create_document()

        