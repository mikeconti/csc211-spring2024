/**
 * @file exercise03.cpp
 * @author Matt Hogan (https://hoganmatt.me/)
 * @brief A program that uses file streams to read a list of
 * numbers from a file and output the sum of the numbers.
 */

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Declare a string to store the file name
    std::string file_name;

    // Prompt the user for the file name
    std::cout << "Enter the file name: "; // i.e. 'dat/numbers.txt'
    std::cin >> file_name;

    // Create a file stream object and open the file
    std::ifstream file(file_name);

    // Check if the file was successfully opened
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    // Declare a variable to store the sum of the numbers
    int sum = 0;

    // Declare a variable to store each number
    int number;

    // Loop through the file stream and calculate the sum of the numbers
    while (file >> number) {
        sum += number;
    }

    // Output the sum of the numbers
    std::cout << "Sum of the numbers: " << sum << std::endl;

    // Close the file
    file.close();

    return 0;
}