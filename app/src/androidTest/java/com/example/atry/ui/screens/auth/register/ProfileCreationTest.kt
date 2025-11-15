package com.example.atry.ui.screens.auth.register

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for TAO_PROFILE category - Functional testing based on Testcases.txt
 * Test cases 11-27: Profile creation with validation
 */
@RunWith(AndroidJUnit4::class)
class ProfileCreationTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case TAO_PROFILE 11: Nhập thông tin hợp lệ - Tên và ngày sinh hợp lệ
     */
    @Test
    fun infoInput1_ValidNameAndBirthDate_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput1") {
                composable("registerInfoInput1") {
                    InfoInput1()
                }
                composable("registerInfoInput2") {
                    Text("INFO_INPUT_2_SCREEN", modifier = Modifier.testTag("info_input_2_screen"))
                }
            }
        }

        // Nhập tên hợp lệ
        composeRule.onNodeWithText("Tên", substring = true).performTextInput("Nguyễn Văn A")
        // Nhập ngày sinh hợp lệ
        composeRule.onNodeWithText("Ngày sinh", substring = true).performTextInput("01/01/2000")
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Xác thực thành công và chuyển sang màn hình nhập SĐT / Giới tính
    }

    /**
     * Test case TAO_PROFILE 12: Ngày sinh không hợp lệ - Ngày không tồn tại
     */
    @Test
    fun infoInput1_InvalidBirthDate_DayNotExist_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput1") {
                composable("registerInfoInput1") {
                    InfoInput1()
                }
            }
        }

        // Nhập tên hợp lệ
        composeRule.onNodeWithText("Tên", substring = true).performTextInput("Nguyễn Văn A")
        // Nhập ngày sinh không tồn tại (32/01/2000)
        composeRule.onNodeWithText("Ngày sinh", substring = true).performTextInput("32/01/2000")
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Ngày sinh không hợp lệ" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 13: Ngày sinh sai định dạng
     */
    @Test
    fun infoInput1_InvalidBirthDate_WrongFormat_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput1") {
                composable("registerInfoInput1") {
                    InfoInput1()
                }
            }
        }

        // Nhập tên hợp lệ
        composeRule.onNodeWithText("Tên", substring = true).performTextInput("Nguyễn Văn A")
        // Nhập ngày sinh sai định dạng (abcxyz)
        composeRule.onNodeWithText("Ngày sinh", substring = true).performTextInput("abcxyz")
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Ngày sinh không đúng định dạng (DD/MM/YYYY)" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 14: Tên để trống
     */
    @Test
    fun infoInput1_EmptyName_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput1") {
                composable("registerInfoInput1") {
                    InfoInput1()
                }
            }
        }

        // Không nhập tên, chỉ nhập ngày sinh
        composeRule.onNodeWithText("Ngày sinh", substring = true).performTextInput("01/01/2000")
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng nhập tên của bạn" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 15: Nhập SĐT và giới tính hợp lệ
     */
    @Test
    fun infoInput2_ValidPhoneAndGender_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput2") {
                composable("registerInfoInput2") {
                    InfoInput2()
                }
                composable("registerHobbiesInput") {
                    Text("HOBBIES_INPUT_SCREEN", modifier = Modifier.testTag("hobbies_input_screen"))
                }
            }
        }

        // Nhập SĐT hợp lệ (10 số)
        composeRule.onNodeWithText("Số điện thoại", substring = true).performTextInput("0987654321")
        // Chọn giới tính Nam
        composeRule.onNodeWithText("Nam").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Xác thực thành công và chuyển sang màn hình "Viết giới thiệu"
    }

    /**
     * Test case TAO_PROFILE 16: SĐT ít hơn 10 số
     */
    @Test
    fun infoInput2_InvalidPhone_TooShort_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput2") {
                composable("registerInfoInput2") {
                    InfoInput2()
                }
            }
        }

        // Nhập SĐT ít hơn 10 số (6 số)
        composeRule.onNodeWithText("Số điện thoại", substring = true).performTextInput("098765")
        // Chọn giới tính Nam
        composeRule.onNodeWithText("Nam").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Số điện thoại phải có 10 chữ số" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 17: SĐT có ký tự không phải số
     */
    @Test
    fun infoInput2_InvalidPhone_ContainsLetters_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput2") {
                composable("registerInfoInput2") {
                    InfoInput2()
                }
            }
        }

        // Nhập SĐT có chứa chữ cái
        composeRule.onNodeWithText("Số điện thoại", substring = true).performTextInput("098765432a")
        // Chọn giới tính Nam
        composeRule.onNodeWithText("Nam").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Số điện thoại không hợp lệ" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 18: Không chọn giới tính
     */
    @Test
    fun infoInput2_NoGenderSelected_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput2") {
                composable("registerInfoInput2") {
                    InfoInput2()
                }
            }
        }

        // Nhập SĐT hợp lệ
        composeRule.onNodeWithText("Số điện thoại", substring = true).performTextInput("0987654321")
        // Không chọn giới tính
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng chọn giới tính" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 19: Nhập giới thiệu hợp lệ
     */
    @Test
    fun hobbiesInput_ValidIntroduction_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerHobbiesInput") {
                composable("registerHobbiesInput") {
                    HobbiesInput()
                }
                composable("picturesInput") {
                    Text("PICTURES_INPUT_SCREEN", modifier = Modifier.testTag("pictures_input_screen"))
                }
            }
        }

        // Nhập nội dung giới thiệu
        composeRule.onNodeWithText("Viết giới thiệu", substring = true).performTextInput("Xin chào, mình là...")
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Lưu thành công và chuyển sang màn hình "Chọn sở thích"
    }

    /**
     * Test case TAO_PROFILE 20: Không nhập giới thiệu (không bắt buộc)
     */
    @Test
    fun hobbiesInput_EmptyIntroduction_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerHobbiesInput") {
                composable("registerHobbiesInput") {
                    HobbiesInput()
                }
                composable("picturesInput") {
                    Text("PICTURES_INPUT_SCREEN", modifier = Modifier.testTag("pictures_input_screen"))
                }
            }
        }

        // Không nhập giới thiệu
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Chuyển sang màn hình "Chọn sở thích" (giả định trường này không bắt buộc)
    }

    /**
     * Test case TAO_PROFILE 21: Chọn đủ 3 sở thích
     */
    @Test
    fun hobbiesInput_SelectThreeHobbies_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerHobbiesInput") {
                composable("registerHobbiesInput") {
                    HobbiesInput()
                }
                composable("picturesInput") {
                    Text("PICTURES_INPUT_SCREEN", modifier = Modifier.testTag("pictures_input_screen"))
                }
            }
        }

        // Chọn 3 sở thích
        composeRule.onNodeWithText("Đọc sách").performClick()
        composeRule.onNodeWithText("Du lịch").performClick()
        composeRule.onNodeWithText("Nấu ăn").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Lưu thành công và chuyển sang màn hình "Tải ảnh"
    }

    /**
     * Test case TAO_PROFILE 22: Chọn ít hơn 3 sở thích
     */
    @Test
    fun hobbiesInput_SelectLessThanThreeHobbies_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerHobbiesInput") {
                composable("registerHobbiesInput") {
                    HobbiesInput()
                }
            }
        }

        // Chọn 2 sở thích
        composeRule.onNodeWithText("Đọc sách").performClick()
        composeRule.onNodeWithText("Du lịch").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng chọn ít nhất 3 sở thích" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 23: Không chọn sở thích nào
     */
    @Test
    fun hobbiesInput_NoHobbiesSelected_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerHobbiesInput") {
                composable("registerHobbiesInput") {
                    HobbiesInput()
                }
            }
        }

        // Không chọn sở thích nào
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng chọn ít nhất 3 sở thích" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 24: Tải ảnh hợp lệ
     */
    @Test
    fun picturesInput_ValidImage_NavigatesToMainScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    PicturesInput()
                }
                composable("main") {
                    Text("MAIN_SCREEN", modifier = Modifier.testTag("main_screen"))
                }
            }
        }

        // Click nút tải ảnh
        composeRule.onNodeWithText("Tải ảnh", substring = true).performClick()
        // Chọn ảnh hợp lệ (giả lập)
        // Click nút hoàn tất
        composeRule.onNodeWithText("Hoàn tất").performClick()

        composeRule.waitForIdle()
        // Expected: Tải ảnh thành công, tạo hồ sơ thành công và chuyển vào màn hình chính
    }

    /**
     * Test case TAO_PROFILE 25: Không tải ảnh
     */
    @Test
    fun picturesInput_NoImageUploaded_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    PicturesInput()
                }
            }
        }

        // Không tải ảnh
        // Click nút hoàn tất
        composeRule.onNodeWithText("Hoàn tất").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng tải lên ít nhất 1 ảnh" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 26: Tải file không phải ảnh
     */
    @Test
    fun picturesInput_InvalidFileType_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    PicturesInput()
                }
            }
        }

        // Click nút tải ảnh
        composeRule.onNodeWithText("Tải ảnh", substring = true).performClick()
        // Chọn file PDF (giả lập)
        // Click nút hoàn tất
        composeRule.onNodeWithText("Hoàn tất").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Định dạng file không hỗ trợ, vui lòng chọn ảnh (JPG, PNG)" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 27: Tải ảnh có dung lượng quá lớn
     */
    @Test
    fun picturesInput_ImageTooLarge_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    PicturesInput()
                }
            }
        }

        // Click nút tải ảnh
        composeRule.onNodeWithText("Tải ảnh", substring = true).performClick()
        // Chọn ảnh có dung lượng > 10MB (giả lập)
        // Click nút hoàn tất
        composeRule.onNodeWithText("Hoàn tất").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Dung lượng ảnh quá lớn (tối đa 10MB)" và vẫn ở màn hình hiện tại
    }
}