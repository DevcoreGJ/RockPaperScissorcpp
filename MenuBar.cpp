#include "MenuBar.h"

MenuBar::MenuBar() {
    // Initialize menuBar and create menu items as needed
    menuBar = GTK_MENU_BAR(gtk_menu_bar_new());

    // Create menu items, e.g., Start, Options, Exit
    exitMenuItem = GTK_MENU_ITEM(gtk_menu_item_new_with_label("Exit"));
    // Add other menu items and connect their signals as needed
}

MenuBar::~MenuBar() {
    // Clean up resources...
}

void MenuBar::Initialize(GtkBox* parent) {
    // Add the menuBar to the parent (e.g., vbox in GameWindow)
    gtk_box_pack_start(parent, GTK_WIDGET(menuBar), FALSE, FALSE, 0);

    // Add menu items to the menuBar
    gtk_menu_shell_append(GTK_MENU_SHELL(menuBar), GTK_WIDGET(exitMenuItem));
    // Add other menu items here
}

GtkMenuItem* MenuBar::GetExitMenuItem() const {
    return exitMenuItem;
}
