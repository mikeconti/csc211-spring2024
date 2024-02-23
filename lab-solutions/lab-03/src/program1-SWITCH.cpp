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
    switch (grade) {
        case 97 ... 100:
            std::cout << "\tA+\n";
            break;
        case 93 ... 96:
            std::cout << "\tA\n";
            break;
        case 90 ... 92:
            std::cout << "\tA-\n";
            break;
        case 87 ... 89:
            std::cout << "\tB+\n";
            break;
        case 83 ... 86:
            std::cout << "\tB\n";
            break;
        case 80 ... 82:
            std::cout << "\tB-\n";
            break;
        case 77 ... 79:
            std::cout << "\tC+\n";
            break;
        case 73 ... 76:
            std::cout << "\tC\n";
            break;
        case 70 ... 72:
            std::cout << "\tC-\n";
            break;
        case 67 ... 69:
            std::cout << "\tD+\n";
            break;
        case 65 ... 66:
            std::cout << "\tD\n";
            break;
        default:
            std::cout << "\tE/F\n";
    }

    return 0;
}