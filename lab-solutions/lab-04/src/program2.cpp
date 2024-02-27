#include <iostream>

int main () {
    // Declare a variable to store the number
    int input;

    // Ask the user for a number
    std::cout << "Hello! Enter a number (0 to quit): ";

    // Read the input and print it back to the user until the user enters 0
    for ( ; std::cin >> input && input != 0 ; ) {
        std::cout << "You entered: " << input << std::endl;
        std::cout << "\nEnter another number (0 to quit): ";
    }

    std::cout << "Goodbye!" << std::endl;

    return 0;
}