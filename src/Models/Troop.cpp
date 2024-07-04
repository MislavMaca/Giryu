#include "Troop.hpp"

Troop::Troop()
    : woodCost(0), ironCost(0), clayCost(0), cropCost(0), attack(0), defense(0),
      carryCapacity(0), upkeep(0), attackLevel(0), defenseLevel(0) {}

Troop::Troop(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string &troopType)
    : woodCost(woodCost), ironCost(ironCost), clayCost(clayCost), cropCost(cropCost),
      attack(attack), defense(defense), carryCapacity(0), upkeep(0), attackLevel(0), defenseLevel(0), troopType(troopType) {}

Troop::~Troop() {}

int Troop::getWoodCost() const
{
    return woodCost;
}

int Troop::getIronCost() const
{
    return ironCost;
}

int Troop::getClayCost() const
{
    return clayCost;
}

int Troop::getCropCost() const
{
    return cropCost;
}

int Troop::getAttack() const
{
    return attack;
}

int Troop::getDefense() const
{
    return defense;
}

int Troop::getCarryCapacity() const
{
    return carryCapacity;
}

int Troop::getUpkeep() const
{
    return upkeep;
}

int Troop::getAttackLevel() const
{
    return attackLevel;
}

int Troop::getDefenseLevel() const
{
    return defenseLevel;
}

const std::string &Troop::getTroopType() const
{
    return troopType;
}

void Troop::setWoodCost(int woodCost)
{
    this->woodCost = woodCost;
}

void Troop::setIronCost(int ironCost)
{
    this->ironCost = ironCost;
}

void Troop::setClayCost(int clayCost)
{
    this->clayCost = clayCost;
}

void Troop::setCropCost(int cropCost)
{
    this->cropCost = cropCost;
}

void Troop::setAttack(int attack)
{
    this->attack = attack;
}

void Troop::setDefense(int defense)
{
    this->defense = defense;
}

void Troop::setCarryCapacity(int carryCapacity)
{
    this->carryCapacity = carryCapacity;
}

void Troop::setUpkeep(int upkeep)
{
    this->upkeep = upkeep;
}

void Troop::setAttackLevel(int attackLevel)
{
    this->attackLevel = attackLevel;
}

void Troop::setDefenseLevel(int defenseLevel)
{
    this->defenseLevel = defenseLevel;
}

void Troop::setTroopType(const std::string &troopType)
{
    this->troopType = troopType;
}
