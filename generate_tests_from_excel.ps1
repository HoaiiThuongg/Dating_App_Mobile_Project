# Script to generate test files from Excel test cases
param(
    [string]$JsonFile = "testcases.json"
)

if (-not (Test-Path $JsonFile)) {
    Write-Host "Error: File '$JsonFile' not found!" -ForegroundColor Red
    exit 1
}

Write-Host "Reading test cases from $JsonFile..." -ForegroundColor Cyan

$testcases = Get-Content $JsonFile -Raw | ConvertFrom-Json

# Group test cases by category
$categories = @{}
foreach ($tc in $testcases) {
    $category = $tc.Category
    if (-not $categories.ContainsKey($category)) {
        $categories[$category] = @()
    }
    $categories[$category] += $tc
}

Write-Host "`nFound $($testcases.Count) test cases in $($categories.Count) categories:" -ForegroundColor Green
foreach ($cat in $categories.Keys) {
    Write-Host "  - $cat : $($categories[$cat].Count) test cases" -ForegroundColor Yellow
}

# Create mapping from category to test file name and screen
$categoryMapping = @{
    "DANG_NHAP" = @{
        TestFile = "LoginScreenTest.kt"
        Screen = "Login"
        Package = "com.example.atry.ui.screens.auth.login"
    }
    "DANG_KY" = @{
        TestFile = "RegisterEntryScreenTest.kt"
        Screen = "RegisterEntryScreen"
        Package = "com.example.atry.ui.screens.auth.register"
    }
    "TAO_PROFILE" = @{
        TestFile = "ProfileCreationTest.kt"
        Screen = "InfoInput1,InfoInput2,HobbiesInput,PicturesInput"
        Package = "com.example.atry.ui.screens.auth.register"
    }
    "QUET" = @{
        TestFile = "HomeScreenSwipeTest.kt"
        Screen = "HomeScreen"
        Package = "com.example.atry.ui.screens.functionalScreens.home"
    }
    "MENU" = @{
        TestFile = "MenuNavigationTest.kt"
        Screen = "HomeScreen"
        Package = "com.example.atry.ui.screens.functionalScreens.home"
    }
    "GIAO_DIEN" = @{
        TestFile = "SettingsThemeTest.kt"
        Screen = "SettingsScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "QR_CODE" = @{
        TestFile = "QRCodeTest.kt"
        Screen = "UserQrScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "CHATBOT_AI" = @{
        TestFile = "AiChatScreenTest.kt"
        Screen = "AiChatScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "THONG_BAO" = @{
        TestFile = "NotificationScreenTest.kt"
        Screen = "NotificationScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "LUOT_THICH" = @{
        TestFile = "LikeYouScreenTest.kt"
        Screen = "LikeYouScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "TIN_NHAN" = @{
        TestFile = "MessageScreenTest.kt"
        Screen = "MessageScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "HOP_CHAT" = @{
        TestFile = "ChatScreenTest.kt"
        Screen = "ChatScreen"
        Package = "com.example.atry.ui.screens.functionalScreens.chat"
    }
    "UNMATCH" = @{
        TestFile = "UnmatchTest.kt"
        Screen = "ChatScreen,DetailScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "HO_SO_CA_NHAN" = @{
        TestFile = "MyProfileScreenTest.kt"
        Screen = "MyProfileScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "CAI_DAT" = @{
        TestFile = "SettingsScreenTest.kt"
        Screen = "SettingsScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "CHINH_SUA_HS" = @{
        TestFile = "EditProfileScreenTest.kt"
        Screen = "EditProfileScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
    "HO_TRO" = @{
        TestFile = "SupportScreenTest.kt"
        Screen = "SupportScreen"
        Package = "com.example.atry.ui.screens.functionalScreens"
    }
}

# Generate test file content
function Generate-TestFile {
    param(
        [string]$Category,
        [array]$TestCases,
        [hashtable]$Mapping
    )
    
    $package = $Mapping.Package
    $testFileName = $Mapping.TestFile
    $screen = $Mapping.Screen
    
    $testDir = "app/src/androidTest/java/com/example/atry/ui/screens"
    $packagePath = $package.Replace("com.example.atry.ui.screens.", "").Replace(".", "/")
    $fullPath = Join-Path $testDir $packagePath
    $testFilePath = Join-Path $fullPath $testFileName
    
    # Create directory if not exists
    if (-not (Test-Path $fullPath)) {
        New-Item -ItemType Directory -Path $fullPath -Force | Out-Null
    }
    
    # Generate test file content
    $content = @"
package $package

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput
import androidx.compose.ui.test.waitForIdle
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for $Category category
 * Generated from Excel test cases
 * Total: $($TestCases.Count) test cases
 */
@RunWith(AndroidJUnit4::class)
class ${($testFileName -replace '\.kt$', '')} {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

"@
    
    $testIndex = 1
    foreach ($tc in $TestCases) {
        $testId = $tc.ID
        $testName = "testCase_${Category}_ID${testId}"
        $steps = $tc.Step -split '\.' | Where-Object { $_.Trim() -ne "" }
        $expected = $tc.'Expexted results'
        $data = $tc.Data
        $precondition = $tc.Precondition
        
        $content += @"

    /**
     * Test Case ID: $testId
     * Category: $Category
     * Precondition: $precondition
     * Data: $data
     * Expected: $expected
     */
    @Test
    fun $testName() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "test") {
                composable("test") {
                    // TODO: Implement test for $screen
                    Text("TEST_SCREEN", modifier = Modifier.testTag("test_screen"))
                }
            }
        }

        // TODO: Implement test steps:
"@
        
        foreach ($step in $steps) {
            $stepNum = $steps.IndexOf($step) + 1
            $content += "        // Step $stepNum : $($step.Trim())`n"
        }
        
        $content += @"
        
        composeRule.waitForIdle()
        // TODO: Assert expected results: $expected
    }

"@
        $testIndex++
    }
    
    $content += "}`n"
    
    # Write file
    $content | Out-File -FilePath $testFilePath -Encoding UTF8
    Write-Host "  Generated: $testFilePath" -ForegroundColor Green
}

# Generate test files for each category
Write-Host "`nGenerating test files..." -ForegroundColor Cyan
foreach ($category in $categories.Keys) {
    if ($categoryMapping.ContainsKey($category)) {
        Write-Host "`nProcessing category: $category" -ForegroundColor Yellow
        Generate-TestFile -Category $category -TestCases $categories[$category] -Mapping $categoryMapping[$category]
    } else {
        Write-Host "  Warning: No mapping found for category: $category" -ForegroundColor Red
    }
}

Write-Host "`n✅ Test file generation completed!" -ForegroundColor Green

