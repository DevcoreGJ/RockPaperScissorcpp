#pragma once

#include <gtk/gtk.h>

class OptionsScreen {
public:
    OptionsScreen();
    ~OptionsScreen();

        void Initialize(GtkBox* parent); // Initialize the options screen

priv    ate:
        // Define UI components such as player name input fields and save button
    GtkWidget* player1NameEntry;
    GtkWidget* player2NameEntry;
    GtkWidget* saveButton;

    // Define callback functions for button clicks or other events
    static void onSaveButtonClicked(GtkButton* button, gpointer user_data);
};
