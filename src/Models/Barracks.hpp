#ifndef BARRACKS_HPP
#define BARRACKS_HPP

#include <vector>
#include "Building.hpp"
#include "Troop.hpp"

class Barracks : public Building
{
public:
    // Constructor
    Barracks(int woodCost, int ironCost, int clayCost, int cropCost);

    // Destructor
    ~Barracks();

    // Method to recruit troops
    void recruitTroop(Troop *troop);

    // Method to get troops vector
    std::vector<Troop *> &getTroops();

private:
    std::vector<Troop *> troops;
};

#endif // BARRACKS_HPP
