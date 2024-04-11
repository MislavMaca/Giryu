#include <iostream>
#include <vector>
#include "Models/Troop.hpp"
#include "Models/Archer.hpp"
#include "Models/Barracks.hpp"
#include "Models/Blacksmith.hpp"
#include "Models/Swordsman.hpp"

int main()
{
    // Create a Barracks
    Barracks barracks(20, 15, 12, 5);

    // Create 30 Archers and recruit them into the Barracks
    for (int i = 0; i < 30; ++i) {
        barracks.recruitTroop(new Archer);
    }

    // Create 100 Swordsmen and recruit them into the Barracks
    for (int i = 0; i < 100; ++i) {
        barracks.recruitTroop(new Swordsman);
    }

    // Create a Blacksmith
    Blacksmith blacksmith(30, 25, 20, 15, barracks);

    // Upgrade the attack of the Archer troops using the Blacksmith
    blacksmith.upgradeTroopAttack("Archer");

    // Print the stats of all Archers after the upgrade
    const std::vector<Troop*>& troops = barracks.getTroops();
    for (Troop* troop : troops) {
        if (dynamic_cast<Archer*>(troop)) {
            Archer* archer = dynamic_cast<Archer*>(troop);
            std::cout << "Archer stats after upgrade:" << std::endl;
            std::cout << "Attack: " << archer->getAttack() << std::endl;
            std::cout << "Defense: " << archer->getDefense() << std::endl;
            std::cout << "AttackLevel: " << archer->getAttackLevel() << std::endl;
        }
    }

    // Clean up memory in the Barracks destructor

    return 0;
}
