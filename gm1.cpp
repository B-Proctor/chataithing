// gm1.cpp
#include "gm1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream> // Include this header for std::istringstream


void playGame1() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    while (true) {
        // Define the range and number of attempts
        int minNumber = 1;
        int maxNumber = 100;
        int maxAttempts = 10;

        int secretNumber = minNumber + std::rand() % (maxNumber - minNumber + 1);
        int attempts = 0;
        int guess;

        std::cout << "Welcome to the Number Guessing Game!" << std::endl;
        std::cout << "I'm thinking of a number between " << minNumber << " and " << maxNumber << ". Can you guess it?" << std::endl;

        while (attempts < maxAttempts) {
            std::cout << "Attempt " << attempts + 1 << " of " << maxAttempts << ": Enter your guess (or 'exit' to quit): ";
            std::string input;
            std::cin >> input;

            if (input == "exit") {
                std::cout << "Exiting Number Guessing Game. Goodbye!" << std::endl;
                return;
            }

            if (!(std::istringstream(input) >> guess)) {
                std::cout << "Invalid input. Please enter a valid number." << std::endl;
                continue;
            }

            if (guess < minNumber || guess > maxNumber) {
                std::cout << "Your guess is out of range. Please guess between " << minNumber << " and " << maxNumber << "." << std::endl;
                continue;
            }

            attempts++;

            if (guess < secretNumber) {
                std::cout << "Too low! Try again." << std::endl;
            }
            else if (guess > secretNumber) {
                std::cout << "Too high! Try again." << std::endl;
            }
            else {
                std::cout << "Congratulations! You guessed the secret number " << secretNumber << " in " << attempts << " attempts." << std::endl;
                break;
            }
        }

        if (attempts == maxAttempts) {
            std::cout << "Sorry, you've run out of attempts. The secret number was " << secretNumber << "." << std::endl;
        }

        std::cout << "Do you want to play again? (yes/no): ";
        std::string playAgain;
        std::cin >> playAgain;

        if (playAgain != "yes") {
            std::cout << "Exiting Number Guessing Game. Goodbye!" << std::endl;
            return;
        }
    }
}
