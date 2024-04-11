#ifndef BUILDING_HPP
#define BUILDING_HPP

class Building
{
public:
    Building(int woodCost, int ironCost, int clayCost, int cropCost);

    // Getter methods
    int getWoodCost() const;
    int getIronCost() const;
    int getClayCost() const;
    int getCropCost() const;

    // Setter methods
    void setWoodCost(int woodCost);
    void setIronCost(int ironCost);
    void setClayCost(int clayCost);
    void setCropCost(int cropCost);

private:
    int woodCost;
    int ironCost;
    int clayCost;
    int cropCost;
};

#endif // BUILDING_HPP
