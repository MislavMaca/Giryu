#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Troop.hpp"

class Enemy : public Troop
{
public:
    Enemy(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string &troopType);

    virtual ~Enemy();
};

#endif
