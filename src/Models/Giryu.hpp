#ifndef GIRYU_HPP
#define GIRYU_HPP

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <stdexcept>

#include "DataProcessor.hpp"
#include "InvalidActionException.hpp"
#include "Village.hpp"
#include "Building.hpp"
#include "Barracks.hpp"
#include "Blacksmith.hpp"
#include "Archer.hpp"
#include "Swordsman.hpp"
#include "Enemy.hpp"

class GiryuGame
{
public:
    GiryuGame();
    void initialize();
    void start();
    void showcase();
    void exit();
    void handleAction(const std::string &action);
    void invalid();
    void build();
    void upgradeBuilding();
    void trainTroop();
    void upgradeTroop();
    void fight();

    std::string getCurrentState() const;

    Village &getVillage() { return myVillage; }

private:
    enum class GameState
    {
        MainMenu,
        Running,
        Showcase,
        Build,
        UpgradeBuilding,
        TrainTroop,
        UpgradeTroop,
        Fight,
        Exiting
    };

    GameState currentState;

    template <typename T>
    T processData(const std::vector<T> &data);

    template <typename T1, typename T2>
    void displayPair(const T1 &first, const T2 &second);

    void showMainMenu();
    void showRunningMenu();
    void showBuildMenu();
    void showUpgradeBuildingMenu();
    void showTrainTroopMenu();
    void showUpgradeTroopMenu();
    void showFightMenu();
    void attackEnemy();

    double divide(double, double);
    int ageCheck(int);

    Village myVillage;
    Enemy *enemy;
};

#endif
