#include <iostream>

int add(int a, int b) {
    // Return the sum of a and b.
    return a + b;
}

int mult(int a, int b) {
    // Create a variable to store the result.
    int result = 0;

    // Add a to the result b times.
    for (int i = 0; i < b; i++) {
        result = add(result, a); // result = result + a
    }

    // Return the result.
    return result;
}

int exp(int a, int b) {
    // Create a variable to store the result.
    int result = 1;

    // Multiply a by itself b times.
    for (int i = 0; i < b; i++) {
        result = mult(result, a); // result = result * a
    }

    // Return the result.
    return result;
}

int main() {
    std::cout << exp(2, 6) << std::endl;
}