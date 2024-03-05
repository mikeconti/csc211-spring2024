#include <iostream>

void evenSumFunc (int a, int b, int c) {
    // Create a variable to store the result.
    int result = 0;

    // If a is even, return the sum of all ints between b and c.
    if (a % 2 == 0) {
        for (int i = b; i <= c; i++) {
            result += i;
        }
    // Otherwise, return the product of all ints between b and c.
    } else {
        for (int i = b; i <= c; i++) {
            result *= i;
        }
    }

    // Print the result.
    std::cout << "Result: " << result << std::endl;
}

int main () {
    // Create variables to store the user's input.
    int a, b, c;

    // Ask the user for 3 numbers.
    std::cout << "Enter 3 numbers (a, b, c): ";
    std::cin >> a >> b >> c;

    // Call the evenSumFunc function.
    evenSumFunc(a, b, c);

    return 0;
}