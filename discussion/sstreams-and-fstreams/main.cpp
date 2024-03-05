#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main () {
    // Open the file to read our input
    std::ifstream file("input.txt");

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Read the file line by line
    std::vector<int> numbers;
    std::string line;
    int sum = 0;

    while (std::getline(file, line)) {
        std::istringstream ss(line);
        int number;

        // Parse the line using a string stream
        while (ss >> number) {
            numbers.push_back(number);
            sum += number;
        }
    }

    // Close the file
    file.close();

    // Open the file to write our output to
    std::ofstream outputFile("output.txt");

    // Check if the file was opened successfully
    if (!outputFile.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Write the equation for the sum to the file
    outputFile << "Sum: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        outputFile << numbers[i];
        if (i != numbers.size() - 1) {
            outputFile << " + ";
        }
    }
    outputFile << " = " << sum << std::endl;

    // Close the file
    outputFile.close();

    return 0;
}