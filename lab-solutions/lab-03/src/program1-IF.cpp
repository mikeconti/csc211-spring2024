#include <iostream>

int main () {
    // Declare a variable to store the grade
    int grade;

    // Ask the user to enter the grade
    std::cout << "GRADE CALCULATOR\n";
    std::cout << "\tEnter your grade (0 - 100): ";
    std::cin >> grade;

    // Check the grade and print the result
    std::cout << "RESULT\n";

    // Grade scale via https://bigfuture.collegeboard.org/plan-for-college/college-basics/how-to-convert-gpa-4.0-scale
    if (grade >= 97 && grade <= 100) {
        std::cout << "\tA+\n";
    } else if (grade >= 93 && grade <= 96) {
        std::cout << "\tA\n";
    } else if (grade >= 90 && grade <= 92) {
        std::cout << "\tA-\n";
    } else if (grade >= 87 && grade <= 89) {
        std::cout << "\tB+\n";
    } else if (grade >= 83 && grade <= 86) {
        std::cout << "\tB\n";
    } else if (grade >= 80 && grade <= 82) {
        std::cout << "\tB-\n";
    } else if (grade >= 77 && grade <= 79) {
        std::cout << "\tC+\n";
    } else if (grade >= 73 && grade <= 76) {
        std::cout << "\tC\n";
    } else if (grade >= 70 && grade <= 72) {
        std::cout << "\tC-\n";
    } else if (grade >= 67 && grade <= 69) {
        std::cout << "\tD+\n";
    } else if (grade >= 65 && grade <= 66) {
        std::cout << "\tD\n";
    } else {
        std::cout << "\tE/F\n";
    }

    return 0;
}