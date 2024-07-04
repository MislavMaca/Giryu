#ifndef BUILDING_HPP
#define BUILDING_HPP

class Building
{
public:
    Building(int woodCost, int ironCost, int clayCost, int cropCost);

    int getWoodCost() const;
    int getIronCost() const;
    int getClayCost() const;
    int getCropCost() const;

    void setWoodCost(int woodCost);
    void setIronCost(int ironCost);
    void setClayCost(int clayCost);
    void setCropCost(int cropCost);

    virtual ~Building() {}

private:
    int woodCost;
    int ironCost;
    int clayCost;
    int cropCost;
};

#endif
