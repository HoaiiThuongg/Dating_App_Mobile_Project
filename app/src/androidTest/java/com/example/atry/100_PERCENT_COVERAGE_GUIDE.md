# 🎯 Hướng dẫn Đạt 100% Code Coverage

## ⚠️ Lưu ý quan trọng

**100% coverage không phải lúc nào cũng thực tế hoặc cần thiết!**

- ✅ **Nên**: Test tất cả business logic quan trọng
- ✅ **Nên**: Test các edge cases và error handling
- ❌ **Không nên**: Test getter/setter đơn giản
- ❌ **Không nên**: Test code auto-generated
- ❌ **Không nên**: Test code không quan trọng (như toString(), equals())

**Mục tiêu thực tế**: 80-90% coverage cho business logic là tốt!

---

## 📊 Bước 1: Xem Coverage Report hiện tại

### Chạy lệnh để tạo report:
```powershell
.\gradlew testDebugUnitTest jacocoTestReport
```

### Mở report:
```
app\build\reports\jacoco\jacocoTestReport\html\index.html
```

### Trong report, bạn sẽ thấy:
- **Màu xanh** = Đã được test
- **Màu vàng** = Một phần được test
- **Màu đỏ** = Chưa được test

---

## 🎯 Bước 2: Chiến lược đạt 100% Coverage

### 2.1. Phân loại code cần test

#### ✅ **Nên test (High Priority)**:
1. **ViewModels** - Business logic
2. **Use Cases** - Business rules
3. **Repositories** - Data access logic
4. **Utilities** - Helper functions
5. **Validators** - Input validation
6. **State Management** - State changes

#### ⚠️ **Có thể test (Medium Priority)**:
1. **UI Components** - Composable functions
2. **Navigation** - Navigation logic
3. **Formatters** - Data formatting

#### ❌ **Không cần test (Low Priority)**:
1. **Data Classes** - Simple POJOs (nếu không có logic)
2. **Auto-generated code**
3. **BuildConfig**
4. **R classes**

### 2.2. Loại trừ code không cần test

Cập nhật `app/build.gradle.kts` để loại trừ:

```kotlin
val fileFilter = listOf(
    "**/R.class",
    "**/R$*.class",
    "**/BuildConfig.*",
    "**/Manifest*.*",
    "**/*Test*.*",
    "android/**/*.*",
    "**/data/models/**",  // Data classes đơn giản
    "**/di/**",           // Dependency injection setup
    "**/navigation/**",   // Navigation setup (nếu không có logic)
    "**/*_Factory.*",     // Auto-generated factories
    "**/*_Impl.*"         // Auto-generated implementations
)
```

---

## 📝 Bước 3: Tạo Test Cases theo từng lớp

### 3.1. Test ViewModels (Ưu tiên cao nhất)

#### Template cho ViewModel Test:

```kotlin
package com.example.atry.viewmodel.functional

import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.test.runTest
import org.junit.Test
import org.junit.Assert.*
import org.junit.Before

@OptIn(ExperimentalCoroutinesApi::class)
class HomeViewModelTest {
    
    private lateinit var viewModel: HomeViewModel
    
    @Before
    fun setUp() {
        // Setup với mock dependencies
        viewModel = HomeViewModel(/* mock dependencies */)
    }
    
    @Test
    fun `initial state is correct`() = runTest {
        // Test initial state
    }
    
    @Test
    fun `action changes state correctly`() = runTest {
        // Test state changes
    }
    
    @Test
    fun `error handling works`() = runTest {
        // Test error cases
    }
    
    @Test
    fun `edge cases are handled`() = runTest {
        // Test edge cases
    }
}
```

#### Checklist cho mỗi ViewModel:
- [ ] Initial state
- [ ] Success path
- [ ] Error path
- [ ] Loading state
- [ ] Empty state
- [ ] Edge cases (null, empty, invalid input)
- [ ] State transitions

### 3.2. Test UI Screens

