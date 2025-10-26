plugins {
    // Giữ nguyên alias nếu bạn đang dùng version catalog (libs.versions.toml)
    alias(libs.plugins.android.application)
    alias(libs.plugins.kotlin.android)
    alias(libs.plugins.kotlin.compose)
    id("kotlin-parcelize")
    id("com.google.gms.google-services") version "4.4.4" apply false
    id("jacoco")
}

jacoco {
    toolVersion = "0.8.13"
}

android {
    namespace = "com.example.atry"
    compileSdk = 36

    defaultConfig {
        applicationId = "com.example.atry"
        minSdk = 24
        targetSdk = 36
        versionCode = 1
        versionName = "1.0"

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }

    buildTypes {
        release {
            isMinifyEnabled = false
            proguardFiles(
                getDefaultProguardFile("proguard-android-optimize.txt"),
                "proguard-rules.pro"
            )
        }

        debug {
            enableUnitTestCoverage = true
            enableAndroidTestCoverage = true
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }
    kotlinOptions {
        jvmTarget = "11"
    }
    buildFeatures {
        compose = true
    }
}

configurations.all {
    // Ép buộc các phiên bản test compatible để tránh conflict (an toàn, nếu bạn muốn gỡ lên tuỳ).
    resolutionStrategy.force(
        "androidx.test.ext:junit:1.1.5",
        "androidx.test.espresso:espresso-core:3.5.0"
    )
}

dependencies {
    // Core / Compose / Navigation
    implementation("androidx.navigation:navigation-compose:2.8.0")
    implementation(libs.androidx.core.ktx)
    implementation(libs.androidx.lifecycle.runtime.ktx)
    implementation(libs.androidx.activity.compose)
    implementation(platform(libs.androidx.compose.bom))
    implementation(libs.androidx.compose.ui)
    implementation(libs.androidx.compose.ui.graphics)
    implementation(libs.androidx.compose.ui.tooling.preview)
    implementation(libs.androidx.compose.material3)
    implementation(libs.androidx.compose.foundation.layout)
    implementation(libs.androidx.material3)
    implementation(libs.androidx.navigation.testing)

    // --- Test dependencies: chú ý sử dụng testImplementation / androidTestImplementation ---
    // Unit tests (JVM)
    testImplementation("junit:junit:4.13.2")
    testImplementation("org.jetbrains.kotlinx:kotlinx-coroutines-test:1.8.1")

    // Instrumented Android tests (Compose UI tests transitively yêu cầu junit:1.1.5 & espresso:3.5.0)
    androidTestImplementation("androidx.test.ext:junit:1.1.5")
    androidTestImplementation("androidx.test.espresso:espresso-core:3.5.0")

    // Compose UI test artifact (phiên bản lấy từ BOM)
    androidTestImplementation(platform(libs.androidx.compose.bom))
    androidTestImplementation("androidx.compose.ui:ui-test-junit4")

    // Debug
    debugImplementation(libs.androidx.compose.ui.tooling)
    debugImplementation(libs.androidx.compose.ui.test.manifest)

    // Libraries (giữ nguyên phần còn lại)
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.7.3")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:1.7.3")
    implementation("com.squareup.retrofit2:retrofit:2.9.0")
    implementation("com.squareup.retrofit2:converter-gson:2.9.0")
    implementation("androidx.datastore:datastore-preferences:1.1.1")

    implementation("androidx.compose.material:material-icons-extended")
    implementation("com.google.zxing:core:3.5.3")
    implementation("com.google.mlkit:barcode-scanning:17.2.0")
    implementation("androidx.camera:camera-camera2:1.3.4")
    implementation("androidx.camera:camera-lifecycle:1.3.4")
    implementation("androidx.camera:camera-view:1.3.4")
    implementation("com.google.accompanist:accompanist-permissions:0.35.1-alpha")
    implementation("br.com.devsrsouza.compose.icons:font-awesome:1.1.0")

    implementation("io.coil-kt:coil-compose:2.4.0")

    // Test libraries that shouldn't be runtime/implementation:
    // - (Đã chuyển) implementation(kotlin("test")) bị gỡ vì làm lẫn test libs vào runtime.
    // Nếu bạn cần kotlin test trên JVM, dùng testImplementation("org.jetbrains.kotlin:kotlin-test")
    // testImplementation("org.jetbrains.kotlin:kotlin-test") // (tùy chọn)

    testImplementation("org.jetbrains.kotlinx:kotlinx-coroutines-test:1.8.1")

    // Firebase / other libs
    implementation("com.google.firebase:firebase-auth:22.3.0")
    implementation("com.google.firebase:firebase-firestore:25.1.1")
    implementation("com.google.firebase:firebase-storage:21.0.1")
    implementation("com.google.firebase:firebase-messaging:24.0.0")
    implementation("com.google.guava:guava:31.1-android")
    implementation("com.cloudinary:cloudinary-android:3.1.2")
    implementation("androidx.appcompat:appcompat:1.7.0")
}
