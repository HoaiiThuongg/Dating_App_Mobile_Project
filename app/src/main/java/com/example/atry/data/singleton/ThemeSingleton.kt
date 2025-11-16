package com.example.atry.data.singleton

import android.content.Context
import androidx.compose.runtime.State
import androidx.compose.runtime.mutableStateOf
import androidx.datastore.preferences.core.booleanPreferencesKey
import androidx.datastore.preferences.core.edit
import androidx.datastore.preferences.preferencesDataStore
import kotlinx.coroutines.flow.first

val Context.dataStore by preferencesDataStore(name = "settings")

object ThemeSingleton {
    private var appContext: Context? = null // giữ context để toggle dùng được
    private var _isDark = mutableStateOf(false)
    val isDark: State<Boolean> get() = _isDark

    suspend fun load(context: Context) {
        appContext = context.applicationContext
        val key = booleanPreferencesKey("dark_mode")
        val prefs = context.dataStore.data.first()
        _isDark.value = prefs[key] ?: false
    }

    suspend fun toggle() {
        val ctx = appContext ?: return // nếu chưa load thì thôi
        val key = booleanPreferencesKey("dark_mode")
        val newValue = !_isDark.value

        ctx.dataStore.edit { prefs ->
            prefs[key] = newValue
        }
        _isDark.value = newValue
    }

    suspend fun turnOnDarkMode() {
        val ctx = appContext ?: return
        val key = booleanPreferencesKey("dark_mode")
        ctx.dataStore.edit { prefs ->
            prefs[key] = true
        }
        _isDark.value = true
    }

    suspend fun turnOffDarkMode() {
        val ctx = appContext ?: return
        val key = booleanPreferencesKey("dark_mode")
        ctx.dataStore.edit { prefs ->
            prefs[key] = false
        }
        _isDark.value = false
    }
}
