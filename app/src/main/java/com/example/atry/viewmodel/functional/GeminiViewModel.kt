package com.example.atry.viewmodel.functional

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.GeminiApiService // Import Service Java
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

data class IcebreakerUiState(
    // ⚠️ Đã xóa 'questions' và 'showDialog' vì chúng mâu thuẫn với việc hiển thị trực tiếp vào input field
    val isLoading: Boolean = false,
    val error: String? = null
)

class GeminiViewModel() : ViewModel() {
    private val geminiService = GeminiApiService() // Khởi tạo Service

    // 🚨 1. Dùng biến này để chứa trạng thái input (null, "Đang suy nghĩ...", hoặc câu hỏi)
    private val _suggestionInput = MutableStateFlow<String?>(null)
    val suggestionInput: StateFlow<String?> = _suggestionInput.asStateFlow()

    private val _uiState = MutableStateFlow(IcebreakerUiState())
    val uiState: StateFlow<IcebreakerUiState> = _uiState.asStateFlow()

    fun loadIcebreakers(commonInterests: String) {
        if (_uiState.value.isLoading) return

        // 🚨 2. Set trạng thái Loading và hiển thị text "Đang suy nghĩ..." ngay lập tức
        _uiState.update { it.copy(isLoading = true, error = null) }
        _suggestionInput.value = "Đang suy nghĩ..."

        viewModelScope.launch(Dispatchers.IO) {

            val questions = try {
                geminiService.generateIcebreakers(commonInterests)
            } catch (e: Exception) {
                withContext(Dispatchers.Main) {
                    _uiState.update { it.copy(isLoading = false, error = "Lỗi API/Kết nối: ${e.message}") }
                    _suggestionInput.value = null // Xóa trạng thái suy nghĩ
                }
                return@launch
            }

            withContext(Dispatchers.Main) {
                _uiState.update { it.copy(isLoading = false) }
                val suggestedQuestion = questions.firstOrNull()

                if (suggestedQuestion != null) {
                    // 🚨 3. Nếu có gợi ý, thay thế text tạm thời bằng gợi ý đó
                    _suggestionInput.value = suggestedQuestion
                } else {
                    // Xóa trạng thái suy nghĩ nếu không có kết quả
                    _suggestionInput.value = null
                    _uiState.update { it.copy(error = "Không thể tạo câu hỏi.") }
                }
            }
        }
    }

    fun clearSuggestionInput() {
        _suggestionInput.value = null
    }

    // Trong ChatViewModel hoặc một GameCardViewModel
    fun createGameCardFromAI(commonInterests: String) {
        viewModelScope.launch(Dispatchers.IO) {
            val gameCardString = geminiService.generateGameCard(commonInterests)

            if (gameCardString != null) {
                // gameCardString sẽ có định dạng: "câu hỏi | đáp án 1 | đáp án 2"
                val parts = gameCardString.split("|").map { it.trim() }

                if (parts.size >= 3) {
                    val question = parts[0]
                    val ans1 = parts[1]
                    val ans2 = parts[2]

                    // TODO: Tạo đối tượng GameCard và gọi createGameCard(card)
                    // ...
                }
            } else {
                // TODO: Xử lý lỗi
            }
        }
    }

    // Trong một ChatWithAIVieModel riêng biệt
    fun getSimpleAiResponse(userMessage: String) {
        viewModelScope.launch(Dispatchers.IO) {
            val response = geminiService.simpleChat(userMessage)

            withContext(Dispatchers.Main) {
                if (response != null) {
                    // TODO: Cập nhật LiveData/StateFlow để hiển thị response
                } else {
                    // TODO: Xử lý lỗi
                }
            }
        }
    }
}