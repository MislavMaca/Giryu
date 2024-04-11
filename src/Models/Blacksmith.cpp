#include "Barracks.hpp"
#include "Blacksmith.hpp"


Blacksmith::Blacksmith(int woodCost, int ironCost, int clayCost, int cropCost, Barracks &barracks)
    : Building(woodCost, ironCost, clayCost, cropCost), barracks(barracks) {}

void Blacksmith::upgradeTroopAttack(const std::string &troopType)
{
    // Find the troop type in the barracks vector
    for (auto &troop : barracks.troops)
    { // Access troops vector from Barracks reference
        if (troop->getTroopType() == troopType)
        {
            // Increment the attack level
            int currentAttackLevel = troop->getAttackLevel();
            troop->setAttackLevel(currentAttackLevel + 1);

            // Increment the attack stat by 1 for each level
            int newAttack = troop->getAttack() + 1;
            troop->setAttack(newAttack);

            std::cout << "Troop type upgraded: " << troopType << std::endl;
            return;
        }
    }
    std::cout << "Troop type not found in barracks" << std::endl;
}
