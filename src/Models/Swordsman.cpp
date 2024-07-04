#include "Swordsman.hpp"

Swordsman::Swordsman()
    : Troop(15, 10, 5, 5, 25, 15, "Swordsman") {}

Swordsman::Swordsman(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string &troopType)
    : Troop(woodCost, ironCost, clayCost, cropCost, attack, defense, troopType) {}

Swordsman::~Swordsman() {}
