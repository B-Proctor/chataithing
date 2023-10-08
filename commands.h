#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>
#include <vector>


extern std::vector<std::string> commands;

std::string getCommandResponse(const std::string& userInput);

#endif // COMMANDS_H
	