#ifndef TROOP_HPP
#define TROOP_HPP

#include <string>

class Troop {
public:
    // Constructors
    Troop(); // Default constructor
    Troop(int woodCost, int ironCost, int clayCost, int cropCost, int attack, int defense, const std::string& troopType);

    // Pure virtual destructor
    virtual ~Troop() = 0;

    // Getter methods
    int getWoodCost() const;
    int getIronCost() const;
    int getClayCost() const;
    int getCropCost() const;
    int getAttack() const;
    int getDefense() const;
    int getCarryCapacity() const;
    int getUpkeep() const;
    int getAttackLevel() const; // Getter for attack level
    int getDefenseLevel() const; // Getter for defense level
    const std::string& getTroopType() const; // Getter for troop type

    // Setter methods
    void setWoodCost(int woodCost);
    void setIronCost(int ironCost);
    void setClayCost(int clayCost);
    void setCropCost(int cropCost);
    void setAttack(int attack);
    void setDefense(int defense);
    void setCarryCapacity(int carryCapacity);
    void setUpkeep(int upkeep);
    void setAttackLevel(int attackLevel); // Setter for attack level
    void setDefenseLevel(int defenseLevel); // Setter for defense level
    void setTroopType(const std::string& troopType); // Setter for troop type

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
    std::string troopType; // Type of troop
};

#endif // TROOP_HPP
