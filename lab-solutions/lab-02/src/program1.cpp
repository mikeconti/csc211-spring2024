#include <iostream>
#include <cmath>

int main () {
    // Create variables to store the coefficients of the quadratic equation.
    int a, b, c;

    // Ask the user to enter the coefficients of the quadratic equation.
    std::cout << "QUADRATIC EQUATION SOLVER\n";
    std::cout << "\tEnter a: ";
    std::cin >> a;
    std::cout << "\tEnter b: ";
    std::cin >> b;
    std::cout << "\tEnter c: ";
    std::cin >> c;
    
    // Create variables to store the solutions of the quadratic equation.
    double x1, x2;

    // Calculate the positive (x1) and negative (x2) solutions of the quadratic equation.
    x1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);

    // Output the solutions of the quadratic equation.
    std::cout << "SOLUTION(S)\n";
    std::cout << "\tx1 = " << x1 << "\n";
    std::cout << "\tx2 = " << x2 << "\n";

    return 0;
}