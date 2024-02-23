#include <iostream>

int main () {
    for (int i = 0; i < 4; i++) { // Control the number of rows
        // Print backslashes
        for (int j = 0; j < (2 * i); j++) { // Control the number of columns
            std::cout << "\\";
        }

        // Print exclamation marks
        for (int j = 0; j < 14 - (4 * i); j++) { // Control the number of columns
            std::cout << "!";
        }

        // Print forward slashes
        for (int j = 0; j < (2 * i); j++) { // Control the number of columns
            std::cout << "/";
        }

        // End the line
        std::cout << std::endl;
    }
}