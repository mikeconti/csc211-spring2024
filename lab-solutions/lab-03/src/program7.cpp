#include <iostream>

int main () {
    // Declare variables to store the numbers
    int num1, num2, num3;

    // Ask the user to enter the numbers
    std::cout << "MAXIMUM NUMBER\n";
    std::cout << "\tEnter the first number: ";
    std::cin >> num1;
    std::cout << "\tEnter the second number: ";
    std::cin >> num2;
    std::cout << "\tEnter the third number: ";
    std::cin >> num3;

    // Check which number is the maximum and print the result
    if (num1 > num2 && num1 > num3) {
        std::cout << "RESULT\n\t" << num1 << " is the maximum number\n";
    } else if (num2 > num1 && num2 > num3) {
        std::cout << "RESULT\n\t" << num2 << " is the maximum number\n";
    } else {
        std::cout << "RESULT\n\t" << num3 << " is the maximum number\n";
    }

    return 0;
}