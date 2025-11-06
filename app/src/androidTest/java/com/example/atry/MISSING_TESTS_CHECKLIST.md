# ✅ Checklist: Test Cases Cần Bổ Sung

## 📊 Tổng quan Coverage hiện tại

### ✅ Đã có test:
- **Unit Tests**: 1 file (LoginViewModelTest)
- **UI Tests**: 5 files (SplashScreen, LoginScreen, RegisterEntryScreen, HomeScreen, ProfileScreen)

### ❌ Cần bổ sung: ~37 test files

---

## 🎯 Ưu tiên cao - ViewModels (Business Logic)

### Auth ViewModels
- [ ] **RegisterViewModelTest** - `viewmodel/auth/RegisterViewModel.kt`
  - Test đăng ký thành công
  - Test validation email/password
  - Test error handling
  
- [ ] **UserInfoSetupViewModelTest** - `viewmodel/auth/UserInfoSetupViewModel.kt`
  - Test setup user info
  - Test validation các trường thông tin

### Functional ViewModels
- [ ] **HomeViewModelTest** - `viewmodel/functional/HomeViewModel.kt` ⭐ **QUAN TRỌNG**
  - Test load users
  - Test swipe left/right
  - Test match logic
  - Test empty state
  
- [ ] **ChatViewModelTest** - `viewmodel/functional/ChatViewModel.kt` ⭐ **QUAN TRỌNG**
  - Test gửi tin nhắn
  - Test nhận tin nhắn
  - Test load chat history
  - Test typing indicator
  
- [ ] **MessageViewModelTest** - `viewmodel/functional/MessageViewModel.kt`
  - Test load danh sách tin nhắn
  - Test filter/search
  - Test mark as read
  
- [ ] **MyProfileViewModelTest** - `viewmodel/functional/MyProfileViewModel.kt`
  - Test load profile
  - Test update profile
  - Test logout
  
- [ ] **EditProfileViewModelTest** - `viewmodel/functional/EditProfileViewModel.kt`
  - Test edit profile fields
  - Test validation
  - Test save changes
  
- [ ] **LikeYouViewModelTest** - `viewmodel/functional/LikeYouViewModel.kt`
  - Test load liked users
  - Test accept/reject match
  
- [ ] **DetailedProfileViewModelTest** - `viewmodel/functional/DetailedProfileViewModel.kt`
  - Test load detailed profile
  - Test like/unlike
  
- [ ] **MatchDetailViewModelTest** - `viewmodel/functional/MatchDetailViewModel.kt`
  - Test load match details
  - Test unmatch
  
- [ ] **SwipeViewModelTest** - `viewmodel/functional/SwipeViewModel.kt`
  - Test swipe gestures
  - Test match logic
  
- [ ] **SendViewModelTest** - `viewmodel/functional/SendViewModel.kt`
  - Test send message
  - Test send image
  
- [ ] **GeminiViewModelTest** - `viewmodel/functional/GeminiViewModel.kt`
  - Test AI chat responses
  - Test error handling
  
- [ ] **AiViewModelTest** - `viewmodel/functional/AiViewModel.kt`
  - Test AI interactions
  
- [ ] **QRViewModelTest** - `viewmodel/functional/QRViewModel.kt`
  - Test generate QR code
  - Test scan QR code

### Composal ViewModels
- [ ] **AlertViewModelTest** - `viewmodel/composal/AlertViewModel.kt`
  - Test show/hide alerts
  - Test match success card
  
- [ ] **NotificationViewModelTest** - `viewmodel/composal/NotificationViewModel.kt`
  - Test notifications
  
- [ ] **WarningCardViewModelTest** - `viewmodel/composal/WarningCardViewModel.kt`
  - Test warning card display

---

## 🎨 Ưu tiên trung bình - UI Screens

### Auth Screens
- [ ] **EmailInputScreenTest** - `ui/screens/auth/register/EmailInputScreen.kt`
  - Test email input validation
  - Test navigation
  
- [ ] **OtpInputScreenTest** - `ui/screens/auth/forgetPassword/OtpInputScreen.kt`
  - Test OTP input
  - Test verify OTP
  
- [ ] **InfoInput1Test** - `ui/screens/auth/register/InfoInput1.kt`
  - Test form inputs
  - Test validation
  
- [ ] **InfoInput2Test** - `ui/screens/auth/register/InfoInput2.kt`
  - Test form inputs
  - Test validation
  
- [ ] **HobbiesInputTest** - `ui/screens/auth/register/HobbiesInput.kt`
  - Test hobbies selection
  
- [ ] **PicturesInputTest** - `ui/screens/auth/register/PicturesInput.kt`
  - Test image upload
  - Test image selection
  
