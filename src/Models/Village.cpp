#include "Village.hpp"
#include "Building.hpp"

Village::Village() {}

void Village::addBuilding(Building *building)
{
    buildings.push_back(building);
}

void Village::removeBuilding(int index)
{
    if (index >= 0 && index < buildings.size())
    {
        delete buildings[index];
        buildings.erase(buildings.begin() + index);
    }
}

int Village::getNumBuildings() const
{
    return buildings.size();
}

const Building *Village::getBuilding(int index) const
{
    if (index >= 0 && index < buildings.size())
    {
        return buildings[index];
    }
    return nullptr;
}

Barracks *Village::getBarracks() const
{
    for (Building *building : buildings)
    {
        Barracks *barracks = dynamic_cast<Barracks *>(building);
        if (barracks != nullptr)
        {
            return barracks;
        }
    }
    return nullptr;
}

Blacksmith *Village::getBlacksmith() const
{
    for (Building *building : buildings)
    {
        Blacksmith *blacksmith = dynamic_cast<Blacksmith *>(building);
        if (blacksmith != nullptr)
        {
            return blacksmith;
        }
    }
    return nullptr;
}
