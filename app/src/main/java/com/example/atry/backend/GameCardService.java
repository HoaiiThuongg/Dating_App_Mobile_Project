package com.example.atry.backend;

import android.util.Log;
import com.google.firebase.firestore.CollectionReference;
import com.google.firebase.firestore.DocumentChange;
import com.google.firebase.firestore.DocumentReference;
import com.google.firebase.firestore.DocumentSnapshot;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.ListenerRegistration;
import com.google.firebase.firestore.Query;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;

public class GameCardService {
    private final FirebaseFirestore db = FirebaseFirestore.getInstance();

    private CollectionReference getGameCardsRef(String matchId) {
        return db.collection("matches")
                .document(matchId)
                .collection("gameCards");
    }

    public void getGameCards(String matchId, LoadGameCardsCallback callback) {
        getGameCardsRef(matchId)
                .orderBy("timestamp", Query.Direction.ASCENDING)
                .get()
                .addOnSuccessListener(querySnapshot -> {
                    List<GameCard> cards = new ArrayList<>();
                    for (DocumentSnapshot doc : querySnapshot.getDocuments()) {
                        GameCard card = doc.toObject(GameCard.class);
                        if (card != null) {
                            card.setId(doc.getId());
                            cards.add(card);
                        }
                    }
                    callback.onSuccess(cards);
                })
                .addOnFailureListener(callback::onError);
    }

    public void createGameCard(String matchId, GameCard card, CreateGameCardCallback callback) {
        String id = UUID.randomUUID().toString();
        card.setId(id);

        getGameCardsRef(matchId)
                .document(id)
                .set(card)
                .addOnSuccessListener(aVoid -> callback.onSuccess(card))
                .addOnFailureListener(callback::onError);
    }

    public void updateUserChoice(String matchId, String gameCardId, String userId, int choice) {
        DocumentReference cardRef = getGameCardsRef(matchId).document(gameCardId);

        String fieldChosen = (choice == 1) ? "pickedByAns1" : "pickedByAns2";
        String fieldOther = (choice == 1) ? "pickedByAns2" : "pickedByAns1";

        cardRef.get().addOnSuccessListener(doc -> {
            if (!doc.exists()) return;

            List<String> chosenList = (List<String>) doc.get(fieldChosen);
            List<String> otherList = (List<String>) doc.get(fieldOther);

            if (chosenList == null) chosenList = new ArrayList<>();
            if (otherList == null) otherList = new ArrayList<>();

            // ✅ Nếu user đang ở field còn lại → xoá khỏi đó
            otherList.remove(userId);

            // ✅ Nếu chưa chọn thì add
            if (!chosenList.contains(userId)) {
                chosenList.add(userId);
            }

            Map<String, Object> updateData = new HashMap<>();
            updateData.put(fieldChosen, chosenList);
            updateData.put(fieldOther, otherList);

            cardRef.update(updateData)
                    .addOnSuccessListener(aVoid ->
                            Log.d("GameCardService", "Choice updated!")
                    )
                    .addOnFailureListener(e ->
                            Log.e("GameCardService", "Update failed", e)
                    );

        }).addOnFailureListener(e ->
                Log.e("GameCardService", "Get card failed", e)
        );
    }

    // trong GameCardService.java

    // listener interface


    // method listen realtime
    public ListenerRegistration listenGameCards(String matchId, GameCardListener listener) {
        return getGameCardsRef(matchId)
                .orderBy("timestamp", Query.Direction.ASCENDING)
                .addSnapshotListener((snapshots, e) -> {
                    if (snapshots == null) return;

                    for (DocumentChange dc : snapshots.getDocumentChanges()) {
                        GameCard card = dc.getDocument().toObject(GameCard.class);
                        card.setId(dc.getDocument().getId());

                        switch (dc.getType()) {
                            case ADDED:
                                // add to UI
                                break;
                            case MODIFIED:
                                // update UI
                                break;
                            case REMOVED:
                                // remove from UI
                                break;
                        }
                    }
                });

    }


    // --- Callback interfaces ---
    public interface GameCardListener {
        void onChanged(List<GameCard> updatedCards);
    }

    public interface LoadGameCardsCallback {
        void onSuccess(List<GameCard> gameCards);
        void onError(Exception e);
    }

    public interface CreateGameCardCallback {
        void onSuccess(GameCard card);
        void onError(Exception e);
    }
}
