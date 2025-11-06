package com.example.atry.viewmodel.functional

import com.example.atry.backend.GameCard
import com.example.atry.backend.Message
import org.junit.Assert.*
import org.junit.Test
import java.util.Date

class ChatItemTest {

    @Test
    fun `MessageItem contains message correctly`() {
        val message = Message()
        message.messageId = "msg1"
        message.content = "Hello"
        message.timestamp = Date()
        val messageItem = ChatItem.MessageItem(message)

        assertTrue("Should be MessageItem", messageItem is ChatItem.MessageItem)
        assertEquals("Should contain correct message", message, (messageItem as ChatItem.MessageItem).message)
    }

    @Test
    fun `GameCardItem contains game card correctly`() {
        val gameCard = GameCard()
        gameCard.id = "card1"
        gameCard.timestamp = Date()
        val gameCardItem = ChatItem.GameCardItem(gameCard)

        assertTrue("Should be GameCardItem", gameCardItem is ChatItem.GameCardItem)
        assertEquals("Should contain correct game card", gameCard, (gameCardItem as ChatItem.GameCardItem).card)
    }

    @Test
    fun `MessageItem and GameCardItem are different types`() {
        val message = Message()
        message.messageId = "msg1"
        message.content = "Test"
        val gameCard = GameCard()
        gameCard.id = "card1"

        val messageItem = ChatItem.MessageItem(message)
        val gameCardItem = ChatItem.GameCardItem(gameCard)

        assertTrue("MessageItem should be MessageItem type", messageItem is ChatItem.MessageItem)
        assertTrue("GameCardItem should be GameCardItem type", gameCardItem is ChatItem.GameCardItem)
        assertFalse("MessageItem should not be GameCardItem", messageItem is ChatItem.GameCardItem)
        assertFalse("GameCardItem should not be MessageItem", gameCardItem is ChatItem.MessageItem)
    }
}

