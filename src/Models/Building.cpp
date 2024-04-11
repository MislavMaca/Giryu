#include "Building.hpp"

// Constructor
Building::Building(int woodCost, int ironCost, int clayCost, int cropCost)
    : woodCost(woodCost), ironCost(ironCost), clayCost(clayCost), cropCost(cropCost) {}

// Getter methods
int Building::getWoodCost() const {
    return woodCost;
}

int Building::getIronCost() const {
    return ironCost;
}

int Building::getClayCost() const {
    return clayCost;
}

int Building::getCropCost() const {
    return cropCost;
}

// Setter methods
void Building::setWoodCost(int woodCost) {
    this->woodCost = woodCost;
}

void Building::setIronCost(int ironCost) {
    this->ironCost = ironCost;
}

void Building::setClayCost(int clayCost) {
    this->clayCost = clayCost;
}

void Building::setCropCost(int cropCost) {
    this->cropCost = cropCost;
}
