#include "Archer.hpp"

// Default constructor
Archer::Archer()
    : Troop() {}

// Constructor with parameters
Archer::Archer(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense)
    : Troop(woodCost, ironCost, clayCost, cropCost, attack, defense, "Archer") {}

// Destructor
Archer::~Archer() {}

// Example of a special ability for archers
void Archer::specialAbility() {
    // Add implementation for archer's special ability here
}
