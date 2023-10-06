#pragma once

#include "MenuBar.h"
#include "GameScreen.h"
#include "OptionsScreen.h"

class GameWindow {
public:
    GameWindow();
    ~GameWindow();

    // Methods
    void showMainMenu();
    void showOptions();
    void showGameScreen();
    void updateGameScreen();

private:
    // Properties
    MenuBar menuBar;
    QWidget* centralWidget;
    GameScreen gameScreen;
    OptionsScreen optionsScreen;
};

