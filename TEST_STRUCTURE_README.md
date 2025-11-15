# Test Structure Documentation - Dating App Mobile Project

## Tổng quan

Dự án đã được tái cấu trúc để phân tách rõ ràng giữa **UI Tests** và **Functional Tests** nhằm đảm bảo:
- UI Tests: Tập trung vào giao diện người dùng, hiển thị và tương tác cơ bản
- Functional Tests: Tập trung vào logic nghiệp vụ, validation và luồng chức năng

## Cấu trúc thư mục Test

```
app/src/androidTest/java/com/example/atry/
├── ui/                           # UI Tests - Test giao diện
│   └── screens/                  # Test các màn hình UI
│       ├── auth/                # Test UI cho authentication
│       │   ├── forgetPassword/
│       │   ├── login/
│       │   └── register/
│       ├── functionalScreens/    # Test UI cho các màn hình chức năng
│       │   ├── chat/
│       │   ├── home/
│       │   └── *.kt             # Các file test UI khác
│       └── *.kt                 # Test UI cho các component chung
├── functional/                   # Functional Tests - Test chức năng
│   ├── auth/                    # Test chức năng authentication
│   │   ├── LoginFunctionalTest.kt
│   │   ├── EmailInputFunctionalTest.kt
│   │   ├── PasswordInputFunctionalTest.kt
│   │   └── ProfileCreationFunctionalTest.kt
│   └── home/                    # Test chức năng chính
│       ├── SwipeFunctionalTest.kt
│       ├── MenuNavigationFunctionalTest.kt
│       ├── SettingsThemeFunctionalTest.kt
│       ├── QRCodeFunctionalTest.kt
│       ├── NotificationFunctionalTest.kt
│       ├── LikeYouFunctionalTest.kt
│       └── ChatbotAIFunctionalTest.kt
└── viewmodel/                   # Fake ViewModels cho testing
    ├── auth/
    └── functional/
```

## Quy ước đặt tên

### UI Tests
- Đặt tên theo màn hình/component: `[ScreenName]Test.kt`
- Ví dụ: `LoginScreenTest.kt`, `SwipeCardTest.kt`
- Tập trung vào: Hiển thị, layout, navigation cơ bản

### Functional Tests  
- Đặt tên theo chức năng: `[Feature]FunctionalTest.kt`
- Ví dụ: `LoginFunctionalTest.kt`, `SwipeFunctionalTest.kt`
- Tập trung vào: Logic nghiệp vụ, validation, xử lý lỗi

## Mapping Test Cases

### Authentication Functional Tests
- **LoginFunctionalTest.kt**: DANG_NHAP (1-5)
  - Test đăng nhập thành công
  - Test sai mật khẩu
  - Test email không tồn tại
  - Test email để trống
  - Test navigation sang đăng ký

- **EmailInputFunctionalTest.kt**: DANG_KY (6, 8-10)
  - Test đăng ký email thành công
  - Test email không đúng định dạng
  - Test email đã tồn tại
  - Test email để trống

- **PasswordInputFunctionalTest.kt**: DANG_KY (7)
  - Test mật khẩu yếu (< 6 ký tự)
  - Test mật khẩu hợp lệ

- **ProfileCreationFunctionalTest.kt**: TAO_PROFILE (11-27)
  - Test nhập thông tin cá nhân
  - Test validation ngày sinh, SĐT
  - Test chọn sở thích
  - Test upload ảnh

### Home Functional Tests
- **SwipeFunctionalTest.kt**: QUET (28-30)
  - Test swipe right (Like)
  - Test swipe left (Dislike)
  - Test match detection

- **MenuNavigationFunctionalTest.kt**: MENU (31-33)
  - Test navigation Settings, Profile, Messages

- **SettingsThemeFunctionalTest.kt**: GIAO_DIEN (34-35)
  - Test chuyển đổi Dark/Light mode

- **QRCodeFunctionalTest.kt**: QR_CODE (36-37)
  - Test hiển thị và quét mã QR

- **NotificationFunctionalTest.kt**: THONG_BAO (39-40)
  - Test hiển thị danh sách thông báo
  - Test xem chi tiết thông báo

- **LikeYouFunctionalTest.kt**: LUOT_THICH (41-45)
  - Test danh sách người đã thích
  - Test like lại và match

- **ChatbotAIFunctionalTest.kt**: CHATBOT_AI (38)
  - Test gửi tin nhắn cho AI chatbot

## Hướng dẫn viết test

### UI Test Pattern
```kotlin
@Test
fun screenName_elementBeingTested_expectedResult() {
    // Setup UI
    composeRule.setContent { /* UI content */ }
    
    // Interact with UI
    composeRule.onNodeWithTag("element_tag").performClick()
    
    // Verify UI state
    composeRule.onNodeWithTag("expected_element").assertIsDisplayed()
}
```

### Functional Test Pattern
```kotlin
@Test
fun featureName_actionBeingTested_expectedBusinessLogic() {
    // Setup ViewModels và state
    val fakeViewModel = FakeViewModel()
    
    // Setup UI với fake dependencies
    composeRule.setContent { /* UI with fake ViewModels */ }
    
    // Thực hiện hành động
    composeRule.onNodeWithTag("input_field").performTextInput("test_data")
    composeRule.onNodeWithTag("submit_button").performClick()
    
    // Simulate business logic response
    composeRule.runOnIdle {
        fakeViewModel.pushState(ExpectedState())
    }
    
    // Verify business logic outcome
    // Check validation, error messages, navigation, etc.
}
```

## Lợi ích của việc phân tách

1. **Maintainability**: Dễ maintain và update từng loại test riêng biệt
2. **Clarity**: Rõ ràng về mục đích của từng test
3. **Reusability**: Có thể reuse UI tests cho nhiều functional scenarios
4. **Debugging**: Dễ dàng debug khi test fail
5. **Team Collaboration**: Frontend và QA team có thể làm việc song song

## Next Steps

Các category test còn lại cần implement:
- TIN_NHAN (46-51): Test chức năng tin nhắn
- HOP_CHAT (52-57): Test chức năng hộp chat
- UNMATCH (59-61): Test chức năng unmatch
- HO_SO_CA_NHAN (62-65): Test hồ sơ cá nhân
- CAI_DAT (66-68): Test cài đặt
- CHINH_SUA_HS (69-74): Test chỉnh sửa hồ sơ
- HO_TRO (73-74): Test hỗ trợ

Mỗi category sẽ có file FunctionalTest riêng trong thư mục `functional/` tương ứng.