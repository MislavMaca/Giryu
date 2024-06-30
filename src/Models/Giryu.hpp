#ifndef GIRYU_HPP
#define GIRYU_HPP

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include "DataProcessor.hpp"
#include "InvalidActionException.hpp"
#include "Village.hpp"

class GiryuGame {
public:
    GiryuGame(); // Constructor to initialize game state
    void initialize();
    void start();
    void showcase();
    void exit();
    void handleAction(const std::string& action);
    void invalid();
    std::string getCurrentState() const; // Getter for current game state

    Village& getVillage() { return myVillage; }

private:
    enum class GameState {
        MainMenu,
        Running,
        Showcase,
        Exiting
    };

    GameState currentState; // Current state of the game

    template <typename T>
    T processData(const std::vector<T>& data);

    template <typename T1, typename T2>
    void displayPair(const T1& first, const T2& second);

    void showMainMenu();
    void showRunningMenu();

    // Village instance
    Village myVillage;
};

#endif // GIRYU_HPP
