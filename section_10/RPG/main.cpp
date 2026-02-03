#include <iostream>
#include <string>
#include <vector>
#include <limits>

#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"

using namespace std;

void printMainMenu();
void printRaceMenu();
Race getRace(int raceNum);
Player* createPlayer(const string& name, int typeNum, int raceNum);
void printAll(const vector<Player*>& playerList);
void doCleanup(vector<Player*>& playerList);

int main() {
    int choice = -1;
    int raceNum = -1;
    string playerName;
    vector<Player*> playerList;

    printMainMenu();
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (choice != 0) {
        cout << "What would you like to name your character? ";
        getline(cin, playerName);

        printRaceMenu();
        cin >> raceNum;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        Player* tempPlayer = createPlayer(playerName, choice, raceNum);

        if (tempPlayer != nullptr) {
            playerList.push_back(tempPlayer);
            cout << "Character created successfully!\n\n";
        } else {
            cout << "Invalid class or race. Character not created.\n\n";
        }

        printMainMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\n===== Your Party =====\n";
    printAll(playerList);

    doCleanup(playerList);

    cout << "\nProgram done!\n";
    return 0;
}

// ---------------- MENU FUNCTIONS ----------------

void printMainMenu() {
    cout << "\nChoose a class:\n"
         << "\t1 - Warrior\n"
         << "\t2 - Priest\n"
         << "\t3 - Mage\n"
         << "\t0 - Finish\n"
         << "Choice: ";
}

void printRaceMenu() {
    cout << "\nChoose a race:\n"
         << "\t1 - Human\n"
         << "\t2 - Elf\n"
         << "\t3 - Dwarf\n"
         << "\t4 - Orc\n"
         << "\t5 - Troll\n"
         << "Choice: ";
}

// ---------------- FACTORY ----------------

Race getRace(int raceNum) {
    switch (raceNum) {
        case 1: return Race::HUMAN;
        case 2: return Race::ELF;
        case 3: return Race::DWARF;
        case 4: return Race::ORC;
        case 5: return Race::TROLL;
        default: return Race::HUMAN;   // fallback
    }
}

Player* createPlayer(const string& name, int typeNum, int raceNum) {
    if (raceNum < 1 || raceNum > 5) {
        return nullptr;
    }

    Race race = getRace(raceNum);

    switch (typeNum) {
        case 1: return new Warrior(name, race);
        case 2: return new Priest(name, race);
        case 3: return new Mage(name, race);
        default: return nullptr;
    }
}

// ---------------- OUTPUT ----------------

void printAll(const vector<Player*>& playerList) {
    if (playerList.empty()) {
        cout << "No characters created.\n";
        return;
    }

    for (const Player* player : playerList) {
        if (player == nullptr) continue;

        cout << "My name is " << player->getName()
             << ". I'm a " << player->whatRace()
             << " and my attack is: " << player->attack()
             << endl;
    }
}

// ---------------- MEMORY CLEANUP ----------------

void doCleanup(vector<Player*>& playerList) {
    for (Player* player : playerList) {
        delete player;
    }
    playerList.clear();
}
