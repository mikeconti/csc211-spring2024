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
 * @brief Function to reverse a given c-string
 * 
 * @param str The c-string to reverse
 */
void reverse(char str[]) {
    int length = string_len(str); // Calculate the length of the string

    // Loop through the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i]; // Store the current character
        str[i] = str[length - i - 1]; // Replace the current character with the corresponding character from the end of the string
        str[length - i - 1] = temp; // Replace the corresponding character from the end of the string with the stored character
    }

    // Print the reversed string
    std::cout << "The reversed string is: " << str << std::endl;
}

int main () {
    // Test the reverse function using a given c-string
    char str[] = "Hello, World!";
    std::cout << "The original string is: " << str << std::endl;
    reverse(str);

    return 0;
}