#ifndef TROOP_HPP
#define TROOP_HPP

#include <string>

class Troop
{
public:
    Troop();
    Troop(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string &troopType);

    virtual ~Troop() = 0;

    int getWoodCost() const;
    int getIronCost() const;
    int getClayCost() const;
    int getCropCost() const;
    int getAttack() const;
    int getDefense() const;
    int getCarryCapacity() const;
    int getUpkeep() const;
    int getAttackLevel() const;
    int getDefenseLevel() const;
    const std::string &getTroopType() const;

    void setWoodCost(int woodCost);
    void setIronCost(int ironCost);
    void setClayCost(int clayCost);
    void setCropCost(int cropCost);
    void setAttack(int attack);
    void setDefense(int defense);
    void setCarryCapacity(int carryCapacity);
    void setUpkeep(int upkeep);
    void setAttackLevel(int attackLevel);
    void setDefenseLevel(int defenseLevel);
    void setTroopType(const std::string &troopType);

protected:
    int woodCost;
    int ironCost;
    int clayCost;
    int cropCost;
    int attack;
    int defense;
    int carryCapacity;
    int upkeep;
    int attackLevel;
    int defenseLevel;
    std::string troopType;
};

#endif
