#include <iostream>

void printNumberPyramid (int n) {
    // Control the number of rows
    for (int i = 0; i < n; i++) {
        // Print spaces to center the triangle of numbers
        for (int j = 0; j < (n - i); j++) {
            std::cout << " ";
        }

        // Print the first half of the numbers
        for (int j = (i + 1); j <= (2 * i) + 1; j++) { // Control the number of columns
            std::cout << j; // We want to print numbers on the same line, so we don't use std::endl
        }

        // Print the second half of the numbers
        for (int j = (2 * i); j >= (i + 1); j--) { // Control the number of columns
            std::cout << j; // We want to print numbers on the same line, so we don't use std::endl
        }

        // End the line
        std::cout << std::endl; // After printing the line of stars, we print a newline
    }
}

int main () {
    // Create a variable to store the user's input.
    int input;

    // Ask the user for a number.
    std::cout << "Enter a number: ";
    std::cin >> input;

    // Validate the input. This prevents the pyramid from exceeding single digit numbers.
    if (input <= 0 || input >= 6) {
        std::cout << "Invalid input. Please enter a number between 1 and 5." << std::endl;
        return 1;
    }

    // Call the printNumberPyramid function.
    printNumberPyramid(input);

    return 0;
}