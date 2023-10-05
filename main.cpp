#include <iostream>
#include <string>
#include "CPlayer_AI.h"

CPlayer_AI aiplayerclass(0, "ai");

int main()
{
    std::cout << "welcome to the rock paper scissors game!!!" << std::endl;
    std::cout << "choose from the menu options: start, options, exit" << std::endl;

    std::string userResponse;
    std::cin >> userResponse;



    //playing the game
    //srand(time(0));
    //aiplayerclass.SetChoice();
    //switch (aiplayerclass.GetChoice())
    //{
    //    case choice::rock:
    //    {
    //        std::cout << "rock";
    //        break;
    //    }
    //    case choice::paper:
    //    {
    //        std::cout << "paper";
    //        break;
    //    }
    //    case choice::scissors:
    //    {
    //        std::cout << "scissors";
    //        break;
    //    }
    //    default:
    //    {
    //        std::cout << "Default";
    //    }
    //}
}