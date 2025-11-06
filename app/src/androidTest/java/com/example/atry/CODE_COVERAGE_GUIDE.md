# 📊 Hướng dẫn Đo Code Coverage

## 🎯 Tổng quan

Tài liệu này hướng dẫn cách đo độ phủ code (code coverage) từ các test cases đã viết và cách cải thiện coverage.

## ✅ Đã cấu hình

### 1. JaCoCo Plugin
- ✅ Đã thêm plugin `jacoco` vào `app/build.gradle.kts`
- ✅ Đã cấu hình `isTestCoverageEnabled = true` cho buildType debug
- ✅ Đã tạo task `jacocoTestReport` để generate coverage report

## 📋 Cách đo Code Coverage

### Phương pháp 1: Sử dụng Gradle Tasks (Khuyến nghị)

#### A. Chạy Unit Tests và tạo coverage report:
```bash
# Windows PowerShell
.\gradlew testDebugUnitTest jacocoTestReport

# Linux/Mac
./gradlew testDebugUnitTest jacocoTestReport
```

#### B. Xem coverage report:
Sau khi chạy lệnh trên, mở file HTML report:
```
app/build/reports/jacoco/jacocoTestReport/html/index.html
```

Mở file này trong trình duyệt để xem:
- **Line Coverage**: % dòng code được chạy
- **Branch Coverage**: % nhánh code được test
- **Method Coverage**: % method được gọi
- **Class Coverage**: % class được test

### Phương pháp 2: Sử dụng Android Studio

#### A. Chạy test với coverage:
1. Click chuột phải vào test class hoặc test method
2. Chọn **"Run 'TestName' with Coverage"**
3. Android Studio sẽ tự động hiển thị coverage trong tab **Coverage**

#### B. Xem coverage report:
- Mở tab **Coverage** ở dưới cùng của Android Studio
- Click vào các package/class để xem chi tiết
- Màu xanh = đã được test
- Màu đỏ = chưa được test

### Phương pháp 3: Chạy Android Instrumented Tests với Coverage

```bash
# Kết nối thiết bị/emulator trước
.\gradlew connectedDebugAndroidTest createDebugCoverageReport
```

Coverage report sẽ được tạo tại:
```
app/build/outputs/code_coverage/debugAndroidTest/connected/index.html
```

## 📊 Phân tích Coverage hiện tại

### ✅ Test đã có:

#### Unit Tests (`app/src/test/`):
- ✅ `LoginViewModelTest.kt` - Test LoginViewModel

#### UI Tests (`app/src/androidTest/`):
- ✅ `SplashScreenTest.kt` - Test SplashScreen
- ✅ `LoginScreenMockTest.kt` - Test LoginScreen (6 test cases)
- ✅ `RegisterEntryScreenTest.kt` - Test RegisterEntryScreen
- ✅ `HomeScreenTest.kt` - Test HomeScreen (3 test cases - cần cải thiện)
- ✅ `ProfileScreenTest.kt` - Test ProfileScreen

### ❌ Test còn thiếu (Cần bổ sung):

#### ViewModels chưa có test:
1. **RegisterViewModel** - `viewmodel/auth/RegisterViewModel.kt`
2. **UserInfoSetupViewModel** - `viewmodel/auth/UserInfoSetupViewModel.kt`
3. **HomeViewModel** - `viewmodel/functional/HomeViewModel.kt`
4. **ChatViewModel** - `viewmodel/functional/ChatViewModel.kt`
5. **MessageViewModel** - `viewmodel/functional/MessageViewModel.kt`
6. **MyProfileViewModel** - `viewmodel/functional/MyProfileViewModel.kt`
7. **EditProfileViewModel** - `viewmodel/functional/EditProfileViewModel.kt`
8. **LikeYouViewModel** - `viewmodel/functional/LikeYouViewModel.kt`
9. **DetailedProfileViewModel** - `viewmodel/functional/DetailedProfileViewModel.kt`
10. **MatchDetailViewModel** - `viewmodel/functional/MatchDetailViewModel.kt`
11. **SwipeViewModel** - `viewmodel/functional/SwipeViewModel.kt`
12. **SendViewModel** - `viewmodel/functional/SendViewModel.kt`
13. **GeminiViewModel** - `viewmodel/functional/GeminiViewModel.kt`
14. **AiViewModel** - `viewmodel/functional/AiViewModel.kt`
15. **QRViewModel** - `viewmodel/functional/QRViewModel.kt`
16. **AlertViewModel** - `viewmodel/composal/AlertViewModel.kt`
17. **NotificationViewModel** - `viewmodel/composal/NotificationViewModel.kt`
18. **WarningCardViewModel** - `viewmodel/composal/WarningCardViewModel.kt`

