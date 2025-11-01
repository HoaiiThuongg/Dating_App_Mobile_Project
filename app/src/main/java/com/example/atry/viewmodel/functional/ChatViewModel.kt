package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.compose.runtime.mutableStateListOf
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.SavedStateHandle
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.*
import com.example.atry.backend.AiService.FastAPI
import com.example.atry.data.singleton.CurrentUser
import com.google.firebase.firestore.DocumentSnapshot
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import java.util.Date

data class ChatUiState(
    val isLoading: Boolean = false,
    val errorMessage: String? = null,
    val matchedUser: MatchedUser? = null
)

sealed class ChatItem {
    data class MessageItem(val message: Message) : ChatItem()
    data class GameCardItem(val card: GameCard) : ChatItem()
}

class ChatViewModel(
    savedStateHandle: SavedStateHandle,
    private val messageService: MessageService,
    private val userService: UserService,
    private val matchedUser: MatchedUser
) : ViewModel() {

    private val gameCardService= GameCardService()
    private val matchId = matchedUser.matchId
    private val _uiState = MutableStateFlow(ChatUiState(isLoading = true))
    val uiState: StateFlow<ChatUiState> = _uiState.asStateFlow()

    // ----- Giữ nguyên danh sách messages cũ -----
    val messages = mutableStateListOf<Message>()
    private var lastDoc: DocumentSnapshot? = null

    // ----- Danh sách chat items (message + gameCard) -----
    val chatItems = mutableStateListOf<ChatItem>()

    init {
        viewModelScope.launch {
            loadMatchedUser()
            loadInitialChatItems()
            listenNewMessages()
            observeGameCards()
        }
    }

    private fun loadMatchedUser() {
        _uiState.update { it.copy(matchedUser = matchedUser) }
    }

    private fun loadInitialChatItems() {
        // 1. Load messages
        messageService.getInitialMessages(matchId, object : MessageService.LoadMessagesCallback {
            override fun onSuccess(messagesList: List<Message>) {
                messages.addAll(messagesList.map { it })

                // Cập nhật lastDoc nếu dùng phân trang
               // _uiState.update { it.copy(isLoading = false, errorMessage = null) }

                // 2. Load game cards
                gameCardService.getGameCards(matchId, object : GameCardService.LoadGameCardsCallback {
                    override fun onSuccess(gameCards: List<GameCard>) {
                        // Merge message + gameCard theo timestamp tăng dần
                        val merged: List<ChatItem> = (messages.map { ChatItem.MessageItem(it) } +
                                gameCards.map { ChatItem.GameCardItem(it) })
                            .sortedBy { item: ChatItem ->
                                when (item) {
                                    is ChatItem.MessageItem -> item.message.timestamp ?: Date(0)
                                    is ChatItem.GameCardItem -> item.card.timestamp ?: Date(0)
                                }
                            }

                        chatItems.addAll(merged)
                        _uiState.update { it.copy(isLoading = false, errorMessage = null) }
                    }

                    override fun onError(e: Exception) {
                        _uiState.update { it.copy(errorMessage = e.message, isLoading = false) }
                        Log.e("ChatViewModel", "Load gameCards failed", e)
                    }
                })
            }

            override fun onError(e: Exception) {
                _uiState.update { it.copy(errorMessage = e.message, isLoading = false) }
                Log.e("ChatViewModel", "Load messages failed", e)
            }
        })
    }

    private fun listenNewMessages() {
        messageService.listenForLastMessage(matchId, object : MessageService.LastMessageListener {
            override fun onLastMessageReceived(lastMessage: Message) {

                // Kiểm tra ở chatItems thôi là đủ
                val exists = chatItems.any {
                    it is ChatItem.MessageItem && it.message.messageId == lastMessage.messageId
                }
                if (!exists) {
                    chatItems.add(ChatItem.MessageItem(lastMessage))
                }
            }
        })
    }


    // --- GameCard actions ---
    // trong ViewModel

    fun createGameCard(card: GameCard) {
        gameCardService.createGameCard(matchId, card, object : GameCardService.CreateGameCardCallback {
            override fun onSuccess(card: GameCard) {
                // thêm vào state list
                chatItems.add(ChatItem.GameCardItem(card))
                Log.d("ChatViewModel", "Create gameCard success")
            }

            override fun onError(e: Exception) {
                Log.e("ChatViewModel", "Create gameCard failed", e)
            }
        })
    }

    private val _botAnswer = MutableLiveData<String>()
    val botAnswer: LiveData<String> = _botAnswer
    private val api = FastAPI()


    private val _isLoading = MutableStateFlow(false)
    val isLoading: StateFlow<Boolean> = _isLoading
    fun sendQuestion(question: String, sessionId: String, model: String = "gemma3:1b") {
        val userId = CurrentUser.user?.userId ?: return

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
                }
                override fun onFailure(error: String) {
                    _botAnswer.postValue("Lỗi: $error")
                    _isLoading.value = false
                }
            })
        }
    }
    fun createGameCard() {
        val userId = CurrentUser.user?.userId ?: return
        _isLoading.value = true  // bật loading

        // 1. Gọi bot để sinh câu hỏi + answer
        val sessionId = "some_session_id" // thay bằng session thực tế
        val model = "gemma3:1b"
        sendQuestion("Hãy tạo 1 câu hỏi trắc nghiệm vui với 2 đáp án form là câu hỏi | đáp án 1 | đáp án 2 ", sessionId, model)

        // 2. Khi bot trả về kết quả
        _botAnswer.observeForever { answer ->
            // answer có thể là "Câu hỏi? | Đáp án1 | Đáp án2"
            val parts = answer.split("|").map { it.trim() }
            if (parts.size >= 3) {
                val questionFromBot = parts[0]
                val ans1 = parts[1]
                val ans2 = parts[2]

                val card = GameCard().apply {
                    id = null
                    title = questionFromBot
                    startBy = userId
                    this.ans1 = ans1
                    this.ans2 = ans2
                    pickedByAns1 = emptyList()
                    pickedByAns2 = emptyList()
                }
                // 3. Push lên Firestore
                createGameCard(card)
            }

            _isLoading.value = false
            _botAnswer.removeObserver {} // tránh leak
        }
    }

    fun updateUserChoice(gameCardId: String, userId: String, ansPicked: Int) {
        // gửi lên backend
        gameCardService.updateUserChoice(matchId, gameCardId, userId, ansPicked)

        // update local state ngay
        val idx = chatItems.indexOfFirst { it is ChatItem.GameCardItem && it.card.id == gameCardId }
        if (idx != -1) {
            val oldCard = (chatItems[idx] as ChatItem.GameCardItem).card
            val newCard = oldCard.cloneWithUpdatedChoice(userId, ansPicked)

            chatItems[idx] = ChatItem.GameCardItem(newCard)
        }
    }
    fun GameCard.cloneWithUpdatedChoice(userId: String, ansPicked: Int): GameCard {
        val newCard = GameCard()
        newCard.id = this.id
        newCard.title = this.title
        newCard.startBy = this.startBy
        newCard.question = this.question
        newCard.ans1 = this.ans1
        newCard.ans2 = this.ans2
        newCard.pickedByAns1 = this.pickedByAns1.toMutableList()
        newCard.pickedByAns2 = this.pickedByAns2.toMutableList()

        if (ansPicked == 1 && !newCard.pickedByAns1.contains(userId)) {
            newCard.pickedByAns1.add(userId)
        } else if (ansPicked == 2 && !newCard.pickedByAns2.contains(userId)) {
            newCard.pickedByAns2.add(userId)
        }

        return newCard
    }

    // realtime listener
    private fun observeGameCards() {
        gameCardService.listenGameCards(matchId, object : GameCardService.GameCardListener {
            override fun onChanged(updatedCards: List<GameCard>) {
                updatedCards.forEach { newCard ->
                    val idx = chatItems.indexOfFirst { it is ChatItem.GameCardItem && it.card.id == newCard.id }
                    if (idx != -1) {
                        // update đúng card đó
                        chatItems[idx] = ChatItem.GameCardItem(newCard)
                    } else {
                        // chưa có card -> thêm vào cuối list
                        chatItems.add(ChatItem.GameCardItem(newCard))
                    }
                }
            }
        })
    }




    // ----- Phân trang messages vẫn giữ biến lastDoc -----
    fun loadMoreMessages(limit: Int = 20) {
        if (lastDoc == null) {
            _uiState.value = _uiState.value.copy(
                errorMessage = "Không thể tải thêm tin nhắn do chưa có lastDoc",
                isLoading = false
            )
            return
        }
        messageService.loadMoreMessages(matchId, lastDoc!!, limit, object : MessageService.LoadMessagesWithPaginationCallback {
            override fun onSuccess(messagesList: List<Message>, newLastDoc: DocumentSnapshot) {
                messages.addAll(messagesList)
                lastDoc = newLastDoc
                messagesList.forEach { chatItems.add(ChatItem.MessageItem(it)) }
            }

            // Phải override cả hàm onSuccess cũ, nếu không sẽ lỗi
            override fun onSuccess(messagesList: List<Message>) {
                // Có thể gọi lại với lastDoc hiện tại, hoặc bỏ trống
                onSuccess(messagesList, lastDoc ?: return)
            }

            override fun onError(e: Exception) {
                _uiState.value = _uiState.value.copy(errorMessage = e.message, isLoading = false)
            }
        })

    }

    override fun onCleared() {
        super.onCleared()
        messageService.cleanup()
    }
}
