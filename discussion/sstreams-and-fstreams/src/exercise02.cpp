/**
 * @file exercise02.cpp
 * @author Matt Hogan (https://hoganmatt.me/)
 * @brief A program that uses string streams that, given a line
 * of input, removes all the vowels from the line using output
 * string streams and outputs the modified line.
 */

#include <iostream>
#include <sstream>
#include <string>

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

    // Declare a string to store the modified line
    std::string modified_line;

    // Loop through the string stream and remove all the vowels
    while (stream >> word) {
        // Loop through each character in the word
        for (int ch = 0; ch < word.length(); ch++) {
            // Check if the character is a vowel. If not, add it to the modified line
            if (word[ch] != 'A' && word[ch] != 'a'
                && word[ch] != 'E' && word[ch] != 'e'
                && word[ch] != 'I' && word[ch] != 'i'
                && word[ch] != 'O' && word[ch] != 'o'
                && word[ch] != 'U' && word[ch] != 'u') {
                modified_line += word[ch]; // Add the character to the modified line
            }
        }
        modified_line += " "; // Add a space after each word
    }

    // Output the modified line
    std::cout << "Modified line: " << modified_line << std::endl;

    return 0;
}