#### Screens chưa có test:
1. **EmailInputScreen** - `ui/screens/auth/register/EmailInputScreen.kt`
2. **OtpInputScreen** - `ui/screens/auth/forgetPassword/OtpInputScreen.kt`
3. **InfoInput1** - `ui/screens/auth/register/InfoInput1.kt`
4. **InfoInput2** - `ui/screens/auth/register/InfoInput2.kt`
5. **HobbiesInput** - `ui/screens/auth/register/HobbiesInput.kt`
6. **PicturesInput** - `ui/screens/auth/register/PicturesInput.kt`
7. **PasswordInputScreen** - `ui/screens/auth/register/PasswordInputScreen.kt`
8. **ForgetPassword** - `ui/screens/auth/forgetPassword/ForgetPassword.kt`
9. **MessageScreen** - `ui/screens/functionalScreens/message/MessageScreen.kt`
10. **LikeYouScreen** - `ui/screens/functionalScreens/likeYou/LikeYouScreen.kt`
11. **MyProfileScreen** - `ui/screens/functionalScreens/myProfile/MyProfileScreen.kt`
12. **ChatScreen** - `ui/screens/functionalScreens/chat/ChatScreen.kt`
13. **AiChatScreen** - `ui/screens/functionalScreens/aiChatBot/AiChatScreen.kt`
14. **DetailedProfileScreen** - `ui/screens/functionalScreens/detailedProfile/DetailedProfileScreen.kt`
15. **EditProfileScreen** - `ui/screens/functionalScreens/edit/EditProfileScreen.kt`
16. **SettingsScreen** - `ui/screens/functionalScreens/settings/SettingScreen.kt`
17. **SupportScreen** - `ui/screens/functionalScreens/support/SupportScreen.kt`
18. **DevelopingScreen** - `ui/screens/functionalScreens/developing/DevelopingScreen.kt`
19. **UserQrScreen** - `ui/components/qr/UserQrScreen.kt`

## 🎯 Mục tiêu Coverage đề xuất

- **Tối thiểu**: 60% line coverage
- **Tốt**: 70-80% line coverage
- **Xuất sắc**: >80% line coverage

## 📝 Kế hoạch cải thiện Coverage

### Ưu tiên 1: ViewModels (Business Logic)
ViewModels chứa logic nghiệp vụ quan trọng, nên ưu tiên test trước:

1. **HomeViewModel** - Logic swipe, match
2. **ChatViewModel** - Logic chat, gửi tin nhắn
3. **MessageViewModel** - Logic quản lý danh sách tin nhắn
4. **RegisterViewModel** - Logic đăng ký
5. **MyProfileViewModel** - Logic profile

### Ưu tiên 2: UI Screens quan trọng
1. **ChatScreen** - Màn hình chat
2. **MessageScreen** - Danh sách tin nhắn
3. **DetailedProfileScreen** - Chi tiết profile
4. **EditProfileScreen** - Chỉnh sửa profile

### Ưu tiên 3: Auth Flow
1. **EmailInputScreen**
2. **OtpInputScreen**
3. **PasswordInputScreen**
4. **ForgetPassword**

## 🔧 Cách tạo test mới

### 1. Tạo Unit Test cho ViewModel:

```kotlin
// app/src/test/java/com/example/atry/viewmodel/functional/HomeViewModelTest.kt
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
        val viewModel = HomeViewModel(/* dependencies */)
        
        // Act
        // viewModel.someAction()
        
        // Assert
        // assertEquals(expected, actual)
    }
}
```

### 2. Tạo UI Test cho Screen:

```kotlin
// app/src/androidTest/java/com/example/atry/ui/screens/.../ChatScreenTest.kt
package com.example.atry.ui.screens.functionalScreens.chat

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ChatScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun `test example`() {
        composeRule.setContent {
            ChatScreen(/* parameters */)
        }
        
        // Test assertions
    }
}
```

## 📈 Theo dõi Coverage theo thời gian

### Tạo script để track coverage:

```bash
# coverage_report.sh (Linux/Mac)
#!/bin/bash
./gradlew testDebugUnitTest jacocoTestReport
open app/build/reports/jacoco/jacocoTestReport/html/index.html
```

```powershell
# coverage_report.ps1 (Windows)
.\gradlew testDebugUnitTest jacocoTestReport
Start-Process "app\build\reports\jacoco\jacocoTestReport\html\index.html"
```

## 🚀 Lệnh nhanh

```bash
# Chạy tất cả unit tests và tạo coverage report
.\gradlew testDebugUnitTest jacocoTestReport

# Chạy test cụ thể
.\gradlew testDebugUnitTest --tests "com.example.atry.LoginViewModelTest"

# Chạy Android tests với coverage
.\gradlew connectedDebugAndroidTest createDebugCoverageReport

# Clean và rebuild coverage
.\gradlew clean testDebugUnitTest jacocoTestReport
```

## 📌 Lưu ý

1. **Coverage không phải là tất cả**: 100% coverage không có nghĩa là code không có bug
2. **Test chất lượng > Test số lượng**: Test cases tốt quan trọng hơn nhiều test cases kém
3. **Focus vào logic nghiệp vụ**: Ưu tiên test business logic hơn UI rendering
4. **Maintain tests**: Khi code thay đổi, cập nhật tests tương ứng

## 🔗 Tài liệu tham khảo

- [JaCoCo Documentation](https://www.jacoco.org/jacoco/trunk/doc/)
- [Android Testing Guide](https://developer.android.com/training/testing)
- [Compose Testing](https://developer.android.com/jetpack/compose/testing)

---

**Ngày tạo**: $(Get-Date -Format "yyyy-MM-dd")
**Trạng thái**: ✅ Đã cấu hình xong - Sẵn sàng đo coverage

