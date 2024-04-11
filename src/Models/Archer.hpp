#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Troop.hpp"

class Archer : public Troop {
public:
    // Constructors
    Archer(); // Default constructor
    Archer(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string& troopType); // Parameterized constructor

    // Destructor
    virtual ~Archer();

};

#endif // ARCHER_HPP
