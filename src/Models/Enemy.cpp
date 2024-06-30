#include "Enemy.hpp"

// Constructor
Enemy::Enemy(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string& troopType)
    : Troop(woodCost, ironCost, clayCost, cropCost, attack, defense, troopType) {}

// Destructor
Enemy::~Enemy() {}
