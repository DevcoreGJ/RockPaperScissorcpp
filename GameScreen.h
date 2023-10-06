#pragma once

#include <gtk/gtk.h>

class GameScreen {
public:
    GameScreen();
    ~GameScreen();

    void Initialize(GtkBox* parent); // Initialize the game screen

    // Implement methods to update game UI based on game state
    void UpdateGameUI(const std::string& player1Name, const std::string& player2Name,
        int player1Score, int player2Score, const std::string& result);

private:
    // Define UI components such as labels, buttons, etc.
    GtkWidget* player1NameLabel;
    GtkWidget* player2NameLabel;
    GtkWidget* player1ScoreLabel;
    GtkWidget* player2ScoreLabel;
    GtkWidget* resultLabel;
    GtkWidget* rockButton;
    GtkWidget* paperButton;
    GtkWidget* scissorsButton;

    // Define callback functions for button clicks or other events
    static void onRockButtonClicked(GtkButton* button, gpointer user_data);
    static void onPaperButtonClicked(GtkButton* button, gpointer user_data);
    static void onScissorsButtonClicked(GtkButton* button, gpointer user_data);
};
