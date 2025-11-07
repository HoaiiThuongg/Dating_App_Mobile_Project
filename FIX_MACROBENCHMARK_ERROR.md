# 🔧 Fix Lỗi Macrobenchmark: EMULATOR DEBUGGABLE NOT-SELF-INSTRUMENTING

## ❌ Lỗi gặp phải:
```
Failed java.lang.AssertionError: ERRORS (not suppressed): 
EMULATOR DEBUGGABLE NOT-SELF-INSTRUMENTING
```

## 🔍 Nguyên nhân:
Macrobenchmark tests yêu cầu:
1. **App phải không debuggable** (không phải debug build)
2. **Device thật hoặc emulator được cấu hình đúng**
3. **Build variant phù hợp** (release hoặc benchmark)

## ✅ Giải pháp đã áp dụng:

### 1. Tạo Benchmark Build Variant
Đã thêm `benchmark` build type vào `app/build.gradle.kts`:
- Không debuggable
- Dựa trên release build
- Có thể chạy macrobenchmark tests

### 2. Cách chạy Macrobenchmark Tests:

#### Cách 1: Build và chạy với benchmark variant (Khuyến nghị)
```powershell
# Build benchmark variant
.\gradlew assembleBenchmark

# Install app
.\gradlew installBenchmark

# Chạy macrobenchmark tests
.\gradlew connectedBenchmarkAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
```

#### Cách 2: Build release và chạy trên device thật
```powershell
# Build release variant
.\gradlew assembleRelease

# Install trên device thật (không phải emulator)
adb install app/build/outputs/apk/release/app-release.apk

# Chạy tests
.\gradlew connectedReleaseAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
```

#### Cách 3: Skip Macrobenchmark, chỉ dùng Custom Tests
Nếu không cần macrobenchmark, có thể skip và chỉ dùng các custom performance tests:
- `ScreenRenderPerformanceTest` ✅
- `ScrollPerformanceTest` ✅
- `ViewModelPerformanceTest` ✅
- `MemoryPerformanceTest` ✅

Các tests này không yêu cầu non-debuggable build.

---

## 🚀 Cách chạy nhanh:

### Option 1: Chạy Custom Performance Tests (Không cần macrobenchmark)
```powershell
# Chỉ chạy custom tests (không có macrobenchmark)
.\run_performance_tests.bat render
.\run_performance_tests.bat scroll
.\run_performance_tests.bat viewmodel
.\run_performance_tests.bat memory
```

### Option 2: Chạy Macrobenchmark với Benchmark Variant
```powershell
# Build benchmark variant
.\gradlew assembleBenchmark installBenchmark

# Chạy macrobenchmark
.\gradlew connectedBenchmarkAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
```

---

## 📝 Lưu ý:

1. **Macrobenchmark cần non-debuggable build**: 
   - Debug build sẽ luôn fail với lỗi này
   - Phải dùng release hoặc benchmark variant

2. **Device vs Emulator**:
   - Device thật: Tốt nhất cho macrobenchmark
   - Emulator: Có thể chạy nhưng cần cấu hình đúng

3. **Custom Performance Tests**:
   - Không yêu cầu non-debuggable
   - Có thể chạy với debug build
   - Vẫn đo được performance metrics hữu ích

---

## 🎯 Khuyến nghị:

**Cho development/testing nhanh:**
- Dùng **Custom Performance Tests** (render, scroll, viewmodel, memory)
- Không cần macrobenchmark
- Chạy được với debug build

**Cho production benchmarks:**
- Dùng **Macrobenchmark** với benchmark/release variant
- Chạy trên device thật
- Kết quả chính xác hơn

---

## 🔍 Troubleshooting:

### Nếu vẫn gặp lỗi sau khi build benchmark:
1. **Kiểm tra build variant**:
   ```powershell
   .\gradlew tasks --all | findstr benchmark
   ```

2. **Clean và rebuild**:
   ```powershell
   .\gradlew clean
   .\gradlew assembleBenchmark
   ```

3. **Kiểm tra device**:
   ```powershell
   adb devices
   # Đảm bảo device thật (không phải emulator) nếu có thể
   ```

4. **Skip macrobenchmark nếu không cần**:
   - Chỉ dùng custom performance tests
   - Hoặc comment out AppStartupBenchmark tests

