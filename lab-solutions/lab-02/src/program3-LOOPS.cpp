#include <iostream>

int main () {
    // Create a variable to store the input number.
    int input;

    // Ask the user to enter a number.
    std::cout << "NUMBER REVERSER\n";
    std::cout << "\tEnter a number: ";
    std::cin >> input;

    // Create a variable to store the reversed number.
    int reversed = 0;

    // Reverse the input number using a while loop and the modulo operator.
    while (input != 0) {
        reversed = reversed * 10 + input % 10; // Multiply the reversed number by 10 and add the last digit of the input number.
        input = input / 10; // Remove the last digit of the input number.
    }

    // Output the reversed number.
    std::cout << "RESULT\n";
    std::cout << "\tReversed number: " << reversed << "\n";

    return 0;
}