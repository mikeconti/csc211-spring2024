// The program is faster because we only need to check up to half of the number.
// If the number is divisible by any number greater than half of the number,
// then it's also divisible by a number less than half of the number. For example,
// if the number is 10, then we only need to check up to 5. If the number is
// divisible by 10, then it's also divisible by 1, 2, 3, 4, and 5.

#include <iostream>

int main () {
    // Declare a variable to store the number
    int number;

    // Ask the user to enter the number
    std::cout << "PRIME NUMBER CHECKER\n";
    std::cout << "\tEnter a number: ";
    std::cin >> number;
    
    // Check the number and print the result
    bool isPrime = true; // Assume the number is prime

    for (int i = 2; i < (number / 2); i++) { // Faster because we only need to check up to half of the number
        if (number % i == 0) { // If the number is divisible by i, then it's not prime
            isPrime = false;
            break;
        }
    }

    // Print the result
    std::cout << "RESULT\n";
    (isPrime) ? std::cout << "\tPrime\n" : std::cout << "\tNot prime\n";

    return 0;
}