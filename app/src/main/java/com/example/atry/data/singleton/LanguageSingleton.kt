package com.example.atry.data.singleton

import android.content.Context
import androidx.compose.runtime.mutableStateOf
import java.util.*

object LanguageSingleton {
    // true = English, false = Vietnamese
    val isEnglish = mutableStateOf(false)

    fun toggle() {
        isEnglish.value = !isEnglish.value
    }

    fun currentLocale(): Locale {
        return if (isEnglish.value) Locale("en") else Locale("vi")
    }

    fun updateLocale(context: Context) {
        val locale = currentLocale()
        val config = context.resources.configuration
        config.setLocale(locale)
        context.resources.updateConfiguration(config, context.resources.displayMetrics)
    }
}
