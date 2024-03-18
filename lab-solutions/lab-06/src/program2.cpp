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
 * @brief Function to replace all occurrences of a given character in a c-string with another character
 * 
 * @param str The c-string to replace characters in
 * @param a The character to replace
 * @param b The character to replace with
 */
void replace(char str[], char a, char b) {
    int length = string_len(str); // Calculate the length of the string

    // Loop through the string
    for (int i = 0; i < length; i++) {
        // If the current character is the character to replace
        if (str[i] == a) {
            str[i] = b; // Replace the character
        }
    }
}

int main () {
    // Test the replace function using a given c-string
    char str[] = "Hello, World!";

    // Print the original string
    std::cout << "The original string is: " << str << std::endl;

    // Replace all occurrences of 'l' with 'z'
    replace(str, 'l', 'z');

    // Print the modified string
    std::cout << "The modified string is: " << str << std::endl;

    return 0;
}