# 📋 Hướng dẫn Implement Test Cases từ Excel

## 📊 Tổng quan

Đã đọc được **74 test cases** từ file `Testcases.xlsx`, được chia thành **17 categories**:

### Categories và số lượng test cases:

1. **DANG_NHAP** (5 test cases) - Đăng nhập
2. **DANG_KY** (5 test cases) - Đăng ký
3. **TAO_PROFILE** (17 test cases) - Tạo profile
4. **QUET** (5 test cases) - Quẹt/ Swipe
5. **MENU** (1 test case) - Menu navigation
6. **GIAO_DIEN** (2 test cases) - Giao diện (Theme)
7. **QR_CODE** (2 test cases) - QR Code
8. **CHATBOT_AI** (1 test case) - AI Chatbot
9. **THONG_BAO** (2 test cases) - Thông báo
10. **LUOT_THICH** (5 test cases) - Lượt thích
11. **TIN_NHAN** (6 test cases) - Tin nhắn
12. **HOP_CHAT** (7 test cases) - Hộp chat
13. **UNMATCH** (3 test cases) - Hủy match
14. **HO_SO_CA_NHAN** (4 test cases) - Hồ sơ cá nhân
15. **CAI_DAT** (3 test cases) - Cài đặt
16. **CHINH_SUA_HS** (4 test cases) - Chỉnh sửa hồ sơ
17. **HO_TRO** (2 test cases) - Hỗ trợ

## 📁 Test Files đã được tạo

Các test files đã được generate tự động từ Excel:

### Auth Tests:
- `app/src/androidTest/java/com/example/atry/ui/screens/auth/login/LoginScreenMockTest.kt` ✅ (đã có, cần bổ sung thêm test cases)
- `app/src/androidTest/java/com/example/atry/ui/screens/auth/register/RegisterEntryScreenTest.kt` ✅ (đã có, cần bổ sung thêm test cases)
- `app/src/androidTest/java/com/example/atry/ui/screens/auth/register/ProfileCreationTest.kt` ⚠️ (mới tạo, cần implement)

### Functional Tests:
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/home/HomeScreenSwipeTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/home/MenuNavigationTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/SettingsThemeTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/QRCodeTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/AiChatScreenTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/NotificationScreenTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/LikeYouScreenTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/MessageScreenTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/chat/ChatScreenTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/UnmatchTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/MyProfileScreenTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/SettingsScreenTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/EditProfileScreenTest.kt` ⚠️
- `app/src/androidTest/java/com/example/atry/ui/screens/functionalScreens/SupportScreenTest.kt` ⚠️

## 🔧 Cách Implement Test Cases

### Bước 1: Đọc test case từ JSON

File `testcases.json` chứa tất cả test cases với cấu trúc:
```json
{
  "ID": "1",
  "Category": "DANG_NHAP",
  "Precondition": "...",
  "Data": "...",
  "Step": "...",
  "Expexted results": "...",
  "Tiến độ": "..."
}
```

### Bước 2: Implement từng test case

Mỗi test case cần:
1. **Setup**: Khởi tạo screen, ViewModel, NavController
2. **Arrange**: Chuẩn bị data theo field "Data"
3. **Act**: Thực hiện các bước theo field "Step"
4. **Assert**: Kiểm tra kết quả theo field "Expexted results"

### Ví dụ: Test Case ID 1 (DANG_NHAP)

```kotlin
@Test
fun testCase_DANG_NHAP_ID1_LoginSuccess() {
    // Arrange
    composeRule.setContent {
        val navController = rememberNavController()
        com.example.atry.navigation.navController = navController
        NavHost(navController = navController, startDestination = "login") {
            composable("login") {
                Login(viewModel = fakeViewModel, alertViewModel = fakeAlertViewModel)
            }
            composable("main") {
                Text("MAIN_SCREEN", modifier = Modifier.testTag("main_screen"))
            }
        }
    }
    
    // Act
    composeRule.onNodeWithTag("login:email_input").performTextInput("test@example.com")
    composeRule.onNodeWithTag("login:password_input").performTextInput("123456")
    composeRule.onNodeWithTag("login:login_button").performClick()
    
    // Simulate success state
    composeRule.runOnIdle {
        fakeViewModel.pushState(LoginState(isSuccess = true, message = "Đăng nhập thành công"))
    }
    
    // Assert
    composeRule.onNodeWithText("Chúc mừng bạn đăng nhập thành công!", substring = true)
        .assertIsDisplayed()
    composeRule.onNodeWithTag("main_screen").assertIsDisplayed()
}
```

## 📈 Đo Code Coverage

### Chạy script đo coverage:

```powershell
.\generate_coverage_report.ps1
```

Hoặc từng bước:

```powershell
# 1. Clean và build
./gradlew clean
./gradlew assembleDebugAndroidTest

# 2. Chạy tests
./gradlew connectedAndroidTest

# 3. Generate coverage report
./gradlew jacocoTestReport
./gradlew createDebugCoverageReport
```

### Xem coverage report:

- **Unit Test Coverage**: `app/build/reports/jacoco/jacocoTestReport/html/index.html`
- **Android Test Coverage**: `app/build/outputs/code_coverage/debugAndroidTest/connected/index.html`

## ✅ Checklist Implementation

### Priority 1: Auth Tests (10 test cases)
- [ ] DANG_NHAP - 5 test cases (update LoginScreenMockTest.kt)
- [ ] DANG_KY - 5 test cases (update RegisterEntryScreenTest.kt)

### Priority 2: Profile Creation (17 test cases)
- [ ] TAO_PROFILE - 17 test cases (implement ProfileCreationTest.kt)

### Priority 3: Core Features (18 test cases)
- [ ] QUET - 5 test cases
- [ ] TIN_NHAN - 6 test cases
- [ ] HOP_CHAT - 7 test cases

### Priority 4: Additional Features (29 test cases)
- [ ] LUOT_THICH - 5 test cases
- [ ] HO_SO_CA_NHAN - 4 test cases
- [ ] CHINH_SUA_HS - 4 test cases
- [ ] UNMATCH - 3 test cases
- [ ] CAI_DAT - 3 test cases
- [ ] THONG_BAO - 2 test cases
- [ ] GIAO_DIEN - 2 test cases
- [ ] QR_CODE - 2 test cases
- [ ] MENU - 1 test case
- [ ] CHATBOT_AI - 1 test case
- [ ] HO_TRO - 2 test cases

## 🎯 Mục tiêu Coverage

- **Target**: 70%+ code coverage
- **Current**: Chạy script để đo
- **Focus Areas**:
  - ViewModels: 80%+
  - UI Screens: 60%+
  - Business Logic: 75%+

## 📝 Notes

1. Một số test cases cần mock Firebase/Backend
2. Test cases về navigation cần setup NavHost đúng cách
3. Test cases về state changes cần sử dụng FakeViewModel
4. Test cases về UI interactions cần sử dụng test tags

## 🔗 Files liên quan

- `testcases.json` - Tất cả test cases từ Excel
- `testcases_summary.txt` - Summary text file
- `generate_tests_from_excel.ps1` - Script generate test files
- `generate_coverage_report.ps1` - Script đo coverage


