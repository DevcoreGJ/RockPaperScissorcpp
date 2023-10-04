#include "GameWindow.h"
#include <QVBoxLayout>

GameWindow::GameWindow() {
    // Initialize the central widget
    centralWidget = new QWidget();

    // Create and set up the menu bar
    menuBar.initializeMenu();
    menuBar.connectActions();

    // Initialize the game screen and options screen
    gameScreen.initializeUI();
    optionsScreen.initializeUI();

    // Set up layout for central widget
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

void GameWindow::run() {
    // Display the main menu initially
    showMainMenu();
}

void GameWindow::initializeUI() {
    // Additional UI initialization code can go here
}

void GameWindow::connectSignals() {
    // Connect signals to slots for user interactions
    optionsScreen.connectSignals();
    gameScreen.connectSignals();
}

void GameWindow::showMainMenu() {
    // Hide the game and options screens
    gameScreen.hide();
    optionsScreen.hide();

    // Display the main menu
    // Implement your main menu logic here
}

void GameWindow::showOptions() {
    // Hide the game screen and show the options screen
    gameScreen.hide();
    optionsScreen.show();
}

void GameWindow::showGameScreen() {
    // Hide the options screen and show the game screen
    optionsScreen.hide();
    gameScreen.show();
}

void GameWindow::updateGameScreen() {
    // Update the game screen with the current game state
    gameScreen.updateGameUI();
}
