#include "GameScreen.h"

GameScreen::GameScreen() {
    // Initialize UI components and connect signals
    player1NameLabel = gtk_label_new("");
    player2NameLabel = gtk_label_new("");
    player1ScoreLabel = gtk_label_new("");
    player2ScoreLabel = gtk_label_new("");
    resultLabel = gtk_label_new("");
    rockButton = gtk_button_new_with_label("Rock");
    paperButton = gtk_button_new_with_label("Paper");
    scissorsButton = gtk_button_new_with_label("Scissors");

    g_signal_connect(rockButton, "clicked", G_CALLBACK(onRockButtonClicked), this);
    g_signal_connect(paperButton, "clicked", G_CALLBACK(onPaperButtonClicked), this);
    g_signal_connect(scissorsButton, "clicked", G_CALLBACK(onScissorsButtonClicked), this);
}

GameScreen::~GameScreen() {
    // Clean up resources...
}

void GameScreen::Initialize(GtkBox* parent) {
    // Add UI components to the parent (e.g., vbox in GameWindow)
    // Implement the layout of your game screen
    // Add labels, buttons, and other UI elements
}

void GameScreen::UpdateGameUI(const std::string& player1Name, const std::string& player2Name,
    int player1Score, int player2Score, const std::string& result) {
    // Update labels and other UI elements based on the game state
    // Update player names, scores, and result label
}

void GameScreen::onRockButtonClicked(GtkButton* button, gpointer user_data) {
    GameScreen* gameScreen = static_cast<GameScreen*>(user_data);
    // Handle Rock button click event (e.g., process the player's choice)
}

// Implement similar methods for paper and scissors button clicks
