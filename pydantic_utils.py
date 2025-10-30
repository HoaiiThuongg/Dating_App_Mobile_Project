from pydantic import BaseModel, Field
from enum import Enum
from typing import Optional


class ModelName(str, Enum):
    LLAMA3 = "llama3"

class QueryInput (BaseModel):
    question: str
    session_id: Optional[str]=None
    model: ModelName = ModelName.LLAMA3
    
class QueryResponse(BaseModel):
    answer: str
    session_id: str
    model: ModelName


class DocumentInfo(BaseModel):
    file_id: str
    file_name: str

class URLUpload(BaseModel):
    url: str
    url_id : str 
class DeleteFileRequest(BaseModel):
    file_id: str
