#include "CMenu.h"
#include <iostream>

void CMenu::SetMenuChoice(menuOptions _choice)
{
    menuChoice = _choice;
    RunChoices(menuChoice);
}

void CMenu::RunChoices(menuOptions choice)
{
    switch (choice)
    {
    case menuOptions::start:
        std::cout << "Start";
    case menuOptions::options:
        std::cout << "Options";
    case menuOptions::exit:
        exit(0);
    }
}
