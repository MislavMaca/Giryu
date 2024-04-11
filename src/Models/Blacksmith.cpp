#include "Blacksmith.hpp"
#include "Barracks.hpp" // Include Barracks header to access its methods

Blacksmith::Blacksmith(int woodCost, int ironCost, int clayCost, int cropCost, Barracks& barracks)
    : Building(woodCost, ironCost, clayCost, cropCost), barracks(barracks) {}

void Blacksmith::upgradeTroopAttack(const std::string& troopType)
{
    // Get troops vector from Barracks
    std::vector<Troop*>& troops = barracks.getTroops();

    // Loop through troops and upgrade attack of troops of the specified type
    for (Troop* troop : troops)
    {
        if (troop->getTroopType() == troopType)
        {
            // Increase attack
            int newAttack = troop->getAttack() + 2; // Assuming a fixed increase of 5
            troop->setAttack(newAttack);

            int newAttackLevel =troop->getAttackLevel() + 1;
            troop->setAttackLevel(newAttackLevel);
        }
    }
}

std::vector<Troop*>& Blacksmith::getTroops()
{
    // Delegate to Barracks' getTroops method
    return barracks.getTroops();
}
