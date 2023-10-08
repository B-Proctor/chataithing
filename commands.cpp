#include "commands.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator> // Include this header for std::istream_iterator
#include "gm1.h"
#include "gm2.h"

std::vector<std::string> commands = {
    "cmd",
    "gm1", // Add more commands here
    "gm2",
    "command3"
};

std::string getCommandResponse(const std::string& userInput) {
    // Split the user input into words
    std::istringstream iss(userInput);
    std::vector<std::string> words(std::istream_iterator<std::string>{iss},
        std::istream_iterator<std::string>());

    if (userInput == "cmd") {
        // User entered just "cmd," so provide a list of available commands
        std::string availableCommands = "Available commands:\n";
        for (const std::string& cmd : commands) {
            availableCommands += cmd + "\n";
        }
        std::cout << "Which command would you like to execute?\n" << availableCommands << std::endl;
        return "";
    }
    else if (words.size() >= 2 && words[0] == "cmd") {
        // Extract the command to execute from user input
        std::string cmdToExecute = words[1];

        // Here, you can implement logic to execute the command.
        // For this example, we'll just return a response.
        if (cmdToExecute == "gm1") {
            std::cout << "Executing :" << cmdToExecute << std::endl;
            playGame1();
            return "Successfully Executed GM1";
        }
        else if (cmdToExecute == "gm2") {
            std::cout << "Executing :" << cmdToExecute << std::endl;
            playGame2();
            return "Successfully Executed GM2";

        }
        else if (cmdToExecute == "command3") {
            std::cout << "Executing :" << cmdToExecute << std::endl;
            return "";
        }
        else {
            return "Unknown command: " + cmdToExecute;
        }
    }

    return "Command not found: " + userInput;
}


