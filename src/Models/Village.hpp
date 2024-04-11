#include <vector>

class Building;

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
