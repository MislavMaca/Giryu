#ifndef BARRACKS_HPP
#define BARRACKS_HPP

#include <vector>
#include "Building.hpp"
#include <iostream>

class Troop;

class Barracks : public Building
{
public:
    // Constructor
    Barracks(int woodCost, int ironCost, int clayCost, int cropCost);

    // Method to recruit troops
    void recruitTroop(Troop* troop);

protected:
    std::vector<Troop*> troops;
};

#endif // BARRACKS_HPP
