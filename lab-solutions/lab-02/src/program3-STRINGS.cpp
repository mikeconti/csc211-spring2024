#include <iostream>

int main () {
    // Create a variable to store the input number as a string.
    std::string input;

    // Ask the user to enter a number with at most 4 digits.
    std::cout << "NUMBER REVERSER\n";
    std::cout << "\tEnter a number with at most 4 digits: ";
    std::cin >> input;

    // Create a variable to store the reversed number.
    std::string reversed = "";

    // Reverse the input using hard-coded indices and the string concatenation operator.
    if (input.length() == 1) {
        reversed = input; // The input is already reversed.
    } else if (input.length() == 2) {
        reversed = input.substr(1, 1) + input.substr(0, 1); // Concatenate the second digit with the first digit.
    } else if (input.length() == 3) {
        reversed = input.substr(2, 1) + input.substr(1, 1) + input.substr(0, 1); // Concatenate the third digit with the second digit and the first digit.
    } else if (input.length() == 4) {
        reversed = input.substr(3, 1) + input.substr(2, 1) + input.substr(1, 1) + input.substr(0, 1); // Concatenate the fourth digit with the third digit, the second digit, and the first digit.
    }

    // Output the reversed number.
    std::cout << "RESULT\n";
    std::cout << "\tReversed number: " << reversed << "\n";

    return 0;
}