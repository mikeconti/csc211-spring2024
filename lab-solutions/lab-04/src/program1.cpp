#include <iostream>

int main () {
    // Declare a variable to store the number
    int number;

    // Ask the user for a number
    std::cout << "RANGE PRINTING\n";
    std::cout << "\tEnter a number: ";
    std::cin >> number;

    // Print the numbers from 1 to the number
    std::cout << "RESULT\n\t";

    for (int i = 1; i <= number; i++) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}