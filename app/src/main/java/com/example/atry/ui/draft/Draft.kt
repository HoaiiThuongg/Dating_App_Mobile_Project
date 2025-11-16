//import android.net.Uri
//import androidx.activity.compose.rememberLauncherForActivityResult
//import androidx.activity.result.contract.ActivityResultContracts
//import androidx.compose.foundation.Image
//import androidx.compose.foundation.background
//import androidx.compose.foundation.border
//import androidx.compose.foundation.layout.*
//import androidx.compose.foundation.layout.Arrangement
//import androidx.compose.foundation.shape.RoundedCornerShape
//import androidx.compose.material3.Button
//import androidx.compose.material3.MaterialTheme
//import androidx.compose.material3.Text
//import androidx.compose.runtime.*
//import androidx.compose.ui.Alignment
//import androidx.compose.ui.Modifier
//import androidx.compose.ui.draw.clip
//import androidx.compose.ui.graphics.Color
//import androidx.compose.ui.layout.ContentScale
//import androidx.compose.ui.tooling.preview.Preview
//
//import androidx.compose.ui.unit.dp
//import androidx.compose.ui.unit.sp
//import androidx.lifecycle.viewmodel.compose.viewModel
//import coil.compose.rememberAsyncImagePainter
//import com.example.atry.viewmodel.functional.IcebreakerViewModel
//
//
//@Composable
//@Preview
//fun IcebreakerSection(
//    commonInterests: String="Hà Nội",
//    viewModel: IcebreakerViewModel = viewModel()
//) {
//    val questions by viewModel.icebreakers.collectAsState()
//    val loading by viewModel.isLoading.collectAsState()
//
//    Column(
//        Modifier
//            .padding(16.dp)
//            .fillMaxSize(),
//        horizontalAlignment = Alignment.CenterHorizontally,
//        verticalArrangement = Arrangement.Center
//    ) {
//        Button(
//            onClick = { viewModel.fetchIcebreakers(commonInterests) },
//            enabled = !loading,
//            modifier = Modifier.fillMaxWidth()
//        ) {
//            Text(if (loading) "Đang suy nghĩ..." else "Gợi ý 3 Câu Hỏi Mở Đầu")
//        }
//
//        Spacer(Modifier.height(8.dp))
//
//        if (questions.isNotEmpty()) {
//            Column(
//                Modifier
//                    .background(Color(0xFFE0F7FA), RoundedCornerShape(8.dp))
//                    .padding(12.dp)
//            ) {
//                questions.forEachIndexed { index, question ->
//                    Text(
//                        text = "${index + 1}. $question",
//                        style = MaterialTheme.typography.bodySmall,
//                        modifier = Modifier.padding(vertical = 4.dp)
//                    )
//                }
//            }
//        } else {
//            Text("no quest")
//        }
//    }
//}
//
