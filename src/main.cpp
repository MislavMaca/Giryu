#include <iostream>
#include <vector>
#include <string>
#include "Models/Troop.hpp"
#include "Models/Archer.hpp"
#include "Models/Barracks.hpp"
#include "Models/Blacksmith.hpp"
#include "Models/Swordsman.hpp"
#include "Models/Giryu.hpp"

int main()
{
    GiryuGame game;

    while (true)
    {
        std::string action;
        std::cout << "Welcome to Giryu" << std::endl;
        std::cout << "Choose your action by typing" << std::endl;
        std::cout << "1. Start" << std::endl;
        std::cout << "2. Showcase" << std::endl;
        std::cout << "3. Exit" << std::endl;

        std::cin >> action;
        game.handleAction(action);
    }

    return 0;
}
