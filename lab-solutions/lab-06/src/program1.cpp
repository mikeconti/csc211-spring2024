#include <iostream>

/**
 * @brief Function to calculate the length of a given c-string
 * 
 * @param str The c-string to calculate the length of
 * @return unsigned int The length of the given c-string
 */
unsigned int string_len (char str[]) {
    // Create a variable to store the length of the string
    unsigned int result = 0;

    // Loop through the string until the null character is found
    while (str[result] != '\0') {
        result++; // Increment the length of the string
    }

    // Return the length of the string
    return result;
}

int main () {
    // Test the string_len function using a given c-string
    char str[] = "Hello, World!";
    std::cout << "The length of the string is: " << string_len(str) << std::endl;

    return 0;
}