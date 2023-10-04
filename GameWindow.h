#pragma once

#include "MenuBar.h"
#include "GameScreen.h"
#include "OptionsScreen.h"

class GameWindow {
public:
    GameWindow();
    ~GameWindow();

    void run(); // Main application loop

private:
    // Properties
    MenuBar menuBar;
    QWidget* centralWidget;
    GameScreen gameScreen;
    OptionsScreen optionsScreen;

    // Methods
    void initializeUI();
    void connectSignals();
    void showMainMenu();
    void showOptions();
    void showGameScreen();
    void updateGameScreen();
};
