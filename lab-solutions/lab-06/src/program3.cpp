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
 * @brief Function to determine if a given c-string is a palindrome
 * 
 * @param str The c-string to check
 * @return true The given c-string is a palindrome
 * @return false The given c-string is not a palindrome
 */
bool palindrome(char str[]) {
    int length = string_len(str); // Calculate the length of the string

    // Loop through the string
    for (int i = 0; i < length / 2; i++) {
        // If the current character does not match the corresponding character from the end of the string
        if (str[i] != str[length - i - 1]) {
            return false; // The string is not a palindrome
        }
    }

    return true; // The string is a palindrome
}

int main () {
    // Test the palindrome function using a given c-string
    char str[] = "racecar";
    std::cout << "The string \"" << str << "\" is " << (palindrome(str) ? "" : "not ") << "a palindrome" << std::endl;

    return 0;
}