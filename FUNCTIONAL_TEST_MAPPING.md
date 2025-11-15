# Test Cases Mapping - Functional Test Coverage

## Tổng quan
- **Tổng số test cases trong Testcases.txt**: 61 test cases
- **Tổng số test files đã implement**: 12 files  
- **Tổng số test methods**: 85+ methods

## Chi tiết mapping theo nhóm chức năng

### 1. Đăng Nhập Tests (FUNC-LG-01 đến FUNC-LG-05)
**Test File**: `LoginScreenMockTest.kt`
- FUNC-LG-01: Đăng nhập thành công với thông tin hợp lệ
- FUNC-LG-02: Đăng nhập thất bại với sai mật khẩu
- FUNC-LG-03: Đăng nhập thất bại với email không tồn tại
- FUNC-LG-04: Đăng nhập thất bại với email để trống
- FUNC-LG-05: Điều hướng sang màn hình đăng ký

### 2. Đăng Ký Tests (FUNC-RG-06 đến FUNC-RG-10)
**Test Files**:
- `EmailInputScreenTest.kt` (FUNC-RG-06, FUNC-RG-08, FUNC-RG-09, FUNC-RG-10)
- `PasswordInputScreenTest.kt` (FUNC-RG-07)

Các test cases:
- FUNC-RG-06: Đăng ký thành công với email hợp lệ
- FUNC-RG-07: Đăng ký thất bại với mật khẩu yếu
- FUNC-RG-08: Đăng ký thất bại với email sai định dạng
- FUNC-RG-09: Đăng ký thất bại với email đã tồn tại
- FUNC-RG-10: Đăng ký thất bại với email để trống

### 3. Tạo Profile Tests (FUNC-PR-11 đến FUNC-PR-27)
**Test File**: `ProfileCreationTest.kt`

Các test cases:
- FUNC-PR-11: Nhập thông tin hợp lệ - Tên và ngày sinh hợp lệ
- FUNC-PR-12: Ngày sinh không hợp lệ - Ngày không tồn tại
- FUNC-PR-13: Ngày sinh sai định dạng
- FUNC-PR-14: Tên để trống
- FUNC-PR-15: Nhập SĐT và giới tính hợp lệ
- FUNC-PR-16: SĐT ít hơn 10 số
- FUNC-PR-17: SĐT có ký tự không phải số
- FUNC-PR-18: Không chọn giới tính
- FUNC-PR-19: Nhập giới thiệu hợp lệ
- FUNC-PR-20: Không nhập giới thiệu (không bắt buộc)
- FUNC-PR-21: Chọn đủ 3 sở thích
- FUNC-PR-22: Chọn ít hơn 3 sở thích
- FUNC-PR-23: Không chọn sở thích nào
- FUNC-PR-24: Tải ảnh hợp lệ
- FUNC-PR-25: Không tải ảnh
- FUNC-PR-26: Tải file không phải ảnh
- FUNC-PR-27: Tải ảnh có dung lượng quá lớn

### 4. Quẹt Tests (FUNC-SW-28 đến FUNC-SW-30)
**Test Files**:
- `SwipeCardGestureTest.kt` (FUNC-SW-28, FUNC-SW-29, FUNC-SW-30)
- `FakeSwipeViewModel.kt` (Hỗ trợ test match detection)

Các test cases:
- FUNC-SW-28: Quẹt phải (Like) - Hồ sơ biến mất và hiển thị hồ sơ tiếp theo
- FUNC-SW-29: Quẹt trái (Dislike) - Hồ sơ biến mất và hiển thị hồ sơ tiếp theo
- FUNC-SW-30: Phát hiện Match - Khi cả hai người thích nhau

### 5. Menu Tests (FUNC-MN-31 đến FUNC-MN-33)
**Test File**: `MenuNavigationTest.kt`

Các test cases:
- FUNC-MN-31: Nhấn icon menu - Navigation drawer trượt ra từ trái
- FUNC-MN-32: Nhấn icon thông báo - Chuyển sang màn hình thông báo
- FUNC-MN-33: Nhấn ra ngoài menu - Menu đóng lại

### 6. Giao Diện Tests (FUNC-UI-34 đến FUNC-UI-35)
**Test File**: `SettingsThemeTest.kt`

Các test cases:
- FUNC-UI-34: Chuyển từ chế độ Sáng sang Tối
- FUNC-UI-35: Chuyển từ chế độ Tối sang Sáng

### 7. QR Code Tests (FUNC-QR-36 đến FUNC-QR-37)
**Test File**: `QRCodeTest.kt`

Các test cases:
- FUNC-QR-36: Hiển thị mã QR cá nhân
- FUNC-QR-37: Quét mã QR - Yêu cầu quyền camera

### 8. Chatbot AI Tests (FUNC-AI-38)
**Test File**: `ChatbotAITest.kt`

Các test cases:
- FUNC-AI-38: Chuyển sang màn hình Chatbot, hiển thị giao diện chat

### 9. Thông Báo Tests (FUNC-NF-39 đến FUNC-NF-40)
**Test File**: `NotificationScreenTest.kt`

Các test cases:
- FUNC-NF-39: User có match mới và lượt thích mới
- FUNC-NF-40: User không có thông báo mới

### 10. Lượt Thích Tests (FUNC-LY-41 đến FUNC-LY-45)
**Test File**: `LikeYouScreenTest.kt`

Các test cases:
- FUNC-LY-41: Chuyển sang màn hình "Những ai đã thích bạn" từ bottom navigation
- FUNC-LY-42: Like lại từ grid view - Hiển thị animation match
- FUNC-LY-43: Xem profile chi tiết từ grid
- FUNC-LY-44: Match từ màn hình profile chi tiết
- FUNC-LY-45: Trạng thái trống - Không có ai thích bạn

## Tổng kết Coverage
✅ **Tất cả 45 test cases chức năng từ Testcases.txt đã được implement đầy đủ**
✅ **12 test files chức năng đã được tạo/cập nhật**
✅ **85+ test methods chức năng đã sẵn sàng để chạy**
✅ **Phân biệt rõ ràng với test UI (chức năng vs giao diện)**
✅ **Sử dụng FakeViewModel pattern cho test business logic**
✅ **Bao gồm validation, navigation và error handling**

## Phân biệt Test UI vs Test Chức Năng
- **Test UI**: Kiểm tra hiển thị, layout, component rendering
- **Test Chức Năng**: Kiểm tra business logic, validation, navigation flow, error states
- **Test UI**: Focus vào visual elements và user interface
- **Test Chức Năng**: Focus vào behavior và functional requirements