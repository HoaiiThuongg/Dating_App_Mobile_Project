# 🔍 Tại sao Code Coverage = 0%?

## ❌ Vấn đề hiện tại

### 1. Tests chỉ test Data Classes
Các test hiện tại chỉ test **data classes** (LoginState, RegisterState, ChatUiState, etc.):

```kotlin
// LoginViewModelTest.kt - CHỈ test data class
@Test
fun `LoginState initial values are correct`() {
    val state = LoginState()  // ← Chỉ tạo object, không gọi ViewModel methods
    assertFalse(state.isLoading)
}
```

**Vấn đề**: Data classes không có business logic, chỉ là containers. JaCoCo không tính coverage cho việc tạo object.

### 2. ViewModels không được test
ViewModels có business logic thực sự nhưng **KHÔNG được test**:

```kotlin
// LoginViewModel.kt - CÓ business logic
class LoginViewModel : AndroidViewModel {
    fun login(email: String, password: String) {
        _state.value = LoginState(isLoading = true)
        authService.loginWithEmailPassword(...)  // ← Business logic này KHÔNG được test
    }
}
```

### 3. JaCoCo chỉ đo code được CHẠY
- ✅ Code được gọi → Có coverage
- ❌ Code không được gọi → 0% coverage

## ✅ Giải pháp

### Bước 1: Test ViewModels với Mocks

Thay vì chỉ test data classes, cần test ViewModels thực sự:

```kotlin
// LoginViewModelTest.kt - Test ViewModel thực sự
@Test
fun `login sets loading state`() = runTest {
    // Arrange
    val mockAuthService = mock<EmailLinkAuthService>()
    val viewModel = LoginViewModel(mockApplication, mockAuthService)
    
    // Act
    viewModel.login("test@example.com", "password123")
    
    // Assert
    assertTrue(viewModel.state.value.isLoading)  // ← ViewModel code được chạy!
}
```

### Bước 2: Test Business Logic

Test các functions có logic:

```kotlin
// AlertViewModelTest.kt - Test business logic
@Test
fun `showAlert sets alert visible`() {
    val viewModel = AlertViewModel()
    
    viewModel.showAlert()  // ← Gọi method thực sự
    
    assertTrue(viewModel.isAlertVisible.value)  // ← Code được chạy!
}
```

### Bước 3: Test Utilities và Services

Test các helper functions:

```kotlin
// UserServiceTest.kt
@Test
fun `formatPhoneNumber formats correctly`() {
    val result = UserService.formatPhoneNumber("0123456789")
    assertEquals("+84123456789", result)  // ← Business logic được test
}
```

## 📊 Tiến độ hiện tại

### ✅ Đã có:
- ✅ Data class tests (LoginState, RegisterState, etc.)
- ✅ AlertViewModel tests (một phần)
- ✅ WarningCardViewModel tests

### ❌ Chưa có:
- ❌ ViewModel tests với mocks (LoginViewModel, RegisterViewModel, etc.)
- ❌ Service tests (UserService, SwipeService, etc.)
- ❌ Utility function tests
- ❌ Repository tests

## 🎯 Mục tiêu Coverage

### Coverage hiện tại: **0%**
- Instructions: 0%
- Branches: 0%
- Lines: 0%

### Mục tiêu thực tế: **60-80%**
- ViewModels: 80%+
- Services: 70%+
- Utilities: 90%+
- UI Components: 30-50% (không cần 100%)

## 🚀 Cách tăng Coverage

### 1. Tạo ViewModel Tests với Mocks

```kotlin
// LoginViewModelTest.kt
class LoginViewModelTest {
    @Mock
    private lateinit var mockAuthService: EmailLinkAuthService
    
    @Mock
    private lateinit var mockApplication: Application
    
    @Before
    fun setUp() {
        MockitoAnnotations.openMocks(this)
    }
    
    @Test
    fun `login sets loading state`() = runTest {
        val viewModel = LoginViewModel(mockApplication)
        // Mock authService behavior
        whenever(mockAuthService.loginWithEmailPassword(...))
            .thenAnswer { callback ->
                callback.onSuccess("Success")
            }
        
        viewModel.login("test@example.com", "password")
        
        assertTrue(viewModel.state.value.isLoading)
    }
}
```

### 2. Test Error Cases

```kotlin
@Test
fun `login handles error correctly`() = runTest {
    whenever(mockAuthService.loginWithEmailPassword(...))
        .thenAnswer { callback ->
            callback.onFailure("Invalid credentials")
        }
    
    viewModel.login("wrong@example.com", "wrong")
    
    assertNotNull(viewModel.state.value.error)
    assertEquals("Invalid credentials", viewModel.state.value.error)
}
```

### 3. Test State Transitions

```kotlin
@Test
fun `state transitions correctly`() = runTest {
    // Initial state
    assertFalse(viewModel.state.value.isLoading)
    
    // Loading state
    viewModel.login("test@example.com", "password")
    assertTrue(viewModel.state.value.isLoading)
    
    // Success state
    // ... wait for callback
    assertTrue(viewModel.state.value.isSuccess)
}
```

## 📝 Checklist để tăng Coverage

- [ ] LoginViewModel tests với mocks
- [ ] RegisterViewModel tests với mocks
- [ ] HomeViewModel tests với mocks
- [ ] ChatViewModel tests với mocks
- [ ] MessageViewModel tests với mocks
- [ ] LikeYouViewModel tests với mocks
- [ ] AlertViewModel tests (đã có, cần mở rộng)
- [ ] UserService tests
- [ ] SwipeService tests
- [ ] MessageService tests
- [ ] Utility function tests

## 🔧 Cấu hình đã sửa

✅ Đã sửa `build.gradle.kts`:
- ✅ Path class files: `intermediates/classes/debug` (thay vì `javac/debug`)
- ✅ Execution data path: `outputs/unit_test_code_coverage/debugUnitTest`

## 📌 Lưu ý

1. **Coverage không phải tất cả**: 100% coverage không có nghĩa là code không có bug
2. **Test chất lượng > Test số lượng**: Test cases tốt quan trọng hơn nhiều test cases kém
3. **Focus vào business logic**: Ưu tiên test logic nghiệp vụ hơn UI rendering
4. **Firebase dependencies**: Cần mock Firebase services trong unit tests

---

**Ngày tạo**: 2025-01-07
**Trạng thái**: ⚠️ Coverage = 0% - Cần tạo tests cho ViewModels và Services

