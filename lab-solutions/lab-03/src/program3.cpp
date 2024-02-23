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

    for (int i = 2; i < number; i++) {
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