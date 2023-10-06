#include "OptionsScreen.h"

OptionsScreen::OptionsScreen() {
    // Initialize UI components and connect signals
    player1NameEntry = gtk_entry_new();
    player2NameEntry = gtk_entry_new();
    saveButton = gtk_button_new_with_label("Save");

    g_signal_connect(saveButton, "clicked", G_CALLBACK(onSaveButtonClicked), this);
}

OptionsScreen::~OptionsScreen() {
    // Clean up resources...
}

void OptionsScreen::Initialize(GtkBox* parent) {
    // Add UI components to the parent (e.g., vbox in GameWindow)
    gtk_box_pack_start(parent, player1NameEntry, FALSE, FALSE, 0);
    gtk_box_pack_start(parent, player2NameEntry, FALSE, FALSE, 0);
    gtk_box_pack_start(parent, saveButton, FALSE, FALSE, 0);
}

void OptionsScreen::onSaveButtonClicked(GtkButton* button, gpointer user_data) {
    OptionsScreen* optionsScreen = static_cast<OptionsScreen*>(user_data);
    // Handle save button click event (e.g., get player names and save)
}
