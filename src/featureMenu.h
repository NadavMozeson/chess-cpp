#pragma once
#include <fstream>
#include <iostream>
#include <chrono>
#include <ctime>
#include "game.h"

class FeaturesMenu {
public:
    // username
    std::string username1;
    std::string username2;
    // Constructor
    FeaturesMenu() : username1("White"), username2("Black"){}

    // Prints the menu options
    void PrintMenu() {
        std::cout << "1. Change usernames" << std::endl;
        std::cout << "2. Export game to file at the end" << std::endl;
        std::cout << "3. Activate timer" << std::endl;
        std::cout << "Enter any other key to start the game" << std::endl;
    }

    // Changes the username
    void ChangeUsername() {
        std::string newUsername;
        std::cout << "Enter new username for first player: ";
        std::cin >> newUsername;
        this->username1 = newUsername;
        std::cout << "Username of first player changed to " << newUsername << std::endl;
        std::cout << "Enter new username for second player: ";
        std::cin >> newUsername;
        this->username2 = newUsername;
        std::cout << "Username of second player changed to " << newUsername << std::endl;
    }

    // Exports the game to a file
    void ExportGame() {
        // TODO
    }

    // Activates the timer
    void ActivateTimer() {
        // TODO
    }

    void loop()
    {
        bool loopBool = true;
        while (loopBool) {
            // Print the menu
            this->PrintMenu();

            int option;
            std::cout << "Enter option: ";
            std::cin >> option;

            switch (option) {
            case 1:
                this->ChangeUsername();
                break;
            case 2:
                this->ExportGame();
                break;
            case 3:
                this->ActivateTimer();
                break;
            default:
                std::cout << "Closing Menu...\nStarting Game!" << std::endl;
                loopBool = false;
                break;
            }
        }
    }
};
