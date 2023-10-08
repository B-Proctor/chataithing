#include "gm2.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

void playGame2() {
    std::string playerChoice;
    std::string computerChoice;
    int playerScore = 0;
    int computerScore = 0;

    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    do {
        std::cout << "Welcome to Rock-Paper-Scissors!\nEnter 'rock', 'paper', 'scissors', or 'exit' to quit: ";
        std::getline(std::cin, playerChoice);

        // Convert user input to lowercase
        std::transform(playerChoice.begin(), playerChoice.end(), playerChoice.begin(), ::tolower);

        if (playerChoice == "exit") {
            std::cout << "Exiting Rock-Paper-Scissors. Goodbye!" << std::endl;
            break;
        }
        else if (playerChoice == "rock" || playerChoice == "paper" || playerChoice == "scissors") {
            // Generate a random choice for the computer
            int randomNum = std::rand() % 3;
            if (randomNum == 0) {
                computerChoice = "rock";
            }
            else if (randomNum == 1) {
                computerChoice = "paper";
            }
            else {
                computerChoice = "scissors";
            }

            std::cout << "Your choice: " << playerChoice << std::endl;
            std::cout << "Computer's choice: " << computerChoice << std::endl;

            if (playerChoice == computerChoice) {
                std::cout << "It's a tie!" << std::endl;
            }
            else if (
                (playerChoice == "rock" && computerChoice == "scissors") ||
                (playerChoice == "paper" && computerChoice == "rock") ||
                (playerChoice == "scissors" && computerChoice == "paper")
                ) {
                std::cout << "You win this round!" << std::endl;
                playerScore++;
            }
            else {
                std::cout << "Computer wins this round!" << std::endl;
                computerScore++;
            }

            std::cout << "Player Score: " << playerScore << " | Computer Score: " << computerScore << std::endl;
        }
        else {
            std::cout << "Invalid choice. Enter 'rock', 'paper', 'scissors', or 'exit'." << std::endl;
        }

    } while (playerChoice != "exit");
}
