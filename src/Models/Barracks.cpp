#include "Barracks.hpp"

Barracks::Barracks(int woodCost, int ironCost, int clayCost, int cropCost)
    : Building(woodCost, ironCost, clayCost, cropCost) {}

Barracks::~Barracks() {
    // Clean up memory for troops
    for (Troop* troop : troops) {
        delete troop;
    }
    troops.clear();
}

void Barracks::recruitTroop(Troop* troop) {
    troops.push_back(troop);
}

std::vector<Troop*>& Barracks::getTroops() {
    return troops;
}
