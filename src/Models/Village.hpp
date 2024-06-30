#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include <vector>
#include "Building.hpp" // Include necessary headers for Building class

class Village
{
public:
    // Constructor
    Village();

    // Methods
    void addBuilding(Building *building);
    void removeBuilding(int index);
    int getNumBuildings() const;
    const Building *getBuilding(int index) const;

private:
    std::vector<Building *> buildings;
};

#endif // VILLAGE_HPP
