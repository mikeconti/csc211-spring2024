#include <iostream>

int main () {
    // Create variables to store the three numbers.
    int num1, num2, num3;

    // Ask the user to enter three numbers.
    std::cout << "AVERAGE OF THREE NUMBERS\n";
    std::cout << "\tEnter the first number: ";
    std::cin >> num1;
    std::cout << "\tEnter the second number: ";
    std::cin >> num2;
    std::cout << "\tEnter the third number: ";
    std::cin >> num3;

    // Calculate the average of the three numbers.
    double average = (num1 + num2 + num3) / 3.0;

    // Output the average.
    std::cout << "RESULT\n";
    std::cout << "\tAverage: " << average << "\n";

    return 0;
}