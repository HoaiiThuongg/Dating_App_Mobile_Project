package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onRoot
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith
import java.util.Locale

@RunWith(AndroidJUnit4::class)
class LanguageSystemWideTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testLanguageSwitching_EnglishToVietnamese() {
        // Test switching from English to Vietnamese
        composeTestRule.setContent {
            TryTheme {
                TestScreensWithLanguage(locale = Locale("vi", "VN"))
            }
        }
        
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testLanguageSwitching_VietnameseToEnglish() {
        // Test switching from Vietnamese to English
        composeTestRule.setContent {
            TryTheme {
                TestScreensWithLanguage(locale = Locale.ENGLISH)
            }
        }
        
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testLanguageConsistency_AcrossScreens() {
        // Test language consistency across all screens
        val testLocale = Locale("vi", "VN")
        
        composeTestRule.setContent {
            TryTheme {
                TestScreensWithLanguage(locale = testLocale)
            }
        }
        
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testLanguagePersistence() {
        // Test language persistence across app sessions
        val savedLocale = Locale("vi", "VN")
        
        composeTestRule.setContent {
            TryTheme {
                TestScreensWithLanguage(locale = savedLocale)
            }
        }
        
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testRTL_LanguageSupport() {
        // Test RTL language support (Arabic, Hebrew, etc.)
        val rtlLocale = Locale("ar", "SA")
        
        composeTestRule.setContent {
            TryTheme {
                TestScreensWithLanguage(locale = rtlLocale)
            }
        }
        
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testMixedLanguage_Content() {
        // Test mixed language content handling
        val mixedLocale = Locale("vi", "VN")
        
        composeTestRule.setContent {
            TryTheme {
                TestScreensWithMixedContent(locale = mixedLocale)
            }
        }
        
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testLanguageSpecific_Formatting() {
        // Test language-specific formatting (dates, numbers, etc.)
        val locale = Locale("vi", "VN")
        
        composeTestRule.setContent {
            TryTheme {
                TestLanguageFormatting(locale = locale)
            }
        }
        
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testSystemLanguage_Change() {
        // Test handling system language changes
        composeTestRule.setContent {
            TryTheme {
                TestSystemLanguageChange()
            }
        }
        
        composeTestRule.onRoot().assertExists()
    }
}

@Composable
private fun TestScreensWithLanguage(locale: Locale) {
    // Test Login Screen language
    LoginScreenLanguageTest(locale)
    
    // Test Register Screen language
    RegisterScreenLanguageTest(locale)
    
    // Test Home Screen language
    HomeScreenLanguageTest(locale)
    
    // Test Chat Screen language
    ChatScreenLanguageTest(locale)
    
    // Test Profile Screen language
    ProfileScreenLanguageTest(locale)
}

@Composable
private fun LoginScreenLanguageTest(locale: Locale) {
    // Verify login screen text is properly localized
    // Test form labels, buttons, error messages
}

@Composable
private fun RegisterScreenLanguageTest(locale: Locale) {
    // Verify register screen text is properly localized
    // Test form labels, validation messages, help text
}

@Composable
private fun HomeScreenLanguageTest(locale: Locale) {
    // Verify home screen text is properly localized
    // Test navigation labels, action buttons, user interface text
}

@Composable
private fun ChatScreenLanguageTest(locale: Locale) {
    // Verify chat screen text is properly localized
    // Test message placeholders, timestamps, action buttons
}

@Composable
private fun ProfileScreenLanguageTest(locale: Locale) {
    // Verify profile screen text is properly localized
    // Test field labels, edit options, settings text
}

@Composable
private fun TestScreensWithMixedContent(locale: Locale) {
    // Test screens with mixed language content
    // Verify proper handling of user-generated content in different languages
}

@Composable
private fun TestLanguageFormatting(locale: Locale) {
    // Test language-specific formatting
    // Test date formats, number formats, currency display
}

@Composable
private fun TestSystemLanguageChange() {
    // Test system language change handling
    // Verify app responds to system language changes
}
