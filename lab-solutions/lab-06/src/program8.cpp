#include <iostream>

#include <string>
#include <sstream>

int main () {
    // Create a variable to store the line of words
    std::string line;

    // Prompt the user to enter a line of words
    std::cout << "Enter any number of words separated by spaces: ";
    std::getline(std::cin, line);

    // Create a string stream from the line
    std::istringstream iss(line);

    // Create a variable to store the number of words
    int wordCount = 0;

    // Loop through the words in the line until there are no more
    while (iss >> line) {
        wordCount++; // Increment the number of words
    }

    // Print the number of words
    std::cout << "The number of words is: " << wordCount << std::endl;

    return 0;
}