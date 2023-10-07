#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "responses.h"
#include "greetings.h"
#include "jokes.h"

std::string getResponse(const std::string& userInput);

int main() {
    std::cout << "Welcome to the Conversation AI!" << std::endl;

    while (true) {
        std::cout << "> ";
        std::string userInput;
        std::getline(std::cin, userInput);

        if (userInput == "exit") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        std::string response = getResponse(userInput);
        std::cout << response << std::endl;
    }

    return 0;
}

std::string getResponse(const std::string& userInput) {
    // Convert user input to lowercase
    std::string lowerInput = userInput;
    std::transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);

    // Check for greetings keywords
    if (lowerInput == "hi" || lowerInput == "hello" || lowerInput == "howdy") {
        return getRandomGreetingResponse();
    }

    // Check for jokes keyword
    if (lowerInput == "joke") {
        return getRandomJokeResponse();
    }

    // Handle other responses based on user input
    if (responses.find(lowerInput) != responses.end()) {
        return responses[lowerInput];
    }

    return "I'm not sure how to respond to that.";
}
