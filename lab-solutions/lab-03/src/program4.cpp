#include <iostream>

int main () {
    // Declare a variable to store the letter
    char input;

    // Ask the user to enter the letter
    std::cout << "CAPITAL LETTER CHECKER\n";
    std::cout << "\tEnter a letter: ";
    std::cin >> input;

    // Check, using ASCII values, if the letter is capital
    // See https://www.asciitable.com/ for more information about ASCII values
    bool isCapital = (input >= 'A' && input <= 'Z');

    // Print the result
    std::cout << "RESULT\n";
    (isCapital) ? std::cout << "\tCapital\n" : std::cout << "\tNot capital\n";

    return 0;
}