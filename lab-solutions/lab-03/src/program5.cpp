#include <iostream>

int main () {
    // Declare a variable to store the number
    int number;

    // Ask the user to enter the number
    std::cout << "NUMBER RULE CHECK\n";
    std::cout << "\tEnter a number: ";
    std::cin >> number;

    // Check the number against our rules, append the result to a string
    std::string result = "";
    (number % 2 == 0) ? result += "1" : result += "";
    (number % 1 == 0) ? result += "2" : result += "";
    (number % 2 == 0) ? result += "3" : result += "";
    (number % 3 == 0) ? result += "4" : result += "";

    // Print the result
    std::cout << "RESULT\n";
    std::cout << "\t" << result << "\n";

    return 0;
}