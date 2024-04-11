#include <iostream>
#include <vector>
#include "Models/Troop.hpp"
#include "Models/Archer.hpp"
#include "Models/Barracks.hpp"
#include "Models/Blacksmith.hpp"

int main()
{
    // Create an Archer troop
    Archer archer(10, 5, 3, 2, 15, 10);

    // Create a Barracks
    Barracks barracks(20, 15, 12, 5);

    // Recruit the Archer troop in the Barracks
    barracks.recruitTroop(&archer);

    // Create a Blacksmith
    Blacksmith blacksmith(30, 25, 20, 15);

    std::cout << "Archer stats before upgrade:" << std::endl;
    std::cout << "Attack: " << archer.getAttack() << std::endl;
    std::cout << "Defense: " << archer.getDefense() << std::endl;

    // Upgrade the attack of the Archer troop using the Blacksmith
    blacksmith.upgradeTroopAttack("Archer");

    // Print the stats of the Archer troop after the upgrade
    std::cout << "Archer stats after upgrade:" << std::endl;
    std::cout << "Attack: " << archer.getAttack() << std::endl;
    std::cout << "Defense: " << archer.getDefense() << std::endl;

    return 0;
}
