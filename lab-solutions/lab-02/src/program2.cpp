#include <iostream>
#include <iomanip> // Include the iomanip library to use the setprecision function.

int main () {
    // Create a variable to store the cost of the item.
    int cost;

    // Ask the user to enter the cost of the item.
    std::cout << "TAX CALCULATOR\n";
    std::cout << "\tEnter the cost of the item: $";
    std::cin >> cost;

    // Calculate the total cost of the item with tax.
    double tax = cost * 1.07;

    // Output the total cost of the item.
    std::cout << "TOTAL COST\n";
    std::cout << std::fixed << std::setprecision(2); // Set the precision of the output to 2 decimal places.
    std::cout << "\tThe total cost of the item is: $" << tax << "\n";

    return 0;
}