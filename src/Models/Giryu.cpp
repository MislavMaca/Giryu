#include "Giryu.hpp"

GiryuGame::GiryuGame() : currentState(GameState::MainMenu), myVillage() {}

void GiryuGame::initialize() {
    currentState = GameState::MainMenu;
    showMainMenu();
}

void GiryuGame::start() {
    std::cout << "Starting the game..." << std::endl;
    currentState = GameState::Running;
    showRunningMenu();
}

void GiryuGame::showMainMenu() {
    std::cout << "Choose your action:" << std::endl;
    std::cout << "1. Start" << std::endl;
    std::cout << "2. Showcase" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

void GiryuGame::showRunningMenu() {
    std::cout << "Choose a action:" << std::endl;
    std::cout << "1. Build" << std::endl;
    std::cout << "2. Upgrade building" << std::endl;
    std::cout << "3. Train troops" << std::endl;
    std::cout << "4. Upgrade troops" << std::endl;
    std::cout << "5. Check troop status" << std::endl;
    std::cout << "6. Attack" << std::endl;
    std::cout << "7. Go back" << std::endl;
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
    currentState = GameState::Exiting;
}

void GiryuGame::invalid() {
    std::string errorMessage = "Invalid action. Please choose a valid option.";
    throw InvalidActionException(errorMessage);
}

void GiryuGame::handleAction(const std::string& action) {
    if (currentState == GameState::MainMenu) {
        if (action == "1" || action == "Start") {
            start();
        } else if (action == "2" || action == "Showcase") {
            showcase();
        } else if (action == "3" || action == "Exit") {
            exit();
        } else {
            invalid();
        }
    } else if (currentState == GameState::Running) {
        if (action == "1" || action == "Build") {
            std::cout << "Building a..." << std::endl;    
        } else if (action == "2" || action == "Upgrade building") {
            std::cout << "Building a..." << std::endl;
        } else if (action == "3" || action == "Train troops") {
            std::cout << "Building a..." << std::endl;
        } else if (action == "4" || action == "Upgrade troops") { 
            std::cout << "Building a..." << std::endl;
        } else if (action == "5" || action == "Check troop status") {
            std::cout << "Building a..." << std::endl;
        } else if (action == "6" || action == "Attack") {
            std::cout << "Building a..." << std::endl;
        } else if (action == "7" || action == "Go back"){
            initialize();
        } else {
            invalid();
        }
    } // Add more conditions for other states if needed
}

template <typename T>
T GiryuGame::processData(const std::vector<T>& data) {
    T result = std::accumulate(data.begin(), data.end(), T{});
    return result;
}

template <typename T1, typename T2>
void GiryuGame::displayPair(const T1& first, const T2& second) {
    std::cout << "First: " << first << " Second: " << second << std::endl;
}

std::string GiryuGame::getCurrentState() const {
    switch (currentState) {
        case GameState::MainMenu:
            return "MainMenu";
        case GameState::Running:
            return "Running";
        case GameState::Showcase:
            return "Showcase";
        case GameState::Exiting:
            return "Exiting";
    }
    return "Unknown";
}
