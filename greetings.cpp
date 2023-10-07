#include "greetings.h"
#include <cstdlib>

std::vector<std::string> greetings = {
    "Hello!",
    "Hi!",
    "Hey there!",
    // Add more greetings here
};

std::string getRandomGreetingResponse() {
    int randomIndex = rand() % greetings.size();
    return greetings[randomIndex];
}
