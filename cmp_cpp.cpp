#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "responses.h"
#include "greetings.h"
#include "jokes.h"
#include "commands.h"

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

    if (lowerInput == "hi" || lowerInput == "hey" || lowerInput == "howdy") {
        return getRandomGreetingResponse();
    }

    // Check for jokes keyword
    if (lowerInput == "joke") {
        return getRandomJokeResponse();
    }

    // Check for "cmd" command
    if (lowerInput.find("cmd") == 0) {
    
        return getCommandResponse(userInput);
    }

    // Handle other responses based on user input
    if (responses.find(lowerInput) != responses.end()) {
        return responses[lowerInput];
    }

    if (lowerInput == "help") {
        std::cout << "Welcome to the Command Execution Program!" << std::endl;
        std::cout << "\nThis program allows you to execute various commands. You can use the following commands:" << std::endl;
        std::cout << "\n1. `cmd`: List available commands." << std::endl;
        std::cout << "   - Example: `cmd`" << std::endl;
        std::cout << "\n2. `command1`: Execute command 1." << std::endl;
        std::cout << "   - Example: `cmd command1`" << std::endl;
        std::cout << "\n3. `command2`: Execute command 2." << std::endl;
        std::cout << "   - Example: `cmd command2`" << std::endl;
        std::cout << "\n4. `command3`: Execute command 3." << std::endl;
        std::cout << "   - Example: `cmd command3`" << std::endl;
        std::cout << "\nTo execute a command, simply enter `cmd` followed by the desired command name. If you're unsure about available commands, enter `cmd` to see the list." << std::endl;
        std::cout << "\nEnter `exit` to exit the program." << std::endl;
        std::cout << "\nFeel free to explore and try out the commands! If you have any questions or need assistance, please let us know." << std::endl;
        return "";
    }

    return "I'm not sure how to respond to that.";
}
