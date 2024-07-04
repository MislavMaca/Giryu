#ifndef BLACKSMITH_HPP
#define BLACKSMITH_HPP

#include "Building.hpp"
#include "Troop.hpp"
#include "Barracks.hpp"
#include <string>
#include <vector>

class Barracks;

class Blacksmith : public Building
{
public:
    Blacksmith(int woodCost, int ironCost, int clayCost, int cropCost, Barracks &barracks);

    void upgradeTroopAttack(const std::string &troopType);

    std::vector<Troop *> &getTroops();

protected:
    Barracks &barracks;
};

#endif
