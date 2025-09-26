package com.example.atry.ui.components.general

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.compose.foundation.lazy.items
import androidx.compose.ui.Alignment

@Composable
fun ListPresentBox(
    items: List<String>, // ví dụ list String, bé có thể thay bằng bất kỳ Composable nào
    itemContent: @Composable (String) -> Unit
) {

    LazyColumn() {
        items(items.chunked(3)) { rowItems -> // 3 item mỗi hàng (bé chỉnh số khác cũng được)
            Row(
                horizontalArrangement = Arrangement.SpaceBetween,
            ) {
                rowItems.forEach { item ->
                    itemContent(item)
                }
            }
        }
    }
}
