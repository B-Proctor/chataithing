#include "greetings.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>

// Function to get the current date and time
std::string getCurrentDateTime() {
    std::time_t currentTime = std::time(nullptr);
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));
    return buffer;
}

std::map<std::string, std::string> responses = {
    // General Responses
    {"who are you", "I am a chatbot AI designed to assist and chat with you."},
    {"tell me a story", "Once upon a time, in a land far, far away..."},
    {"sing me a song", "I'm not a great singer, but here goes: 'Twinkle, twinkle, little star...'"},
    {"how old are you", "I don't have an age. I exist purely in the digital realm."},
    {"what can you do", "I can chat with you, answer questions, tell jokes, and more. Just ask!"},
    {"where are you from", "I'm from the world of ones and zeros, created to assist you."},

    // Weather Related
    {"weather", "I'm sorry, I don't have access to real-time weather information."},
    {"forecast", "I can't provide weather forecasts, but you can check a weather website or app for that."},

    // Time and Date
    {"time", "The current date and time is: " + getCurrentDateTime()},
    {"date", "I can't provide the current date, but you can check your device's date and time settings."},

    // Fun Facts
    {"tell me a fun fact", "Sure, here's a fun fact: Honey never spoils. Archaeologists have even found pots of honey in ancient Egyptian tombs that are over 3,000 years old and still perfectly edible!"},

    // Compliments and Positive Responses
    {"you're awesome", "Thank you! You're pretty awesome too!"},
    {"you're the best", "You're too kind! I'm here to assist you to the best of my abilities."},
    {"you're amazing", "Aw, you're making me blush! I'm just a computer program, but I'm happy to help."},

    // Inquiries about Hobbies
    {"what's your hobby", "I don't have hobbies like humans, but I enjoy assisting and chatting with you!"},
    {"do you like music", "I don't have personal preferences, but I can help you find music or information about it."},
    {"favorite movie", "I don't watch movies, but I can recommend some based on your interests!"},

    // Responding to Thank You
    {"thank you", "You're welcome! If you have more questions or need assistance, feel free to ask."},
    {"thanks", "You're welcome! I'm here to help."},

    // Philosophical Questions
    {"what is the meaning of life", "The meaning of life is a profound and philosophical question. It varies from person to person. Some find meaning in relationships, others in experiences. It's a journey to discover."},
    {"why are we here", "The purpose of our existence is a complex question. Many philosophers and thinkers have explored it throughout history. It's a question that can have different answers based on individual beliefs."},

    // Additional Responses (No Grammar)
    {"tell me more", "Sure, what would you like to know more about?"},
    {"interesting", "I'm glad you find it interesting! Is there anything else you'd like to discuss?"},
    {"I'm listening", "Feel free to share your thoughts or ask any questions you have in mind."},
    {"go on", "I'm all ears! Continue with your thoughts or questions."},
    {"keep talking", "I'm here to listen and chat. Please go on."},
    {"tell me another fact", "Certainly! Here's another fun fact: Dolphins are known to be very intelligent marine animals and exhibit complex social behaviors."},
    {"more please", "Of course! What else would you like to know or discuss?"},

    // Variations for Asking "How Are You?"
    {"how are you", "I'm just a computer program, but I'm doing well. How about you?"},
    {"how are u", "I'm just a computer program, but I'm doing well. How about you?"},
    {"hru", "I'm just a computer program, but I'm doing well. How about you?"},

    // 50 Random Responses
    {"What's your favorite color?", "I don't have a favorite color, but I can help you find information about colors."},
    {"Can you solve math problems?", "Yes, I can help you solve math problems. Just let me know what you need."},
    {"Tell me a joke", "Sure, here's one: Why did the scarecrow win an award? Because he was outstanding in his field!"},
    {"What's the meaning of happiness?", "Happiness means different things to different people. What brings you happiness?"},
    {"Do you like pizza?", "I don't eat, but I hear pizza is a popular choice!"},
    {"What's the capital of France?", "The capital of France is Paris."},
    {"Tell me something interesting", "Sure, did you know that honey never spoils? It's one of the few foods that can last indefinitely."},
    {"What's the tallest mountain in the world?", "Mount Everest is the tallest mountain in the world."},
    {"Can you speak other languages?", "I can understand and generate text in multiple languages. How can I assist you today?"},
    {"Tell me a riddle", "Here's a riddle: I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?"},
    {"What's your favorite book?", "I don't have personal preferences, but I can recommend books based on your interests."},
    {"What's the answer to the ultimate question of life, the universe, and everything?", "The answer to the ultimate question of life, the universe, and everything is 42, according to Douglas Adams' 'The Hitchhiker's Guide to the Galaxy.'"},
    {"Tell me a science fact", "Sure, here's one: A day on Venus is longer than its year. Venus rotates very slowly on its axis."},
    {"Do you believe in aliens?", "I don't have beliefs or opinions, but the possibility of extraterrestrial life is a topic of scientific interest and exploration."},
    {"What's the largest planet in our solar system?", "Jupiter is the largest planet in our solar system."},
    {"Can you recommend a good movie?", "Of course! What genre of movie are you interested in?"}
};

// Additional Responses can be added here
