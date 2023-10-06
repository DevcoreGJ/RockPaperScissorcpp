#pragma once

#include <gtk/gtk.h>

class MenuBar {
public:
    MenuBar();
    ~MenuBar();

    void Initialize(GtkBox* parent); // Initialize the menu bar

    // Getter for the Exit menu item
    GtkMenuItem* GetExitMenuItem() const;

private:
    GtkMenuBar* menuBar;
    GtkMenuItem* exitMenuItem;

    // Other menu items and callbacks can be added here
};