#### Template cho UI Test:

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
    fun `screen displays correctly`() {
        composeRule.setContent {
            HomeScreen(/* parameters */)
        }
        // Assertions
    }
    
    @Test
    fun `user interactions work`() {
        // Test clicks, inputs, etc.
    }
    
    @Test
    fun `loading state displays`() {
        // Test loading UI
    }
    
    @Test
    fun `error state displays`() {
        // Test error UI
    }
}
```

#### Checklist cho mỗi Screen:
- [ ] Screen renders
- [ ] All UI elements visible
- [ ] User interactions (click, input, swipe)
- [ ] Navigation works
- [ ] Loading state
- [ ] Error state
- [ ] Empty state

### 3.3. Test Utilities và Helpers

```kotlin
package com.example.atry.utils

import org.junit.Test
import org.junit.Assert.*

class ValidationUtilsTest {
    
    @Test
    fun `email validation works`() {
        assertTrue(ValidationUtils.isValidEmail("test@example.com"))
        assertFalse(ValidationUtils.isValidEmail("invalid"))
    }
    
    @Test
    fun `edge cases handled`() {
        assertFalse(ValidationUtils.isValidEmail(""))
        assertFalse(ValidationUtils.isValidEmail(null))
    }
}
```

---

## 🔧 Bước 4: Sử dụng Mocking

### 4.1. Mock Dependencies

```kotlin
import org.mockito.Mock
import org.mockito.MockitoAnnotations
import org.mockito.kotlin.whenever

class HomeViewModelTest {
    
    @Mock
    private lateinit var userService: UserService
    
    @Mock
    private lateinit var swipeService: SwipeService
    
    @Before
    fun setUp() {
        MockitoAnnotations.openMocks(this)
        viewModel = HomeViewModel(userService, swipeService)
    }
    
    @Test
    fun `load users success`() = runTest {
        // Arrange
        val mockUsers = listOf(/* mock data */)
        whenever(userService.getUsers()).thenReturn(mockUsers)
        
        // Act
        viewModel.loadUsers()
        
        // Assert
        assertEquals(mockUsers, viewModel.users.value)
    }
}
```

### 4.2. Mock Firebase

```kotlin
// Sử dụng Firebase Emulator cho integration tests
// Hoặc mock Firebase services cho unit tests
```

---

## 📈 Bước 5: Tạo Script tự động

### Script kiểm tra coverage:

```powershell
# check_coverage.ps1
$coverageFile = "app\build\reports\jacoco\jacocoTestReport\html\index.html"

if (Test-Path $coverageFile) {
    Write-Host "Coverage report generated!" -ForegroundColor Green
    Start-Process $coverageFile
} else {
    Write-Host "Coverage report not found. Running tests..." -ForegroundColor Yellow
    .\gradlew testDebugUnitTest jacocoTestReport
    Start-Process $coverageFile
}
```

---

## 🎯 Bước 6: Checklist để đạt 100%

### Phase 1: ViewModels (Target: 100%)
- [ ] LoginViewModel ✅
- [ ] RegisterViewModel
- [ ] HomeViewModel
- [ ] ChatViewModel
- [ ] MessageViewModel
- [ ] MyProfileViewModel
- [ ] EditProfileViewModel
- [ ] LikeYouViewModel
- [ ] DetailedProfileViewModel
- [ ] MatchDetailViewModel
- [ ] SwipeViewModel
- [ ] SendViewModel
- [ ] GeminiViewModel
- [ ] AiViewModel
- [ ] QRViewModel
- [ ] AlertViewModel
- [ ] NotificationViewModel
- [ ] WarningCardViewModel

### Phase 2: UI Screens (Target: 90%)
- [ ] SplashScreen ✅
- [ ] LoginScreen ✅
- [ ] RegisterEntryScreen ✅
- [ ] HomeScreen ✅
- [ ] ProfileScreen ✅
- [ ] EmailInputScreen
- [ ] OtpInputScreen
- [ ] PasswordInputScreen
- [ ] MessageScreen
- [ ] ChatScreen
- [ ] DetailedProfileScreen
- [ ] EditProfileScreen
- [ ] SettingsScreen

### Phase 3: Utilities & Helpers (Target: 100%)
- [ ] ValidationUtils
- [ ] Formatters
- [ ] DateUtils
- [ ] StringUtils

### Phase 4: Repositories (Target: 90%)
- [ ] AuthRepository
- [ ] UserRepository
- [ ] MessageRepository

---

## 🚀 Bước 7: Tối ưu hóa Test

### 7.1. Test Coverage Rules

Thêm vào `app/build.gradle.kts`:

```kotlin
tasks.register("checkCoverage") {
    dependsOn("jacocoTestReport")
    doLast {
        val reportFile = file("${layout.buildDirectory.get()}/reports/jacoco/jacocoTestReport/jacocoTestReport.xml")
        if (reportFile.exists()) {
            // Parse XML và check coverage
            // Fail build nếu coverage < threshold
        }
    }
}
```

### 7.2. CI/CD Integration

```yaml
# .github/workflows/test.yml
- name: Run tests with coverage
  run: ./gradlew testDebugUnitTest jacocoTestReport
  
