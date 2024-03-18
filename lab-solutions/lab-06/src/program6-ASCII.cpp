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

/**
 * @brief Function to capitalize or decapitalize all characters in a given c-string
 * 
 * @param str The c-string to capitalize or decapitalize
 * @param caps If true, capitalize the characters; if false, decapitalize the characters
 */
void all_to(char str[], bool caps) {
    int length = string_len(str); // Calculate the length of the string

    // Loop through the string
    for (int i = 0; i < length; i++) {
        // If we are capitalizing the characters
        if (caps) {
            // If the current character is a lowercase letter
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32; // Capitalize the character
            }
        } else {
            // If the current character is an uppercase letter
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32; // Decapitalize the character
            }
        }
    }
}

int main () {
    // Test the all_to function using a given c-string
    char str[] = "Hello, World!";

    // Print the original string
    std::cout << "The original string is: " << str << std::endl;

    // Capitalize all characters
    all_to(str, true);

    // Print the modified string
    std::cout << "The modified string is: " << str << std::endl;

    // Decapitalize all characters
    all_to(str, false);

    // Print the modified string
    std::cout << "The modified string is: " << str << std::endl;

    return 0;
}