#include <iostream>

#include <string>
#include <sstream>

int main () {
    // Create a variable to store the line of integers
    std::string line;
    
    // Prompt the user to enter a line of integers
    std::cout << "Enter a sequene of integers, separated by commas: ";
    std::getline(std::cin, line);

    // Create a string stream from the line
    std::istringstream iss(line);

    // Create a variable to store the sum of the integers
    int sum = 0;
    std::string num;

    // Loop through the integers in the line until there are no more
    while (std::getline(iss, num, ',')) {
        sum += std::atoi(num.c_str()); // Add the current integer to the sum. In this case, we use std::atoi to convert the string to an integer
    }

    // Print the sum of the integers
    std::cout << "The sum of the integers is: " << sum << std::endl;

    return 0;
}