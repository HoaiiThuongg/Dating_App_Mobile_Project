package com.example.atry.viewmodel.functional

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.AiService.AiHistoryService
import com.example.atry.backend.AiService.FastAPI
import com.example.atry.backend.Message
import com.example.atry.data.singleton.CurrentUser
import com.google.firebase.firestore.ListenerRegistration
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import java.util.Date

class AiViewModel: ViewModel() {
    //----------chatBot--------------
    private val api = FastAPI()

    private val _botAnswer = MutableLiveData<String>()
    val botAnswer: LiveData<String> = _botAnswer
    private val _isLoading = MutableStateFlow(false)
    val isLoading: StateFlow<Boolean> = _isLoading
    fun sendQuestion(question: String, sessionId: String, model: String = "gemma3:1b") {
        val userId = CurrentUser.user?.userId ?: return

        // 1. Push câu hỏi user lên UI + Firestore
        sendMessage(question) // như cũ, sender = user
        _isLoading.value = true
        // 2. Gọi API bot
        viewModelScope.launch(Dispatchers.IO) {
            api.callChatBot(question, sessionId, model, object : FastAPI.ChatCallback {
                override fun onSuccess(answer: String) {
                    // 2a. Update LiveData
                    _botAnswer.postValue(answer)

                    // 2b. Tạo message bot
                    val botMessage = Message("bot", answer)
                    _isLoading.value = false
                    // 2c. Push lên Firestore
                    service.sendMessage(userId, "bot", answer, object : AiHistoryService.ChatCallback {
                        override fun onSuccess(msg: String) { /* có thể log */ }
                        override fun onFailure(error: String) { /* log lỗi */ }
                    })

                }

                override fun onFailure(error: String) {
                    _botAnswer.postValue("Lỗi: $error")
                    _isLoading.value = false
                }
            })
        }
    }
    private val service = AiHistoryService()
    private var listener: ListenerRegistration? = null

    private val _messages = MutableStateFlow<List<Message>>(emptyList())
    val messages: StateFlow<List<Message>> = _messages

    init {
        loadRecentMessages()
        listenRealtime()
    }

    private val receivedMessageIds = mutableSetOf<String>()

    private fun loadRecentMessages(limit: Int = 50) {
        viewModelScope.launch {
            service.getRecentMessages(CurrentUser.user?.userId, limit, object : AiHistoryService.ChatCallbackWithList {
                override fun onSuccess(messagesList: List<Message>) {
                    messagesList.forEach { receivedMessageIds.add(it.messageId) }
                    _messages.value = messagesList.sortedBy { it.timestamp ?: Date() }
                }

                override fun onFailure(error: String) {}
            })
        }
    }

    private fun listenRealtime() {
        listener = service.listenNewMessages(CurrentUser.user?.userId, object : AiHistoryService.MessageListener {
            override fun onMessagesReceived(messagesList: List<Message>) {
                val currentMessages = _messages.value.toMutableList()
                messagesList.forEach { msg ->
                    if (!receivedMessageIds.contains(msg.messageId)) {
                        currentMessages.add(msg)
                        receivedMessageIds.add(msg.messageId)
                    }
                }
                _messages.value = currentMessages.sortedBy { it.timestamp ?: Date() }
            }
        })
    }



    fun sendMessage(content: String) {
        val userId = CurrentUser.user?.userId ?: return

        // 1. tạo tạm message UI nhưng không add messageId vào receivedMessageIds
        val tempMessage = Message(userId, content)
        tempMessage.setMessageId("tmp_${System.currentTimeMillis()}")

        val currentMessages = _messages.value.toMutableList()
        //currentMessages.add(tempMessage)
        _messages.value = currentMessages

        // 2. gửi Firestore
        service.sendMessage(userId, userId, content, object : AiHistoryService.ChatCallback {
            override fun onSuccess(msg: String) {
                // Firestore đã trả về docId → update message tạm
                service.getRecentMessages(userId, 1, object : AiHistoryService.ChatCallbackWithList {
                    override fun onSuccess(messagesList: List<Message>) {
                        // remove tạm
                        _messages.value = _messages.value.filter { it.messageId != tempMessage.messageId }
                        // add message thật
                        messagesList.forEach { msg ->
                            if (!receivedMessageIds.contains(msg.messageId)) {
                                val updatedMessages = _messages.value.toMutableList()
                                updatedMessages.add(msg)
                                receivedMessageIds.add(msg.messageId)
                                _messages.value = updatedMessages.sortedBy { it.timestamp ?: Date() }
                            }
                        }
                    }

                    override fun onFailure(error: String) {}
                })
            }

            override fun onFailure(error: String) {}
        })
    }


    override fun onCleared() {
        super.onCleared()
        listener?.remove()
    }
}