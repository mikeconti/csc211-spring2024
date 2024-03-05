#include <iostream>

void decimalToBinary (int n) {
    // Create a variable to store the result.
    int binary[32]; // Alternatively, you could use a vector or a string.

    // Create a variable to store the length of the binary number.
    int length = 0;

    // Convert the decimal number to binary.
    while (n > 0) {
        binary[length] = n % 2;
        n = n / 2;
        length++;
    }

    // Print the binary number.
    for (int i = length - 1; i >= 0; i--) {
        std::cout << binary[i];
    }
    std::cout << std::endl;
}

int main () {
    // Create a variable to store the user's input.
    int input;

    // Ask the user for a number.
    std::cout << "Enter a number: ";
    std::cin >> input;

    // Call the decimalToBinary function.
    decimalToBinary(input);

    return 0;
}