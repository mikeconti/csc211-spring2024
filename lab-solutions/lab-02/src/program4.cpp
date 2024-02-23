#include <iostream>
#include <string>

int main () {
    // Create a variable to store the user's name.
    std::string name;

    // Ask the user for their name.
    std::cout << "Hello, what is your name?" << std::endl;
    std::getline(std::cin, name); // Use the getline function to read the entire line of input, not just the first word.

    // Output a greeting with the user's name.
    std::cout << "Hello, " << name << "!\n";

    return 0;
}