- [ ] **PasswordInputScreenTest** - `ui/screens/auth/register/PasswordInputScreen.kt`
  - Test password input
  - Test password validation
  
- [ ] **ForgetPasswordTest** - `ui/screens/auth/forgetPassword/ForgetPassword.kt`
  - Test forgot password flow

### Functional Screens
- [ ] **MessageScreenTest** - `ui/screens/functionalScreens/message/MessageScreen.kt` ⭐
  - Test hiển thị danh sách tin nhắn
  - Test click vào chat
  - Test empty state
  
- [ ] **LikeYouScreenTest** - `ui/screens/functionalScreens/likeYou/LikeYouScreen.kt`
  - Test hiển thị liked users
  - Test accept/reject
  
- [ ] **MyProfileScreenTest** - `ui/screens/functionalScreens/myProfile/MyProfileScreen.kt`
  - Test hiển thị profile
  - Test edit button
  - Test settings button
  
- [ ] **ChatScreenTest** - `ui/screens/functionalScreens/chat/ChatScreen.kt` ⭐ **QUAN TRỌNG**
  - Test hiển thị tin nhắn
  - Test gửi tin nhắn
  - Test input field
  - Test send button
  
- [ ] **AiChatScreenTest** - `ui/screens/functionalScreens/aiChatBot/AiChatScreen.kt`
  - Test AI chat interface
  - Test send message
  
- [ ] **DetailedProfileScreenTest** - `ui/screens/functionalScreens/detailedProfile/DetailedProfileScreen.kt`
  - Test hiển thị profile details
  - Test like button
  - Test back navigation
  
- [ ] **EditProfileScreenTest** - `ui/screens/functionalScreens/edit/EditProfileScreen.kt`
  - Test edit form
  - Test save changes
  - Test cancel
  
- [ ] **SettingsScreenTest** - `ui/screens/functionalScreens/settings/SettingScreen.kt`
  - Test settings options
  - Test theme toggle
  - Test logout
  
- [ ] **SupportScreenTest** - `ui/screens/functionalScreens/support/SupportScreen.kt`
  - Test support options
  
- [ ] **DevelopingScreenTest** - `ui/screens/functionalScreens/developing/DevelopingScreen.kt`
  - Test placeholder screen

### Components
- [ ] **UserQrScreenTest** - `ui/components/qr/UserQrScreen.kt`
  - Test QR code display
  - Test share QR

---

## 🔧 Cần Refactor để Test được

### Screens cần refactor:
1. **HomeScreen** - Cần inject `HomeViewModel` thay vì dùng `viewModel()`
2. **RegisterEntryScreen** - Cần interface `IRegisterViewModel` giống `ILoginViewModel`
3. **MessageScreen** - Cần inject `MessageViewModel`
4. **ChatScreen** - Cần inject `ChatViewModel`

### Pattern để follow:
```kotlin
// Thay vì:
@Composable
fun HomeScreen() {
    val viewModel: HomeViewModel = viewModel()
    // ...
}

// Nên làm:
@Composable
fun HomeScreen(
    viewModel: HomeViewModel = viewModel() // Có thể inject trong test
) {
    // ...
}
```

---

## 📝 Template cho Test mới

### Unit Test Template:
```kotlin
package com.example.atry.viewmodel.functional

import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.test.runTest
import org.junit.Test
import org.junit.Assert.*

@OptIn(ExperimentalCoroutinesApi::class)
class HomeViewModelTest {
    
    @Test
    fun `test example`() = runTest {
        // Arrange
        // val viewModel = HomeViewModel(/* dependencies */)
        
        // Act
        // viewModel.someAction()
        
        // Assert
        // assertEquals(expected, actual)
    }
}
```

### UI Test Template:
```kotlin
package com.example.atry.ui.screens.functionalScreens.home

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class HomeScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun `test example`() {
        composeRule.setContent {
            HomeScreen(/* parameters */)
        }
        
        // Test assertions
    }
}
```

---

## 🎯 Mục tiêu Coverage

- **Hiện tại**: ~15-20% (ước tính)
- **Mục tiêu ngắn hạn**: 50% (sau khi test các ViewModels quan trọng)
- **Mục tiêu trung hạn**: 70% (sau khi test các Screens quan trọng)
- **Mục tiêu dài hạn**: 80%+ (test toàn bộ)

---

## 📌 Lưu ý

1. **Ưu tiên test business logic** (ViewModels) trước UI
2. **Test các edge cases**: empty state, error state, loading state
3. **Test user interactions**: click, input, swipe
4. **Maintain tests**: Cập nhật khi code thay đổi
5. **Test quality > quantity**: Viết test tốt quan trọng hơn nhiều test kém

---

**Cập nhật lần cuối**: $(Get-Date -Format "yyyy-MM-dd")
**Trạng thái**: 📝 Đang triển khai

