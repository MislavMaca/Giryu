#include "Village.hpp"
#include "Building.hpp"

// Constructor
Village::Village() {}

// Method to add a building to the village
void Village::addBuilding(Building* building) {
    buildings.push_back(building);
}

// Method to remove a building from the village
void Village::removeBuilding(int index) {
    if (index >= 0 && index < buildings.size()) {
        delete buildings[index]; // Free the memory allocated for the building
        buildings.erase(buildings.begin() + index);
    }
}

// Method to get the number of buildings in the village
int Village::getNumBuildings() const {
    return buildings.size();
}

// Method to get a building at a specific index
const Building* Village::getBuilding(int index) const {
    if (index >= 0 && index < buildings.size()) {
        return buildings[index];
    }
    return nullptr; // Return nullptr if index is out of bounds
}
