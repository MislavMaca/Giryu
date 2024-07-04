#include "Blacksmith.hpp"
#include "Barracks.hpp"

Blacksmith::Blacksmith(int woodCost, int ironCost, int clayCost, int cropCost, Barracks &barracks)
    : Building(woodCost, ironCost, clayCost, cropCost), barracks(barracks) {}

void Blacksmith::upgradeTroopAttack(const std::string &troopType)
{
    std::vector<Troop *> &troops = barracks.getTroops();

    for (Troop *troop : troops)
    {
        if (troop->getTroopType() == troopType)
        {
            int newAttack = troop->getAttack() + 2;
            troop->setAttack(newAttack);

            int newAttackLevel = troop->getAttackLevel() + 1;
            troop->setAttackLevel(newAttackLevel);
        }
    }
}

std::vector<Troop *> &Blacksmith::getTroops()
{
    return barracks.getTroops();
}
