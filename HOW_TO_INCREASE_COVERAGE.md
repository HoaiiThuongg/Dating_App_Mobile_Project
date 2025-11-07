# 🎯 Hướng dẫn Tăng Code Coverage

## 📊 Tình trạng hiện tại

- **Coverage hiện tại**: 0% (do execution data không match với class files)
- **Đã sửa**: Cấu hình JaCoCo để sử dụng Kotlin classes từ `tmp/kotlin-classes/debug`

## 🔧 Các bước để tăng Coverage

### 1. Chạy tests và xem report

```powershell
.\gradlew clean testDebugUnitTest jacocoTestReport
```

Mở report:
```
app\build\reports\jacoco\jacocoTestReport\html\index.html
```

### 2. Tập trung vào các phần chính (không cần Firebase)

#### ✅ ViewModels đã có tests tốt (không cần Firebase):
- **AlertViewModel** - ✅ Đã có 11 test cases
- **WarningCardViewModel** - ✅ Đã có 6 test cases

#### ⚠️ ViewModels cần Firebase (tests bị skip):
- LoginViewModel
- RegisterViewModel  
- HomeViewModel
- MessageViewModel
- ChatViewModel
- LikeYouViewModel
- NotificationViewModel
- Và các ViewModels khác...

### 3. Chiến lược tăng Coverage

#### A. Tập trung vào ViewModels đơn giản trước

**AlertViewModel** và **WarningCardViewModel** đã có tests tốt. Đảm bảo chúng chạy và không bị skip:

```powershell
.\gradlew testDebugUnitTest --tests "*AlertViewModelTest*" --tests "*WarningCardViewModelTest*"
```

#### B. Cải thiện tests cho các ViewModels có Firebase

Thay vì skip tests, hãy test các phần không cần Firebase:

**Ví dụ với LoginViewModel:**
- ✅ Test `resetState()` - không cần Firebase
- ✅ Test state management - không cần Firebase
- ⚠️ Test `login()` - cần Firebase (có thể mock hoặc skip)

#### C. Tạo tests cho các phần không cần Firebase

**Các phần có thể test mà không cần Firebase:**
1. **State management** - initial state, state transitions
2. **Data classes** - properties, constructors
3. **Simple methods** - không gọi Firebase services
4. **Validation logic** - input validation

### 4. Kiểm tra Coverage sau mỗi bước

```powershell
.\gradlew testDebugUnitTest jacocoTestReport
```

Mở report và xem:
- Package nào có coverage cao?
- Package nào có coverage thấp?
- Class nào chưa được test?

### 5. Mục tiêu Coverage

- **Ngắn hạn**: 20-30% (tập trung vào ViewModels đơn giản)
- **Trung hạn**: 50-60% (bao gồm business logic chính)
- **Dài hạn**: 80-90% (bao gồm hầu hết business logic)

## 📝 Checklist để tăng Coverage

- [ ] Đảm bảo AlertViewModel và WarningCardViewModel tests chạy (không skip)
- [ ] Tạo tests cho các data classes (State, UiState, etc.)
- [ ] Test state management trong các ViewModels
- [ ] Test các methods không cần Firebase
- [ ] Sử dụng mocks cho Firebase services (nếu có thể)
- [ ] Chạy report và xem coverage từng package

## 🚀 Bước tiếp theo

1. Chạy `.\gradlew testDebugUnitTest jacocoTestReport`
2. Mở report HTML
3. Xem package nào có coverage thấp nhất
4. Tạo tests cho package đó
5. Lặp lại cho đến khi đạt mục tiêu

## ⚠️ Lưu ý

- **Không cần 100% coverage** - tập trung vào business logic quan trọng
- **Tests bị skip** (do Firebase) không tính vào coverage
- **Cần đảm bảo tests thực sự chạy code** (không chỉ skip)
- **Sử dụng mocks** cho Firebase services nếu có thể


