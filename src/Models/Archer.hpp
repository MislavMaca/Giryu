#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Troop.hpp"

class Archer : public Troop
{
public:
    Archer();
    Archer(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string &troopType);

    virtual ~Archer();
};

#endif
