#include "giryu.hpp"

void GiryuGame::start() {
    std::cout << "Starting the game..." << std::endl;
    // Add logic for starting the game
}

void GiryuGame::showcase() {
    std::cout << "Welcome to the showcase" << std::endl;

    std::cout << "One unknown type as parameter" << std::endl;

    std::vector<int> intData = {1, 2, 3, 4, 5};
    int resultInt = processData(intData);
    std::cout << "Sum of integers: " << resultInt << std::endl;

    std::vector<double> doubleData = {1.1, 2.2, 3.3, 4.4, 5.5};
    double resultDouble = processData(doubleData);
    std::cout << "Sum of doubles: " << resultDouble << std::endl;

    std::vector<std::string> stringData = {"Hello ", "And ", "Goodbye!"};
    std::string resultString = processData(stringData);
    std::cout << "Concatenated string: " << resultString << std::endl;

    std::cout << "Multiple unknown types (2) as parameters" << std::endl;

    displayPair(1, 3.14);  // T1 = int, T2 = double
    displayPair("Hello", 5); // T1 = const char*, T2 = int
    displayPair(7.5f, 'A'); // T1 = float, T2 = char

    std::cout << "Using template class" << std::endl;
    DataProcessor<int, double> dp1(5, 3.14);
    dp1.processData();
    std::cout << "Result 1: " << dp1.getData1() << ", " << dp1.getData2() << std::endl;

    DataProcessor<std::string, std::string> dp2("Hello,", " world!");
    dp2.processData();
    std::cout << "Result 2: " << dp2.getData1() << dp2.getData2() << std::endl;
}

void GiryuGame::exit() {
    std::cout << "Exiting the game. Goodbye!" << std::endl;
}

void GiryuGame::invalid() {
    std::string errorMessage = "Invalid action. Please type 'Start' or '1' to start the game, 'Showcase' or '2' to showcase, or 'Exit' or '3' to exit.";
    throw InvalidActionException(errorMessage);
}

void GiryuGame::handleAction(const std::string& action) {
    ActionType type = getActionType(action);

    switch (type) {
        case ActionType::Start:
            start();
            break;
        case ActionType::Exit:
            exit();
            break;
        case ActionType::Showcase:
            showcase();
            break;
        case ActionType::Invalid:
            invalid();
            break;
    }
}

GiryuGame::ActionType GiryuGame::getActionType(const std::string& action) {
    auto it = actionMap.find(action);
    if (it != actionMap.end()) {
        return it->second;
    } else {
        return ActionType::Invalid;
    }
}

template <typename T>
T GiryuGame::processData(const std::vector<T>& data) {
    T result = std::accumulate(data.begin(), data.end(), T{});
    return result;
}
