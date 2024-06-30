#ifndef GIRYU_HPP
#define GIRYU_HPP

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <numeric>
#include "DataProcessor.hpp"
#include "InvalidActionException.hpp"
#include "Village.hpp"

class GiryuGame {
public:
    void start();
    void showcase();
    void exit();
    void handleAction(const std::string& action);
    void invalid();

private:
    enum class ActionType {
        Start,
        Exit,
        Showcase,
        BuildBarracks,
        ManageBuildings,
        Invalid
    };

    std::map<std::string, ActionType> actionMap = {
        {"Start", ActionType::Start},
        {"1", ActionType::Start},
        {"Showcase", ActionType::Showcase},
        {"2", ActionType::Showcase},
        {"Exit", ActionType::Exit},
        {"3", ActionType::Exit}
    };

    ActionType getActionType(const std::string& action);

    template <typename T>
    T processData(const std::vector<T>& data);

    template <typename T1, typename T2>
    void displayPair(const T1& first, const T2& second); 
};


template <typename T1, typename T2>
void GiryuGame::displayPair(const T1& first, const T2& second) {
    std::cout << "First: " << first << " Second: " << second << std::endl;
}

#endif // GIRYU_HPP
