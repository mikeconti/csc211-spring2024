#include <iostream>

int countDigits (int n) {
    // Create a variable to store the result.
    int count = 0;

    // Count the number of digits in the number.
    while (n > 0) {
        n = n / 10;
        count++;
    }

    // Return the result.
    return count;
}

int main () {
    // Create a variable to store the user's input.
    int input;

    // Ask the user for a number.
    std::cout << "Enter a number: ";
    std::cin >> input;

    // Call the countDigits function.
    std::cout << "Number of digits: " << countDigits(input) << std::endl;

    return 0;
}