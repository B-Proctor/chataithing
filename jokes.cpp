#include "jokes.h"
#include <cstdlib>


std::vector<std::string> jokes = {
    "Why don't scientists trust atoms? Because they make up everything!",
    "Did you hear about the mathematician who's afraid of negative numbers? He'll stop at nothing to avoid them!",
    "Why did the scarecrow win an award? Because he was outstanding in his field!",
    "Parallel lines have so much in common. It's a shame they'll never meet.",
    "I told my wife she was drawing her eyebrows too high. She looked surprised.",
    "Why did the bicycle fall over? Because it was two-tired!",
    "What do you call a fish with no eyes? Fsh!",
    "I used to play piano by ear, but now I use my hands.",
    "I'm reading a book on anti-gravity. It's impossible to put down!",
    "Did you hear about the red and blue ships that collided? All the sailors were marooned.",
    "My neighbor gave me a new roof for free. He said it was on the house.",
    "Did you hear about the teenager who failed his driving test? He thought it was a crash course.",
    "Where do surfers learn to surf? At boarding school.",
    "A duck walks into a bar and buys everyone a round. He tells the bartender, 'Put it on my bill.'",
    "What has a spine but no bones? A book.",
    "What do you call a wizard who’s good with ceramics? Harry Pottery.",
    "Why did Marie Curie stop dating that guy? There was no chemistry.",
    "Did you hear about the nurse who didn’t want to become a doctor? She didn’t have the patients.",
    // Add more jokes here
};

std::string getRandomJokeResponse() {
    int randomIndex = rand() % jokes.size();
    return jokes[randomIndex];
}