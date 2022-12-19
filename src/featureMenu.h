#pragma once
#include <fstream>
#include <iostream>
#include <chrono>
#include <ctime>
#include "game.h"

class FeaturesMenu {
public:
    // Constructor
    FeaturesMenu(){}

    // Prints the menu options
    void PrintMenu() {
        std::cout << "1. Change usernames" << std::endl;
        std::cout << "2. Export game to file at the end" << std::endl;
        std::cout << "3. Activate timer" << std::endl;
        std::cout << "Enter any other key to start the game" << std::endl;
    }

    // Changes the username
    void ChangeUsername() {
        // TODO
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