- name: Check coverage
  run: |
    # Parse coverage report
    # Fail if coverage < 80%
```

---

## 📊 Bước 8: Theo dõi Coverage

### 8.1. Coverage Metrics

Theo dõi các metrics:
- **Line Coverage**: % dòng code được chạy
- **Branch Coverage**: % nhánh code được test
- **Method Coverage**: % method được gọi
- **Class Coverage**: % class được test

### 8.2. Coverage Goals

- **Minimum**: 60% line coverage
- **Good**: 80% line coverage
- **Excellent**: 90%+ line coverage
- **Perfect**: 100% (chỉ cho business logic quan trọng)

---

## ⚡ Quick Start: Đạt 100% Coverage

### 1. Xem report hiện tại:
```powershell
.\gradlew testDebugUnitTest jacocoTestReport
Start-Process "app\build\reports\jacoco\jacocoTestReport\html\index.html"
```

### 2. Xác định code chưa được test (màu đỏ trong report)

### 3. Tạo test cho từng file:
- Bắt đầu với ViewModels
- Sau đó đến UI Screens
- Cuối cùng là Utilities

### 4. Chạy lại coverage:
```powershell
.\gradlew clean testDebugUnitTest jacocoTestReport
```

### 5. Lặp lại cho đến khi đạt 100%

---

## 🎓 Best Practices

1. **Test behavior, not implementation**
   - Test "what" không phải "how"
   - Tránh test implementation details

2. **Use meaningful test names**
   ```kotlin
   // ❌ Bad
   @Test fun test1()
   
   // ✅ Good
   @Test fun `login with valid credentials sets success state`()
   ```

3. **Follow AAA pattern**
   ```kotlin
   @Test
   fun `test example`() {
       // Arrange
       val input = "test"
       
       // Act
       val result = function(input)
       
       // Assert
       assertEquals(expected, result)
   }
   ```

4. **Test edge cases**
   - Null values
   - Empty strings/collections
   - Invalid input
   - Boundary values

5. **Keep tests independent**
   - Mỗi test không phụ thuộc vào test khác
   - Reset state giữa các tests

---

## 🔍 Debugging Coverage

### Nếu coverage không tăng:

1. **Kiểm tra test có chạy không:**
   ```powershell
   .\gradlew testDebugUnitTest --info
   ```

2. **Kiểm tra execution data:**
   ```
   app/build/jacoco/testDebugUnitTest.exec
   ```

3. **Clean và rebuild:**
   ```powershell
   .\gradlew clean testDebugUnitTest jacocoTestReport
   ```

4. **Kiểm tra fileFilter:**
   - Đảm bảo không loại trừ nhầm code cần test

---

## 📚 Tài liệu tham khảo

- [JaCoCo Documentation](https://www.jacoco.org/jacoco/trunk/doc/)
- [Android Testing Guide](https://developer.android.com/training/testing)
- [Mockito Documentation](https://javadoc.io/doc/org.mockito/mockito-core/latest/org/mockito/Mockito.html)

---

**Lưu ý cuối**: 100% coverage là mục tiêu tốt, nhưng **chất lượng test quan trọng hơn số lượng**. Đảm bảo test cases của bạn thực sự kiểm tra logic nghiệp vụ quan trọng!

