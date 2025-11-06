# ⚡ Quick Start: 100% Coverage trong 1 đêm

## 🎯 Mục tiêu thực tế

**100% coverage trong 1 đêm = KHÔNG THỰC TẾ** ❌

**60-80% coverage trong 1 đêm = CÓ THỂ** ✅

---

## 🚀 Bắt đầu ngay (3 bước)

### Bước 1: Generate test templates

```powershell
# Fix execution policy (chạy 1 lần)
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser

# Generate templates
.\generate_tests.ps1 -Type all
```

**Hoặc chạy trực tiếp:**
```powershell
powershell -ExecutionPolicy Bypass -File .\generate_tests.ps1 -Type all
```

### Bước 2: Xem coverage hiện tại

```powershell
.\check_coverage.ps1
```

### Bước 3: Bắt đầu fill tests

1. Mở file test template (ví dụ: `HomeViewModelTest.kt`)
2. Fill in TODO comments
3. Run test
4. Repeat

---

## 📋 Checklist nhanh

### Critical Tests (Làm trước - 4 giờ)
- [ ] HomeViewModelTest
- [ ] ChatViewModelTest  
- [ ] MessageViewModelTest
- [ ] RegisterViewModelTest
- [ ] ChatScreenTest
- [ ] MessageScreenTest

### Important Tests (Làm sau - 3 giờ)
- [ ] MyProfileViewModelTest
- [ ] EditProfileViewModelTest
- [ ] DetailedProfileScreenTest
- [ ] EmailInputScreenTest

### Quick Wins (Làm cuối - 1 giờ)
- [ ] All State classes
- [ ] Simple Utilities

---

## 💡 Tips

1. **Copy-paste từ LoginViewModelTest** - Đã có sẵn
2. **Focus on happy path** - Test success cases trước
3. **Use templates** - Đã generate sẵn
4. **Run tests often** - Fix issues ngay

---

## 📊 Expected Results

Sau 8-10 giờ:
- ✅ 60-70% coverage
- ✅ ~100 test cases
- ✅ Critical paths tested
- ✅ Foundation để improve sau

---

**Bắt đầu ngay với:**
```powershell
powershell -ExecutionPolicy Bypass -File .\generate_tests.ps1 -Type all
```

