# 🔧 Fix: Build Failed - Không Xuất Được File Báo Cáo

## ❌ Vấn đề:

Khi chạy `collect_performance_results.bat`, không tìm thấy reports hoặc reports không đầy đủ vì:
- **Tests bị fail** → Reports không đầy đủ
- **Build failed** → Không tạo được reports
- **Reports ở vị trí khác** → Script không tìm thấy

---

## ✅ Giải pháp:

### Bước 1: Kiểm tra Reports Hiện Tại

```powershell
# Kiểm tra xem có reports không
dir app\build\reports\androidTests\connected\debug\index.html

# Hoặc
dir app\build\reports\androidTests\index.html
```

### Bước 2: Chạy Tests Đơn Giản Để Tạo Reports

```powershell
# Chạy test đơn giản
.\run_test_simple.bat
```

Script này sẽ:
- Build test APK
- Install test APK
- Chạy một test đơn giản
- Tạo reports

### Bước 3: Kiểm tra Lỗi Tests

Nếu tests fail, xem chi tiết:

```powershell
# Mở HTML report để xem lỗi
start app\build\reports\androidTests\connected\debug\index.html
```

Hoặc xem log:

```powershell
# Xem log của test run gần nhất
type app\build\outputs\androidTest-results\connected\*.txt
```

### Bước 4: Fix Lỗi Tests

Các lỗi thường gặp:

1. **ClassNotFoundException** → Cần rebuild test APK
   ```powershell
   .\fix_startup_provider_quick.bat
   ```

2. **Build directory corrupt** → Clean và rebuild
   ```powershell
   .\fix_build_corrupt.bat
   ```

3. **Tests fail do logic** → Xem HTML report để biết lỗi cụ thể

### Bước 5: Thu Thập Kết Quả

Sau khi tests chạy thành công (hoặc ít nhất có reports):

```powershell
.\collect_performance_results.bat
```

---

## 🔍 Kiểm tra Reports

### Vị trí Reports:

1. **HTML Reports:**
   ```
   app\build\reports\androidTests\connected\debug\index.html
   ```

2. **Test Results (raw):**
   ```
   app\build\outputs\androidTest-results\connected\
   ```

3. **Macrobenchmark:**
   ```
   app\build\outputs\connected_android_test_additional_output\
   ```

---

## 📊 Ngay Cả Khi Tests Fail

**Reports vẫn được tạo** ngay cả khi tests fail! Bạn vẫn có thể:
- Xem HTML reports để biết tests nào fail
- Thu thập kết quả của tests đã pass
- Phân tích lỗi từ reports

**Chạy `collect_performance_results.bat` vẫn sẽ copy reports**, chỉ cần đảm bảo tests đã chạy (dù pass hay fail).

---

## 🚀 Quick Fix:

```powershell
# 1. Chạy test đơn giản để tạo reports
.\run_test_simple.bat

# 2. Thu thập kết quả (ngay cả khi có failures)
.\collect_performance_results.bat

# 3. Xem reports
start performance_results\report_*\reports\androidTests\connected\debug\index.html
```

---

## ⚠️ Lưu ý:

- **Tests fail không có nghĩa là không có reports**
- **Reports được tạo sau mỗi test run** (pass hoặc fail)
- **Script `collect_performance_results.bat` đã được update** để tìm reports ở đúng vị trí
- **Nếu vẫn không có reports**, có thể build failed hoàn toàn → cần fix build trước

---

## 🆘 Nếu Vẫn Không Có Reports:

1. **Kiểm tra build có thành công không:**
   ```powershell
   .\gradlew assembleDebugAndroidTest
   ```

2. **Kiểm tra device có kết nối không:**
   ```powershell
   adb devices
   ```

3. **Chạy test thủ công:**
   ```powershell
   .\gradlew connectedDebugAndroidTest --tests "com.example.atry.performance.ScreenRenderPerformanceTest"
   ```

4. **Kiểm tra logs:**
   ```powershell
   type app\build\outputs\logs\*.txt
   ```

---

*Last updated: [Date]*


