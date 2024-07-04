#include <iostream>
#include <vector>
#include <string>
#include "Models/Giryu.hpp"

int main()
{
    GiryuGame game;

    game.initialize();

    while (true)
    {
        std::string action;

        std::cin >> action;

        try
        {
            game.handleAction(action);
        }
        catch (InvalidActionException &e)
        {
            std::cerr << "Invalid action: " << e.what() << std::endl;
        }

        if (game.getCurrentState() == "Exiting")
        {
            break;
        }
    }

    return 0;
}
