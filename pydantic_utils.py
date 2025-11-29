from pydantic import BaseModel, Field
from enum import Enum
from typing import Optional


class ModelName(str, Enum):
    GEMMA31B = "gemma3:1b"
    # GEMINI = ""

class QueryInput (BaseModel):
    question: str
    session_id: Optional[str]=None
    model: ModelName = ModelName.GEMMA31B
    
class QueryResponse(BaseModel):
    answer: str
    session_id: str
    model: ModelName


class DocumentInfo(BaseModel):
    id: str
    filename: str

class URLUpload(BaseModel):
    url: str
    url_id : str 
class DeleteFileRequest(BaseModel):
    id: str
