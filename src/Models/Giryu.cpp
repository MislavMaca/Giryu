#include "Giryu.hpp"

GiryuGame::GiryuGame() : currentState(GameState::MainMenu), myVillage() {}

void GiryuGame::initialize()
{
    currentState = GameState::MainMenu;
    showMainMenu();
}

void GiryuGame::start()
{
    currentState = GameState::Running;
    showRunningMenu();
}

void GiryuGame::upgradeBuilding()
{
    currentState = GameState::UpgradeBuilding;
    showUpgradeBuildingMenu();
}

void GiryuGame::trainTroop()
{
    currentState = GameState::TrainTroop;
    showTrainTroopMenu();
}

void GiryuGame::upgradeTroop()
{
    currentState = GameState::UpgradeTroop;
    showUpgradeTroopMenu();
}

void GiryuGame::build()
{
    currentState = GameState::Build;
    showBuildMenu();
}

void GiryuGame::fight()
{
    currentState = GameState::Fight;
    showFightMenu();
}

void GiryuGame::showFightMenu()
{
    std::cout << "The Enemy is extraordinarily powerful" << std::endl;
    std::cout << "1. Fight" << std::endl;
    std::cout << "2. Try to run" << std::endl;
}

void GiryuGame::showMainMenu()
{
    std::cout << "Choose your action:" << std::endl;
    std::cout << "1. Start" << std::endl;
    std::cout << "2. Showcase" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

void GiryuGame::showRunningMenu()
{
    std::cout << "Choose your action:" << std::endl;
    std::cout << "1. Build" << std::endl;
    std::cout << "2. Upgrade building" << std::endl;
    std::cout << "3. Train troops" << std::endl;
    std::cout << "4. Upgrade troops" << std::endl;
    std::cout << "5. Check troop status" << std::endl;
    std::cout << "6. Confront the enemy" << std::endl;
    std::cout << "7. Go back" << std::endl;
}

void GiryuGame::showBuildMenu()
{
    std::cout << "1. Build barracks" << std::endl;
    std::cout << "2. Build blacksmith" << std::endl;
    std::cout << "3. Go back" << std::endl;
}

void GiryuGame::showUpgradeBuildingMenu()
{
    std::cout << "1. Upgrade barracks" << std::endl;
    std::cout << "2. Upgrade blacksmith" << std::endl;
    std::cout << "3. Go back" << std::endl;
}

void GiryuGame::showTrainTroopMenu()
{
    std::cout << "1. Train 5 archers" << std::endl;
    std::cout << "2. Train 10 swordsmen" << std::endl;
    std::cout << "3. Go back" << std::endl;
}

void GiryuGame::showUpgradeTroopMenu()
{
    std::cout << "1. Upgrade archers" << std::endl;
    std::cout << "2. Upgrade swordsmen" << std::endl;
    std::cout << "3. Go back" << std::endl;
}

void GiryuGame::showcase()
{
    std::cout << "Welcome to the showcase" << std::endl;

    for (int i = 0; i < 50; ++i)
    {
        std::cout << "/";
    }
    std::cout << std::endl;

    std::cout << "1. One unknown type as parameter" << std::endl;

    std::vector<int> intData = {1, 2, 3, 4, 5};
    int resultInt = processData(intData);
    std::cout << "Sum of integers: " << resultInt << std::endl;

    std::vector<double> doubleData = {1.1, 2.2, 3.3, 4.4, 5.5};
    double resultDouble = processData(doubleData);
    std::cout << "Sum of doubles: " << resultDouble << std::endl;

    std::vector<std::string> stringData = {"Hello ", "And ", "Goodbye!"};
    std::string resultString = processData(stringData);
    std::cout << "Concatenated string: " << resultString << std::endl;

    for (int i = 0; i < 50; ++i)
    {
        std::cout << "/";
    }
    std::cout << std::endl;

    std::cout << "2. Multiple unknown types (2) as parameters" << std::endl;

    displayPair(1, 3.14);    // T1 = int, T2 = double
    displayPair("Hello", 5); // T1 = const char*, T2 = int
    displayPair(7.5f, 'A');  // T1 = float, T2 = char

    for (int i = 0; i < 50; ++i)
    {
        std::cout << "/";
    }
    std::cout << std::endl;

    std::cout << "3. Using template class" << std::endl;
    DataProcessor<int, double> dp1(5, 3.14);
    dp1.processData();
    std::cout << "Result 1: " << dp1.getData1() << ", " << dp1.getData2() << std::endl;

    DataProcessor<std::string, std::string> dp2("Hello,", " world!");
    dp2.processData();
    std::cout << "Result 2: " << dp2.getData1() << dp2.getData2() << std::endl;

    for (int i = 0; i < 50; ++i)
    {
        std::cout << "/";
    }
    std::cout << std::endl;

    std::cout << "4. Exceptions" << std::endl;
    std::cout << "Enter 2 numbers(Try diving with 0)" << std::endl;

    double n1, n2;

    std::cin >> n1 >> n2;

    try
    {
        double result = divide(n1, n2);
        std::cout << "Result of division: " << result << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Enter your age(Try big number)" << std::endl;

    int a;

    std::cin >> a;

    try
    {
        ageCheck(a);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void GiryuGame::exit()
{
    std::cout << "Exiting the game. Goodbye!" << std::endl;
    currentState = GameState::Exiting;
}

void GiryuGame::invalid()
{
    std::string errorMessage = "Invalid action. Please choose a valid option.";
    throw InvalidActionException(errorMessage);
}

void GiryuGame::handleAction(const std::string &action)
{
    if (currentState == GameState::MainMenu)
    {
        if (action == "1" || action == "Start")
        {
            start();
        }
        else if (action == "2" || action == "Showcase")
        {
            showcase();
        }
        else if (action == "3" || action == "Exit")
        {
            exit();
        }
        else
        {
            invalid();
        }
    }
    else if (currentState == GameState::Running)
    {
        if (action == "1" || action == "Build")
        {
            build();
        }
        else if (action == "2" || action == "Upgrade building")
        {
            upgradeBuilding();
        }
        else if (action == "3" || action == "Train troops")
        {
            trainTroop();
        }
        else if (action == "4" || action == "Upgrade troops")
        {
            upgradeTroop();
        }
        else if (action == "5" || action == "Check troop status")
        {
            Barracks *barracks = myVillage.getBarracks();
            if (barracks != nullptr)
            {
                const std::vector<Troop *> &troops = barracks->getTroops();
                int archerCount = 0;
                int swordsmanCount = 0;
                Archer *firstArcher = nullptr;
                Swordsman *firstSwordsman = nullptr;

                for (Troop *troop : troops)
                {
                    if (Archer *archer = dynamic_cast<Archer *>(troop))
                    {
                        archerCount++;
                        if (firstArcher == nullptr)
                        {
                            firstArcher = archer;
                        }
                    }
                    else if (Swordsman *swordsman = dynamic_cast<Swordsman *>(troop))
                    {
                        swordsmanCount++;
                        if (firstSwordsman == nullptr)
                        {
                            firstSwordsman = swordsman;
                        }
                    }
                }

                if (archerCount > 0 && firstArcher != nullptr)
                {
                    std::cout << "Total number of Archers: " << archerCount << std::endl;
                    std::cout << "Archer stats after upgrade:" << std::endl;
                    std::cout << "Attack: " << firstArcher->getAttack() << std::endl;
                    std::cout << "Defense: " << firstArcher->getDefense() << std::endl;
                    std::cout << "AttackLevel: " << firstArcher->getAttackLevel() << std::endl;
                }
                else
                {
                    std::cout << "No Archers available to check status." << std::endl;
                }

                if (swordsmanCount > 0 && firstSwordsman != nullptr)
                {
                    std::cout << "Total number of Swordsmen: " << swordsmanCount << std::endl;
                    std::cout << "Swordsman stats after upgrade:" << std::endl;
                    std::cout << "Attack: " << firstSwordsman->getAttack() << std::endl;
                    std::cout << "Defense: " << firstSwordsman->getDefense() << std::endl;
                    std::cout << "AttackLevel: " << firstSwordsman->getAttackLevel() << std::endl;
                }
                else
                {
                    std::cout << "No Swordsmen available to check status." << std::endl;
                }
            }
            else
            {
                std::cout << "No Barracks available to check status." << std::endl;
            }
        }

        else if (action == "6" || action == "Confront the enemy")
        {
            fight();
        }
        else if (action == "7" || action == "Go back")
        {
            initialize();
        }
        else
        {
            invalid();
        }
    }
    else if (currentState == GameState::Build)
    {
        if (action == "1" || action == "Build barracks")
        {
            Barracks *barracks = new Barracks(20, 15, 12, 5);
            myVillage.addBuilding(barracks);
            std::cout << "Barracks built!" << std::endl;
        }
        else if (action == "2" || action == "Build blacksmith")
        {
            Barracks *barracks = myVillage.getBarracks();
            if (barracks != nullptr)
            {
                Blacksmith *blacksmith = new Blacksmith(100, 50, 75, 25, *barracks);
                myVillage.addBuilding(blacksmith);
                std::cout << "Blacksmith built!" << std::endl;
            }
            else
            {
                std::cout << "No Barracks available to build a Blacksmith." << std::endl;
            }
        }
        else if (action == "3" || action == "Go back")
        {
            start();
        }
        else
        {
            invalid();
        }
    }
    else if (currentState == GameState::UpgradeBuilding)
    {
        if (action == "1" || action == "Upgrade barracks")
        {
            std::cout << "Barracks upgraded!(Not Implemented)" << std::endl;
        }
        else if (action == "2" || action == "Upgrade blacksmith")
        {
            std::cout << "Blacksmith upgraded!(Not Implemented)" << std::endl;
        }
        else if (action == "3" || action == "Go back")
        {
            start();
        }
        else
        {
            invalid();
        }
    }
    else if (currentState == GameState::TrainTroop)
    {
        if (action == "1" || action == "Train 5 archers")
        {
            Barracks *barracks = myVillage.getBarracks();
            if (barracks != nullptr)
            {
                for (int i = 0; i < 5; ++i)
                {
                    Archer *archer = new Archer(10, 5, 3, 2, 7, 3, "Archer");
                    barracks->recruitTroop(archer);
                }
                std::cout << "5 Archers trained!" << std::endl;
            }
            else
            {
                std::cout << "No Barracks available to train troops." << std::endl;
            }
        }
        else if (action == "2" || action == "Train 10 swordsmen")
        {
            Barracks *barracks = myVillage.getBarracks();
            if (barracks != nullptr)
            {
                for (int i = 0; i < 10; ++i)
                {
                    Swordsman *swordsman = new Swordsman(10, 5, 3, 2, 3, 7, "Swordsman");
                    barracks->recruitTroop(swordsman);
                }
                std::cout << "10 Swordsmen trained!" << std::endl;
            }
            else
            {
                std::cout << "No Barracks available to train troops." << std::endl;
            }
        }
        else if (action == "3" || action == "Go back")
        {
            start();
        }
        else
        {
            invalid();
        }
    }
    else if (currentState == GameState::UpgradeTroop)
    {
        if (action == "1" || action == "Upgrade archers")
        {
            Blacksmith *blacksmith = myVillage.getBlacksmith();
            if (blacksmith != nullptr)
            {
                blacksmith->upgradeTroopAttack("Archer");
                std::cout << "Archers upgraded!" << std::endl;
            }
            else
            {
                std::cout << "No Blacksmith available to upgrade troops." << std::endl;
            }
        }
        else if (action == "2" || action == "Upgrade swordsmen")
        {
            Blacksmith *blacksmith = myVillage.getBlacksmith();
            if (blacksmith != nullptr)
            {
                blacksmith->upgradeTroopAttack("Swordsman");
                std::cout << "Swordsman upgraded!" << std::endl;
            }
            else
            {
                std::cout << "No Blacksmith available to upgrade troops." << std::endl;
            }
        }
        else if (action == "3" || action == "Go back")
        {
            start();
        }
        else
        {
            invalid();
        }
    }
    else if (currentState == GameState::Fight)
    {
        if (action == "1" || action == "Fight")
        {
            enemy = new Enemy(0, 0, 0, 0, 50, 30, "Enemy");
            attackEnemy();
        }
        else if (action == "2" || action == "Try to run")
        {
            std::cout << "The enemy was too strong to fight, as you began your escape they overwhelmed you in an instant" << std::endl;
            std::cout << "Better luck in your next life" << std::endl;
            exit();
        }
        else
        {
            invalid();
        }
    }
}

template <typename T>
T GiryuGame::processData(const std::vector<T> &data)
{
    T result = std::accumulate(data.begin(), data.end(), T{});
    return result;
}

template <typename T1, typename T2>
void GiryuGame::displayPair(const T1 &first, const T2 &second)
{
    std::cout << "First: " << first << " Second: " << second << std::endl;
}

std::string GiryuGame::getCurrentState() const
{
    switch (currentState)
    {
    case GameState::MainMenu:
        return "MainMenu";
    case GameState::Running:
        return "Running";
    case GameState::Build:
        return "Building";
    case GameState::Showcase:
        return "Showcase";
    case GameState::Exiting:
        return "Exiting";
    }
    return "Unknown";
}

void GiryuGame::attackEnemy()
{
    Barracks *barracks = myVillage.getBarracks();
    if (barracks == nullptr)
    {
        std::cout << "No Barracks available to gather troops for an attack." << std::endl;
        std::cout << "Without a means of making troops the fight was lost from the start" << std::endl;
        exit();
    }

    std::vector<Troop *> &troops = barracks->getTroops();
    if (troops.empty())
    {
        std::cout << "No troops available to attack the enemy." << std::endl;
        std::cout << "Try training some troops in your next life" << std::endl;
        exit();
    }

    int totalAttack = 0;
    int totalDefense = 0;
    for (Troop *troop : troops)
    {
        totalAttack += troop->getAttack();
        totalDefense += troop->getDefense();
    }

    std::cout << "Your troops' total attack: " << totalAttack << std::endl;
    std::cout << "Your troops' total defense: " << totalDefense << std::endl;
    std::cout << "Enemy's attack: " << enemy->getAttack() << std::endl;
    std::cout << "Enemy's defense: " << enemy->getDefense() << std::endl;

    if (totalAttack > enemy->getDefense() && totalDefense > enemy->getAttack())
    {
        std::cout << "Victory! Your troops defeated the enemy." << std::endl;
        exit();
    }
    else
    {
        std::cout << "Defeat! The enemy was too strong for your troops." << std::endl;
        exit();
    }
}

double GiryuGame::divide(double n1, double n2)
{
    if (n2 == 0)
    {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return n1 / n2;
}

int GiryuGame::ageCheck(int age)
{
    if (age < 0 || age > 120)
    {
        throw std::invalid_argument("Invalid age. Age must be between 0 and 120.");
        return -1;
    }
    else
    {
        std::cout << "Age is valid." << std::endl;
        return age;
    }
}
