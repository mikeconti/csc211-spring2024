#include <iostream>

#include <string>
#include <sstream>

int main () {
    // Create a variable to store the line of numbers
    std::string line;

    // Prompt the user to enter a line of numbers
    std::cout << "Enter a line of numbers separated by spaces: ";
    std::getline(std::cin, line);

    // Create a string stream from the line
    std::istringstream iss(line);

    // Create a variable to store the sum of the numbers
    // and another to store the current number from the line
    int sum = 0, num;

    // Loop through the numbers in the line until there are no more
    while (iss >> num) {
        sum += num; // Add the current number to the sum
    }

    // Print the sum of the numbers
    std::cout << "The sum of the numbers is: " << sum << std::endl;

    return 0;
}