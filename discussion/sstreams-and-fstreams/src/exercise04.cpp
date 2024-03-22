/**
 * @file exercise04.cpp
 * @author Matt Hogan (https://hoganmatt.me/)
 * @brief A program that uses file streams to read a list of
 * numbers from a file and write the sum of the numbers to a
 * new file.
 */

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Declare a string to store the input file name
    std::string file_name;
    
    // Prompt the user for the input file name
    std::cout << "Enter the input file name: "; // i.e. 'dat/numbers.txt'
    std::cin >> file_name;

    // Create an input file stream object and open the input file
    std::ifstream input_file(file_name);

    // Check if the input file was successfully opened
    if (!input_file.is_open()) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return 1;
    }

    // Declare a string to store the output file name
    std::string output_file_name;

    // Prompt the user for the output file name
    std::cout << "Enter the output file name: "; // i.e. 'dat/output.txt'
    std::cin >> output_file_name;

    // Create an output file stream object and open the output file
    std::ofstream output_file(output_file_name);

    // Check if the output file was successfully opened
    if (!output_file.is_open()) {
        std::cerr << "Error: Unable to open output file." << std::endl;
        return 1;
    }

    // Declare a variable to store the sum of the numbers
    int sum = 0;

    // Declare a variable to store each number
    int number;

    // Loop through the input file stream and calculate the sum of the numbers
    while (input_file >> number) {
        sum += number;
    }

    // Output the sum of the numbers to the output file
    output_file << "Sum of the numbers: " << sum << std::endl;

    // Close the input and output files
    input_file.close();
    output_file.close();

    return 0;
}