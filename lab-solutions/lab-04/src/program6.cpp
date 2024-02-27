#include <iostream>

int main () {
    for (int i = 0; i < 4; i++) { // Control the number of rows
        // Print the stars
        for (int j = 0; j <= (2 * i); j++) { // Control the number of columns
            std::cout << "*"; // We want to print starrs on the same line, so we don't use std::endl
        }

        // End the line
        std::cout << std::endl; // After printing the line of stars, we print a newline
    }

    return 0;
}