#ifndef SWORDSMAN_HPP
#define SWORDSMAN_HPP

#include "Troop.hpp"

class Swordsman : public Troop
{
public:
    Swordsman();

    Swordsman(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string &troopType);

    virtual ~Swordsman();
};

#endif
