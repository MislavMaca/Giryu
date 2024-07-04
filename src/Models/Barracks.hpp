#ifndef BARRACKS_HPP
#define BARRACKS_HPP

#include <vector>
#include "Building.hpp"
#include "Troop.hpp"

class Barracks : public Building
{
public:
    Barracks(int woodCost, int ironCost, int clayCost, int cropCost);

    ~Barracks();

    void recruitTroop(Troop *troop);

    std::vector<Troop *> &getTroops();

private:
    std::vector<Troop *> troops;
};

#endif
