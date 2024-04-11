#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Troop.hpp"

class Archer : public Troop {
public:
    // Constructors
    Archer();
    Archer(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense);

    // Destructor
    ~Archer();

    // Additional methods specific to Archer class
    void specialAbility(); // Example of a special ability for archers
};

#endif // ARCHER_HPP
