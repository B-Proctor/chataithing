#include "greetings.h"
#include <cstdlib>

std::vector<std::string> greetings = {
    "Hello!",
    "Hi!",
    "Hey there!",
    "Greetings!",
    "How's it going?",
    "Good day!",
    "Yo!",
    "Hi there!",
    "What's up?",
    "Hiya!",
    "Nice to see you!",
    "Hi, how can I assist you?",
    "Hey, what's on your mind?",
    "Hello, how's your day?",
    "Hey, it's me again!",
    "Hi, ready for a chat?",
    "Hello, my friend!",
};

std::string getRandomGreetingResponse() {
    int randomIndex = rand() % greetings.size();
    return greetings[randomIndex];
}
