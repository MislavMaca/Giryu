#include <iostream>
#include <vector>
#include <string>
#include "Models/Troop.hpp"
#include "Models/Archer.hpp"
#include "Models/Barracks.hpp"
#include "Models/Blacksmith.hpp"
#include "Models/Swordsman.hpp"
#include "Models/Giryu.hpp"
#include "Models/Village.hpp"

int main() {
    GiryuGame game;

    // Start the game in the main menu
    game.initialize();



    while (true) {
        std::string action;

        std::cin >> action;

        try {
            game.handleAction(action); // Process user action
        } catch (InvalidActionException& e) {
            std::cerr << "Invalid action: " << e.what() << std::endl;
        }

        // Check if the game is exiting to break the loop
        if (game.getCurrentState() == "Exiting") {
            break;
        }
    }

    return 0;
}
