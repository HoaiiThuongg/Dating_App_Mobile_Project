package com.example.atry.viewmodel.functional

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.AiService.FastAPI
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class AiViewModel: ViewModel() {
    //----------chatBot--------------
    private val api = FastAPI()

    private val _botAnswer = MutableLiveData<String>()
    val botAnswer: LiveData<String> = _botAnswer

    fun sendQuestion(question: String, sessionId: String, model: String = "llama3") {
        viewModelScope.launch(Dispatchers.IO) {
            api.callChatBot(question, sessionId, model, object : FastAPI.ChatCallback {
                override fun onSuccess(answer: String) {
                    _botAnswer.postValue(answer) // update LiveData
                }

                override fun onFailure(error: String) {
                    _botAnswer.postValue("Lỗi: $error")
                }
            })
        }
    }
}