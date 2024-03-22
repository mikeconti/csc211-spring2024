/**
 * @file exercise01.cpp
 * @author Matt Hogan (https://hoganmatt.me/)
 * @brief A program that uses string streams to read a line of
 * text from the user and output the number of words in the line.
 */

#include <iostream>
#include <sstream>

int main() {
    // Declare a string to store the user input
    std::string input;

    // Prompt the user for input
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, input);

    // Create a string stream object and pass the input string to it
    std::istringstream stream(input);

    // Declare a string to store each word
    std::string word;

    // Declare a counter to store the number of words
    int count = 0;

    // Loop through the string stream and count the number of words
    while (stream >> word) {
        count++;
    }

    // Output the number of words
    std::cout << "Number of words: " << count << std::endl;

    return 0;
}