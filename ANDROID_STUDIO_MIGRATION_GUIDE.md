# HƯỚNG DẪN CHUYỂN ANDROID STUDIO SANG Ổ E

## 1. Các file đã được cấu hình:
✅ gradle.properties - Đã chuyển Gradle cache sang E:/Android/GradleCache
✅ idea.properties - Đã tạo file cấu hình Android Studio cache

## 2. Các bước cần thực hiện thủ công trong Android Studio:

### A. Chuyển AVD (Android Virtual Device) sang ổ E:
1. Mở Android Studio
2. Vào: File → Settings → Appearance & Behavior → System Settings → Android SDK
3. Trong tab "SDK Platforms" → Click "Edit" → Chọn thư mục: `E:\Android\SDK`
4. Trong tab "SDK Tools" → Chọn "Android Emulator" → Apply

### B. Di chuyển AVD hiện có:
1. Đóng Android Studio hoàn toàn
2. Di chuyển thư mục `C:\Users\[TênUser]\.android\avd` sang `E:\Android\AVD`
3. Tạo biến môi trường mới:
   - Tên: `ANDROID_AVD_HOME`
   - Giá trị: `E:\Android\AVD`

### C. Áp dụng idea.properties:
1. Copy file `idea.properties` vừa tạo vào thư mục:
   `C:\Users\[TênUser]\.AndroidStudio[version]\config\`

### D. Các biến môi trường cần thiết:
Thêm các biến môi trường sau vào System Environment Variables:
```
ANDROID_SDK_HOME=E:\Android\SDK
ANDROID_AVD_HOME=E:\Android\AVD
GRADLE_USER_HOME=E:\Android\GradleCache
```

## 3. Sau khi hoàn thành:
- Khởi động lại máy
- Mở Android Studio và kiểm tra lại cấu hình
- Chạy lại test để xác nhận không còn lỗi file lock

## 4. Dọn dẹp ổ C:\\:
Sau khi chuyển thành công, bạn có thể xóa:
- `C:\Users\[TênUser]\.gradle`
- `C:\Users\[TênUser]\.android\avd`
- `C:\Users\[TênUser]\.AndroidStudio[version]\system\caches`