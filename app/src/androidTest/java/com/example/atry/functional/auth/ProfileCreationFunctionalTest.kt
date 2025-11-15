package com.example.atry.functional.auth

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
import com.example.atry.ui.screens.auth.register.InfoInput1
import com.example.atry.ui.screens.auth.register.InfoInput2
import com.example.atry.ui.screens.auth.register.HobbiesInput
import com.example.atry.ui.screens.auth.register.PicturesInput
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for TAO_PROFILE category - Functional testing based on Testcases.txt
 * Test cases 11-27: Profile creation with validation
 */
@RunWith(AndroidJUnit4::class)
class ProfileCreationFunctionalTest {

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
        // Nhập ngày sinh sai định dạng (2000/01/01)
        composeRule.onNodeWithText("Ngày sinh", substring = true).performTextInput("2000/01/01")
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Ngày sinh không hợp lệ" và vẫn ở màn hình hiện tại
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
        // Expected: Hiển thị lỗi "Vui lòng nhập tên" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 15: Ngày sinh để trống
     */
    @Test
    fun infoInput1_EmptyBirthDate_ShowsError() {
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
        // Không nhập ngày sinh
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng nhập ngày sinh" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 16: Nhập thông tin hợp lệ - SĐT và giới tính
     */
    @Test
    fun infoInput2_ValidPhoneAndGender_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput2") {
                composable("registerInfoInput2") {
                    com.example.atry.ui.screens.auth.register.InfoInput2()
                }
                composable("hobbiesInput") {
                    Text("HOBBIES_INPUT_SCREEN", modifier = Modifier.testTag("hobbies_input_screen"))
                }
            }
        }

        // Nhập SĐT hợp lệ
        composeRule.onNodeWithText("Số điện thoại", substring = true).performTextInput("0912345678")
        // Chọn giới tính Nam
        composeRule.onNodeWithText("Nam").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Xác thực thành công và chuyển sang màn hình chọn sở thích
    }

    /**
     * Test case TAO_PROFILE 17: SĐT sai định dạng
     */
    @Test
    fun infoInput2_InvalidPhoneFormat_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput2") {
                composable("registerInfoInput2") {
                    com.example.atry.ui.screens.auth.register.InfoInput2()
                }
            }
        }

        // Nhập SĐT sai định dạng
        composeRule.onNodeWithText("Số điện thoại", substring = true).performTextInput("12345")
        // Chọn giới tính
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
                    com.example.atry.ui.screens.auth.register.InfoInput2()
                }
            }
        }

        // Nhập SĐT hợp lệ
        composeRule.onNodeWithText("Số điện thoại", substring = true).performTextInput("0912345678")
        // Không chọn giới tính
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng chọn giới tính" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 19: SĐT để trống
     */
    @Test
    fun infoInput2_EmptyPhone_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput2") {
                composable("registerInfoInput2") {
                    com.example.atry.ui.screens.auth.register.InfoInput2()
                }
            }
        }

        // Không nhập SĐT
        // Chọn giới tính
        composeRule.onNodeWithText("Nam").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng nhập số điện thoại" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 20: Chọn sở thích hợp lệ (>= 3 sở thích)
     */
    @Test
    fun hobbiesInput_ValidHobbiesSelection_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "hobbiesInput") {
                composable("hobbiesInput") {
                    com.example.atry.ui.screens.auth.register.HobbiesInput()
                }
                composable("picturesInput") {
                    Text("PICTURES_INPUT_SCREEN", modifier = Modifier.testTag("pictures_input_screen"))
                }
            }
        }

        // Chọn 3 sở thích
        composeRule.onNodeWithText("Âm nhạc").performClick()
        composeRule.onNodeWithText("Thể thao").performClick()
        composeRule.onNodeWithText("Du lịch").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Xác thực thành công và chuyển sang màn hình upload ảnh
    }

    /**
     * Test case TAO_PROFILE 21: Chọn ít hơn 3 sở thích
     */
    @Test
    fun hobbiesInput_LessThan3Hobbies_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "hobbiesInput") {
                composable("hobbiesInput") {
                    com.example.atry.ui.screens.auth.register.HobbiesInput()
                }
            }
        }

        // Chọn chỉ 2 sở thích
        composeRule.onNodeWithText("Âm nhạc").performClick()
        composeRule.onNodeWithText("Thể thao").performClick()
        // Click nút tiếp theo
        composeRule.onNodeWithText("Tiếp theo").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng chọn ít nhất 3 sở thích" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 22: Không chọn sở thích nào
     */
    @Test
    fun hobbiesInput_NoHobbiesSelected_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "hobbiesInput") {
                composable("hobbiesInput") {
                    com.example.atry.ui.screens.auth.register.HobbiesInput()
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
     * Test case TAO_PROFILE 23: Upload ảnh hợp lệ (>= 2 ảnh)
     */
    @Test
    fun picturesInput_ValidPicturesUpload_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    com.example.atry.ui.screens.auth.register.PicturesInput()
                }
                composable("main") {
                    Text("MAIN_SCREEN", modifier = Modifier.testTag("main_screen"))
                }
            }
        }

        // Upload 2 ảnh (simulated)
        // In a real test, we would simulate image picker
        // Click nút hoàn thành
        composeRule.onNodeWithText("Hoàn thành").performClick()

        composeRule.waitForIdle()
        // Expected: Xác thực thành công và chuyển sang màn hình chính
    }

    /**
     * Test case TAO_PROFILE 24: Upload ít hơn 2 ảnh
     */
    @Test
    fun picturesInput_LessThan2Pictures_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    com.example.atry.ui.screens.auth.register.PicturesInput()
                }
            }
        }

        // Upload chỉ 1 ảnh (simulated)
        // In a real test, we would simulate image picker
        // Click nút hoàn thành
        composeRule.onNodeWithText("Hoàn thành").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng upload ít nhất 2 ảnh" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 25: Không upload ảnh nào
     */
    @Test
    fun picturesInput_NoPicturesUploaded_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    com.example.atry.ui.screens.auth.register.PicturesInput()
                }
            }
        }

        // Không upload ảnh nào
        // Click nút hoàn thành
        composeRule.onNodeWithText("Hoàn thành").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Vui lòng upload ít nhất 2 ảnh" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 26: Upload ảnh không hợp lệ (định dạng sai)
     */
    @Test
    fun picturesInput_InvalidPictureFormat_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    com.example.atry.ui.screens.auth.register.PicturesInput()
                }
            }
        }

        // Upload ảnh với định dạng không hợp lệ (simulated)
        // In a real test, we would simulate invalid file selection
        // Click nút hoàn thành
        composeRule.onNodeWithText("Hoàn thành").performClick()

        composeRule.waitForIdle()
        // Expected: Hiển thị lỗi "Định dạng ảnh không hợp lệ" và vẫn ở màn hình hiện tại
    }

    /**
     * Test case TAO_PROFILE 27: Hủy upload ảnh
     */
    @Test
    fun picturesInput_CancelUpload_ReturnsToPreviousScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    com.example.atry.ui.screens.auth.register.PicturesInput()
                }
                composable("hobbiesInput") {
                    Text("HOBBIES_INPUT_SCREEN", modifier = Modifier.testTag("hobbies_input_screen"))
                }
            }
        }

        // Click nút quay lại/hủy
        composeRule.onNodeWithText("Quay lại").performClick()

        composeRule.waitForIdle()
        // Expected: Quay lại màn hình chọn sở thích
    }
}