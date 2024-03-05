#include <iostream>

int reverseNumber (int n) {
    // Create a variable to store the result.
    int result = 0;

    // Reverse the number.
    while (n > 0) {
        result = result * 10 + n % 10; // Moves the last digit of n to the first digit of result.
        n = n / 10; // Removes the last digit of n.
    }

    // Return the result.
    return result;
}

int main () {
    int input;

    std::cout << "Enter a number: ";
    std::cin >> input;

    std::cout << "Revered Number: " << reverseNumber(input) << std::endl;

    return 0;
}