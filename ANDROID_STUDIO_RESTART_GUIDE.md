# HƯỚNG DẪN KHỞI ĐỘNG LẠI ANDROID STUDIO SAU KHI CHUYỂN SANG Ổ E

## 1. KHỞI ĐỘNG LẠI MÁY TÍNH
- **Bắt buộc**: Khởi động lại để các biến môi trường có hiệu lực
- Sau khi khởi động lại, mở PowerShell và kiểm tra:
```powershell
echo $env:ANDROID_SDK_HOME
echo $env:ANDROID_AVD_HOME
echo $env:GRADLE_USER_HOME
```

## 2. MỞ ANDROID STUDIO
- Mở Android Studio và đợi nó load config mới
- Nếu có thông báo về SDK, chọn "Setup Proxy" hoặc "Cancel"

## 3. CẤU HÌNH LẠI ANDROID SDK
1. Vào: **File → Settings → Appearance & Behavior → System Settings → Android SDK**
2. Click **"Edit"** hoặc **"Android SDK Location"**
3. Chọn đường dẫn: `E:\Android\SDK`
4. Click **Next** và đợi tải về các components cần thiết
5. Trong tab **"SDK Tools"**, chọn:
   - ✅ Android SDK Build-Tools
   - ✅ Android SDK Platform-Tools
   - ✅ Android Emulator
   - ✅ Intel x86 Emulator Accelerator (HAXM installer)
6. Click **Apply** và đợi cài đặt

## 4. CẤU HÌNH LẠI AVD
1. Vào: **Tools → Device Manager**
2. Click **"Create Device"** hoặc import lại AVD cũ
3. Nếu cần, copy AVD từ backup:
```powershell
Copy-Item -Path "E:\Android\AVD\*" -Destination "$env:USERPROFILE\.android\avd\" -Recurse -Force
```

## 5. CÀI ĐẶT LẠI GRADLE
1. Mở terminal trong Android Studio
2. Chạy lệnh:
```bash
./gradlew clean build
```
3. Đợi Gradle tải lại dependencies

## 6. TEST LẠI PROJECT
1. Build project:
```bash
./gradlew assembleDebug
```
2. Chạy test:
```bash
./gradlew connectedDebugAndroidTest
```

## 7. KIỂM TRA CẤU HÌNH
Chạy script kiểm tra:
```powershell
.\verify_migration.ps1
```

## 8. LƯU Ý QUAN TRỌNG
- **Đừng xóa thư mục E:\Android** - đây là nơi chứa tất cả cache mới
- **Backup project** trước khi làm bất kỳ thay đổi nào
- Nếu gặp lỗi, kiểm tra lại các biến môi trường trong System Properties

## 9. TỐI ƯU PERFORMANCE
Sau khi cài đặt xong, thêm vào `gradle.properties`:
```properties
org.gradle.jvmargs=-Xmx8g -Dfile.encoding=UTF-8
org.gradle.parallel=true
org.gradle.configureondemand=true
org.gradle.caching=true
```

**Chúc bạn thành công! 🚀**