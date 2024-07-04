#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include <vector>
#include "Building.hpp"
#include "Barracks.hpp"
#include "Blacksmith.hpp"

class Village
{
public:
    Village();

    void addBuilding(Building *building);
    void removeBuilding(int index);
    int getNumBuildings() const;
    const Building *getBuilding(int index) const;

    Barracks *getBarracks() const;
    Blacksmith *getBlacksmith() const;

private:
    std::vector<Building *> buildings;
};

#endif
