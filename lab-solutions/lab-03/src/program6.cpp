#include <iostream>

int main () {
    // Declare variables to store the range and the test number
    int low, high, test;

    // Ask the user to enter the range and the test number
    std::cout << "RANGE CHECKER\n";
    std::cout << "\tEnter the low range: ";
    std::cin >> low;
    std::cout << "\tEnter the high range: ";
    std::cin >> high;
    std::cout << "\tEnter the test number: ";
    std::cin >> test;
    
    // Check if the test number is in the range
    (test >= low && test <= high) ? std::cout << "RESULT\n\tIn range\n" : std::cout << "RESULT\n\tNot in range\n";

    return 0;
}