#include <iostream>

int main () {
    // Declare a variable to store the speed
    int speed;

    // Ask the user to enter the speed
    std::cout << "SPEED LIMIT\n";
    std::cout << "\tEnter the speed (in mph): ";
    std::cin >> speed;

    // Check the speed and print the result
    std::cout << "RESULT\n";
    
    if (speed > 55) {
        std::cout << "\tSpeeding\n";
    } else if (speed >= 50 && speed <= 55) {
        std::cout << "\tPushing your luck\n";
    } else {
        std::cout << "\tSafe\n";
    }

    return 0;
}