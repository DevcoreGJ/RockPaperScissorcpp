#include "GameWindow.h"

GameWindow::GameWindow() {
    // Initialize the central widget
    centralWidget = new QWidget();

    // Create and set up the menu bar
    menuBar.initializeMenu();
    menuBar.connectActions();

    // Initialize the game screen and options screen
    gameScreen.InitializeUI();
    optionsScreen.initializeUI();

    // Set up layout for central widget (you may customize this as needed)
    QVBoxLayout* layout = new QVBoxLayout();
    centralWidget->setLayout(layout);
    layout->addWidget(gameScreen.getWidget());
    layout->addWidget(optionsScreen.getWidget());

    // Show the main menu initially
    showMainMenu();
}

GameWindow::~GameWindow() {
    // Clean up resources
    delete centralWidget;
}

void GameWindow::showMainMenu() {
    // Hide the game and options screens
    gameScreen.getWidget()->hide();
    optionsScreen.getWidget()->hide();

    // Display the main menu by showing/hiding appropriate widgets
    // You should implement your main menu logic here
}

void GameWindow::showOptions() {
    // Hide the game screen and show the options screen
    gameScreen.getWidget()->hide();
    optionsScreen.getWidget()->show();
}

void GameWindow::showGameScreen() {
    // Hide the options screen and show the game screen
    optionsScreen.getWidget()->hide();
    gameScreen.getWidget()->show();
}

void GameWindow::updateGameScreen() {
    // Update the game screen with the current game state
    gameScreen.updateGameUI();
}
