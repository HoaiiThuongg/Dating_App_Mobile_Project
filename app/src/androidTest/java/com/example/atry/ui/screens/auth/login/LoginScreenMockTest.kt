package com.example.atry.ui.screens.auth.login

import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.assertIsEnabled
import androidx.compose.ui.test.assertIsNotEnabled
import androidx.compose.ui.test.junit4.createComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.viewmodel.auth.FakeLoginViewModel
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Assert.assertEquals
import org.junit.Assert.assertTrue
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class LoginScreenMockTest {

    // createComposeRule() dùng để test Composable trong isolation (cô lập)
    // Nó nhanh hơn createAndroidComposeRule
    @get:Rule
    val composeTestRule = createComposeRule()

    // Khai báo ViewModel Giả
    private lateinit var fakeViewModel: FakeLoginViewModel
    private lateinit var fakeAlertViewModel: AlertViewModel // Giả sử AlertVM đơn giản

    /**
     * Test 1: Kiểm tra trạng thái Lỗi
     * Kịch bản: Khi ViewModel ở trạng thái Lỗi, UI có hiển thị text Lỗi không?
     */
    @RunWith(AndroidJUnit4::class)
    class LoginScreenMockTest {

        @get:Rule
        val composeTestRule = createComposeRule()

        // Khai báo ViewModel Giả
        private lateinit var fakeViewModel: FakeLoginViewModel
        private lateinit var fakeAlertViewModel: AlertViewModel

        // Hàm @Before sẽ chạy trước MỖI bài test
        @Before
        fun setUp() {
            // Khởi tạo các ViewModel giả cho mỗi bài test
            // để đảm bảo chúng "sạch sẽ" và không bị ảnh hưởng bởi test trước
            fakeViewModel = FakeLoginViewModel()
            fakeAlertViewModel = AlertViewModel() // Giả sử AlertVM đơn giản
        }

        /**
         * Test Case 1: Đăng nhập thành công
         * Kịch bản: Khi ViewModel ở trạng thái Success, UI có hiển thị "Chúc mừng..."
         */
        @Test
        fun testLoginSuccess_DisplaysSuccessMessage() {
            // Sắp xếp (Arrange)
            composeTestRule.setContent {
                Login(viewModel = fakeViewModel, alertViewModel = fakeAlertViewModel)
            }

            // Hành động (Act)
            // Đẩy một trạng thái Success vào ViewModel Giả
            composeTestRule.runOnIdle {
                // Sử dụng message khớp với code Login.kt
                fakeViewModel.pushState(
                    LoginState(
                        isSuccess = true,
                        message = "Đăng nhập thành công"
                    )
                )
            }

            // Khẳng định (Assert)
            // Kiểm tra xem UI có hiển thị đúng text thành công không
            composeTestRule
                .onNodeWithText("Chúc mừng bạn đăng nhập thành công!", substring = true)
                .assertIsDisplayed()
        }

        /**
         * Test Case 2: Đăng nhập thất bại (Sai mật khẩu)
         * Kịch bản: Khi ViewModel ở trạng thái Lỗi, UI có hiển thị text Lỗi không?
         */
        @Test
        fun testErrorState_DisplaysErrorText() {
            // Sắp xếp (Arrange)
            composeTestRule.setContent {
                Login(viewModel = fakeViewModel, alertViewModel = fakeAlertViewModel)
            }

            // Hành động (Act)
            // Đẩy một trạng thái Lỗi
            val errorMessage = "Sai mật khẩu hoặc tên đăng nhập"
            composeTestRule.runOnIdle {
                fakeViewModel.pushState(LoginState(error = errorMessage))
            }

            // Khẳng định (Assert)
            // Kiểm tra xem UI có hiển thị đúng text lỗi không
            // "substring = true" để nó khớp cả khi có dấu " " ở đầu (" ${state.error}")
            composeTestRule
                .onNodeWithText(errorMessage, substring = true)
                .assertIsDisplayed()
        }

        /**
         * Test Case (Loading): Kiểm tra trạng thái Loading
         * Kịch bản: Khi ViewModel ở trạng thái Loading, các nút/input có bị vô hiệu hóa không?
         */
        @Test
        fun testLoadingState_DisablesInputsAndButton() {
            // Sắp xếp (Arrange)
            composeTestRule.setContent {
                Login(viewModel = fakeViewModel, alertViewModel = fakeAlertViewModel)
            }

            // Kiểm tra trạng thái ban đầu (chưa loading)
            composeTestRule.onNodeWithTag("login:email_input").assertIsEnabled()
            composeTestRule.onNodeWithTag("login:password_input").assertIsEnabled()
            composeTestRule.onNodeWithTag("login:login_button").assertIsEnabled()

            // Hành động (Act)
            // Đẩy trạng thái Loading
            composeTestRule.runOnIdle {
                fakeViewModel.pushState(LoginState(isLoading = true))
            }

            // Khẳng định (Assert)
            // Kiểm tra xem các component đã bị vô hiệu hóa (disabled)
            composeTestRule.onNodeWithTag("login:email_input").assertIsNotEnabled()
            composeTestRule.onNodeWithTag("login:password_input").assertIsNotEnabled()
            composeTestRule.onNodeWithTag("login:login_button").assertIsNotEnabled()

            // Kiểm tra text "Đang xác thực..." cũng hiển thị
            composeTestRule.onNodeWithText("Đang xác thực...").assertIsDisplayed()
        }

        /**
         * Test Case (Tương tác): Kiểm tra hành động nhấn nút
         * Kịch bản: Khi người dùng nhấn nút Đăng nhập, hàm login() trên ViewModel có được gọi không?
         */
        @Test
        fun testLoginClick_CallsViewModelLogin() {
            // Sắp xếp (Arrange)
            composeTestRule.setContent {
                Login(viewModel = fakeViewModel, alertViewModel = fakeAlertViewModel)
            }

            // Hành động (Act)
            // 1. Gõ text vào 2 ô input
            composeTestRule
                .onNodeWithTag("login:email_input")
                .performTextInput("user.test@example.com")

            composeTestRule
                .onNodeWithTag("login:password_input")
                .performTextInput("pass123")

            // 2. Nhấn nút Đăng nhập
            composeTestRule
                .onNodeWithTag("login:login_button")
                .performClick()

            // Khẳng định (Assert)
            // Kiểm tra xem hàm login() trên ViewModel Giả đã được gọi
            assertTrue("Hàm login() lẽ ra phải được gọi", fakeViewModel.loginCalled)
            // Kiểm tra xem nó có được gọi với đúng dữ liệu không
            assertEquals("user.test@example.com", fakeViewModel.lastEmailUsed)
            assertEquals("pass123", fakeViewModel.lastPasswordUsed)
        }
    }
}