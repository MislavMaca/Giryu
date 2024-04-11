#ifndef SWORDSMAN_HPP
#define SWORDSMAN_HPP

#include "Troop.hpp"

class Swordsman : public Troop {
public:
    // Constructors
    Swordsman(); // Default constructor
    Swordsman(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string& troopType); // Parameterized constructor

    // Destructor
    virtual ~Swordsman();
};

#endif // SWORDSMAN_HPP
