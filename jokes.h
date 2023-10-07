#ifndef JOKES_H
#define JOKES_H

#include <string>
#include <vector>

extern std::vector<std::string> jokes;

std::string getRandomJokeResponse();

#endif // JOKES_H
