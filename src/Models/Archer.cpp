#include "Archer.hpp"

// Default constructor
Archer::Archer()
    : Troop(10, 5, 5, 5, 20, 10, "Archer") {}

// Parameterized constructor
Archer::Archer(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string& troopType)
    : Troop(woodCost, ironCost, clayCost, cropCost, attack, defense, troopType) {}

// Destructor
Archer::~Archer() {}
