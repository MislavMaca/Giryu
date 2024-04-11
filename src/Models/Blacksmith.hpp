#ifndef BLACKSMITH_HPP
#define BLACKSMITH_HPP

#include "Building.hpp"
#include "Troop.hpp"
#include <vector>
#include <string>
#include <iostream>

class Barracks; // Forward declaration of Barracks class

class Blacksmith : public Building {
public:
    // Constructor with a reference to Barracks
    Blacksmith(int woodCost, int ironCost, int clayCost, int cropCost, Barracks& barracks);

    // Method to upgrade the attack of troops of a certain type
    void upgradeTroopAttack(const std::string& troopType);

protected:
    Barracks& barracks; // Reference to Barracks
};

#endif // BLACKSMITH_HPP
