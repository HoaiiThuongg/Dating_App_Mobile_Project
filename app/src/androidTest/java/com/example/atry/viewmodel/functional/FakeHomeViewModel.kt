package com.example.atry.viewmodel.functional

import com.example.atry.backend.User

class FakeHomeViewModel(
    initialLoading: Boolean = false,
    initialUsers: List<User> = emptyList()
) : HomeViewModel() {
    init {
        setLoading(initialLoading)
        if (initialUsers.isNotEmpty()) {
            users.addAll(initialUsers)
        }
    }

    override fun loadMoreUsers(limit: Int) {
    }
}
