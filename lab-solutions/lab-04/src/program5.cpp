#include <iostream>

int main () {
    int sum = 0;

    for (int i = 1; i <= 10; i++) { // Loop i = 1 -> 10
        if (i % 2 == 0) { // If i is even
            for (int j = 1; j <= 5; j++) { // Loop j = 1 -> 5
                sum += i * j; // Add i * j to the sum
            }
        } else {
            for (int j = 10 - i; j <= 5; j++) { // Loop j = (10 - i) -> 5
                sum += i * j; // Add i * j to the sum
            }
        }
    }

    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}