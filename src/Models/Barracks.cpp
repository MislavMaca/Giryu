#include "Barracks.hpp"

// Constructor
Barracks::Barracks(int woodCost, int ironCost, int clayCost, int cropCost)
    : Building(woodCost, ironCost, clayCost, cropCost) {}

// Method to recruit troops
void Barracks::recruitTroop(Troop* troop) {
    troops.push_back(troop);
    std::cout << "Added troop";
}
