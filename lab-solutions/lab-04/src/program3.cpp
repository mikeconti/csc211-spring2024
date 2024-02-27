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

    // Because we used a while loop, we need to declare the variable outside the loop
    int i = 1;

    while (i <= number) {
        std::cout << i << " ";
        i++; // Don' forget to increment the variable
    }

    std::cout << std::endl;

    return 0;
}