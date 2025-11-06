# 🗺️ Roadmap để đạt 100% Coverage

## 📊 Coverage hiện tại: ~15-20% (ước tính)

## 🎯 Mục tiêu: 100% Coverage

---

## Phase 1: ViewModels (Target: 100%) - Ưu tiên cao nhất

### ✅ Đã hoàn thành:
- [x] LoginViewModelTest - Test LoginState

### 🔄 Đang làm:
- [ ] RegisterViewModelTest
- [ ] HomeViewModelTest

### ⏳ Chưa bắt đầu:
- [ ] UserInfoSetupViewModelTest
- [ ] ChatViewModelTest
- [ ] MessageViewModelTest
- [ ] MyProfileViewModelTest
- [ ] EditProfileViewModelTest
- [ ] LikeYouViewModelTest
- [ ] DetailedProfileViewModelTest
- [ ] MatchDetailViewModelTest
- [ ] SwipeViewModelTest
- [ ] SendViewModelTest
- [ ] GeminiViewModelTest
- [ ] AiViewModelTest
- [ ] QRViewModelTest
- [ ] AlertViewModelTest
- [ ] NotificationViewModelTest
- [ ] WarningCardViewModelTest

**Ước tính**: 18 ViewModels × 5 test cases = ~90 test cases
**Thời gian**: ~2-3 tuần

---

## Phase 2: UI Screens (Target: 90%) - Ưu tiên trung bình

### ✅ Đã hoàn thành:
- [x] SplashScreenTest
- [x] LoginScreenMockTest
- [x] RegisterEntryScreenTest
- [x] HomeScreenTest (cần cải thiện)
- [x] ProfileScreenTest

### ⏳ Chưa bắt đầu:
- [ ] EmailInputScreenTest
- [ ] OtpInputScreenTest
- [ ] InfoInput1Test
- [ ] InfoInput2Test
- [ ] HobbiesInputTest
- [ ] PicturesInputTest
- [ ] PasswordInputScreenTest
- [ ] ForgetPasswordTest
- [ ] MessageScreenTest
- [ ] LikeYouScreenTest
- [ ] MyProfileScreenTest
- [ ] ChatScreenTest
- [ ] AiChatScreenTest
- [ ] DetailedProfileScreenTest
- [ ] EditProfileScreenTest
- [ ] SettingsScreenTest
- [ ] SupportScreenTest
- [ ] DevelopingScreenTest
- [ ] UserQrScreenTest

**Ước tính**: 19 Screens × 3 test cases = ~57 test cases
**Thời gian**: ~2 tuần

---

## Phase 3: Utilities & Helpers (Target: 100%) - Ưu tiên thấp

### ⏳ Chưa bắt đầu:
- [ ] ValidationUtilsTest
- [ ] FormattersTest
- [ ] DateUtilsTest
- [ ] StringUtilsTest
- [ ] ImageUtilsTest

**Ước tính**: 5 Utilities × 3 test cases = ~15 test cases
**Thời gian**: ~3 ngày

---

## Phase 4: Repositories (Target: 90%) - Ưu tiên trung bình

### ⏳ Chưa bắt đầu:
- [ ] AuthRepositoryTest
- [ ] UserRepositoryTest
- [ ] MessageRepositoryTest

**Ước tính**: 3 Repositories × 5 test cases = ~15 test cases
**Thời gian**: ~1 tuần

---

## 📅 Timeline tổng thể

| Phase | Tasks | Test Cases | Thời gian | Status |
|-------|-------|------------|-----------|--------|
| Phase 1 | 18 ViewModels | ~90 | 2-3 tuần | 🔄 5% |
| Phase 2 | 19 Screens | ~57 | 2 tuần | 🔄 26% |
| Phase 3 | 5 Utilities | ~15 | 3 ngày | ⏳ 0% |
| Phase 4 | 3 Repositories | ~15 | 1 tuần | ⏳ 0% |
| **Tổng** | **45 files** | **~177** | **~6-7 tuần** | **~8%** |

---

## 🎯 Milestones

### Milestone 1: 50% Coverage (2 tuần)
- ✅ Hoàn thành Phase 1: ViewModels quan trọng (HomeViewModel, ChatViewModel, MessageViewModel)
- ✅ Hoàn thành Phase 2: Screens quan trọng (ChatScreen, MessageScreen)

### Milestone 2: 75% Coverage (4 tuần)
- ✅ Hoàn thành Phase 1: Tất cả ViewModels
- ✅ Hoàn thành Phase 2: Tất cả Screens

### Milestone 3: 90% Coverage (5 tuần)
- ✅ Hoàn thành Phase 3: Utilities
- ✅ Hoàn thành Phase 4: Repositories

### Milestone 4: 100% Coverage (6-7 tuần)
- ✅ Test tất cả edge cases
- ✅ Test tất cả error handling
- ✅ Review và optimize tests

---

## 📝 Checklist hàng ngày

### Mỗi ngày:
- [ ] Viết 2-3 test cases mới
- [ ] Chạy coverage report
- [ ] Cập nhật roadmap
- [ ] Review test quality

### Mỗi tuần:
- [ ] Review coverage progress
- [ ] Refactor tests nếu cần
- [ ] Update documentation

---

## 🚀 Quick Wins (Có thể làm ngay)

1. **Test Data Classes đơn giản** (5 phút mỗi class)
   - Test equals(), hashCode(), toString()
   - Test copy()

2. **Test Utility functions** (10 phút mỗi function)
   - Test với valid input
   - Test với invalid input
   - Test edge cases

3. **Test State classes** (15 phút mỗi class)
   - Test initial state
   - Test state transitions

---

## 💡 Tips để tăng tốc

1. **Sử dụng Test Templates**
   - Tạo template cho ViewModel tests
   - Tạo template cho UI tests
   - Reuse code giữa các tests

2. **Automate Test Generation**
   - Sử dụng tools để generate test skeletons
   - Sử dụng AI để suggest test cases

3. **Parallel Testing**
   - Chạy tests song song
   - Sử dụng test sharding

4. **Mock Everything**
   - Mock external dependencies
   - Mock Firebase services
   - Mock network calls

---

## 📊 Tracking Progress

### Công thức tính progress:

```
Progress = (Completed Tests / Total Tests) × 100%
```

### Ví dụ:
- Total: 177 test cases
- Completed: 14 test cases
- Progress: (14 / 177) × 100% = ~8%

---

## 🎓 Learning Resources

1. **Android Testing Codelabs**
   - https://developer.android.com/codelabs/android-testing

2. **Testing Best Practices**
   - https://developer.android.com/training/testing/fundamentals

3. **Mockito Guide**
   - https://site.mockito.org/

---

**Cập nhật lần cuối**: $(Get-Date -Format "yyyy-MM-dd")
**Coverage hiện tại**: ~8% (14/177 test cases)
**Mục tiêu**: 100% trong 6-7 tuần

