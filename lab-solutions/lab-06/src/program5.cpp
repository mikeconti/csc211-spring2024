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
 * @brief Function to remove all occurrences of a given character in a c-string
 * 
 * @param str The c-string to remove characters from
 * @param a The character to remove
 */
void remove(char str[], char a) {
    int length = string_len(str); // Calculate the length of the string

    // Loop through the string
    for (int i = 0; i < length; i++) {
        // If the current character is the character to remove
        if (str[i] == a) {
            // Shift all characters after the current character one position to the left
            for (int j = i; j < length; j++) {
                str[j] = str[j + 1];
            }
            length--; // Decrement the length of the string
            i--; // Decrement the index to account for the removed character
        }
    }
}

int main () {
    // Test the remove function using a given c-string
    char str[] = "Hello, World!";

    // Print the original string
    std::cout << "The original string is: " << str << std::endl;

    // Remove all occurrences of 'l'
    remove(str, 'l');

    // Print the modified string
    std::cout << "The modified string is: " << str << std::endl;

    return 0;
}