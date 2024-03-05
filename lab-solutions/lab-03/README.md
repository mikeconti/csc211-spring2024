# Lab 03: Solution Set

## Table of Contents

- [Lab 03: Solution Set](#lab-03-solution-set)
  - [Table of Contents](#table-of-contents)
  - [Questions](#questions)
  - [Programs](#programs)

## Questions

1. For each of the number systems discussed, how many unique values can be represented by 4 digits from that system?

    - Binary: 2^4 = 16
    - Decimal: 10^4 = 10,000
    - Hexadecimal: 16^4 = 65,536

2. Convert 74F8E9DA Hexadecimal to Decimal.

    - 74F8E9DA = 7*16^7 + 4*16^6 + 15*16^5 + 8*16^4 + 14*16^3 + 9*16^2 + 13*16^1 + 10*16^0
    - 74F8E9DA = 1,958,394,906

3. Convert 11011010101 Binary to Hexadecimal.

    - 11011010101 = 1101 1010 101
    - 1101 = D
    - 1010 = A
    - 101 = 5
    - 11011010101 = D5A

4. Convert 628 Decimal to Binary.

    - 628 / 2 = 314 remainder 0
    - 314 / 2 = 157 remainder 0
    - 157 / 2 = 78 remainder 1
    - 78 / 2 = 39 remainder 0
    - 39 / 2 = 19 remainder 1
    - 19 / 2 = 9 remainder 1
    - 9 / 2 = 4 remainder 1
    - 4 / 2 = 2 remainder 0
    - 2 / 2 = 1 remainder 0
    - 1 / 2 = 0 remainder 1
    - 628 = 1001110100

5. Convert 128472481 Decimal to Hexadecimal.

    - 128472481 / 16 = 8030280 remainder 1
    - 8030280 / 16 = 501892 remainder 8
    - 501892 / 16 = 31368 remainder 4
    - 31368 / 16 = 1960 remainder 8
    - 1960 / 16 = 122 remainder 8
    - 122 / 16 = 7 remainder 10
    - 7 / 16 = 0 remainder 7
    - 128472481 = 7848411

6. Convert 74F8E9DA Hexadecimal to Binary.

    - 7 = 0111
    - 4 = 0100
    - F = 1111
    - 8 = 1000
    - E = 1110
    - 9 = 1001
    - D = 1101
    - A = 1010
    - 74F8E9DA = 01110100111110001011100111011010

7. Convert 11011110101 Binary to Decimal.

    - 11011110101 = 1*2^10 + 1*2^9 + 0*2^8 + 1*2^7 + 1*2^6 + 1*2^5 + 1*2^4 + 0*2^3 + 1*2^2 + 0*2^1 + 1*2^0
    - 11011110101 = 1,439

8. ...do your best to determine what that error is, what it will cause the code to do, and how to fix it.

    ```cpp
    #include <iostream>
    int main() {
        int test = 0;

        if(test = 10) {
            std::cout << "Hello World" << std::endl;
        }
        else {
            std::cout << "foo bar" << std::endl;
        }
        return 0;
    }
    ```

    - The error is that the if statement is using the assignment operator `=` instead of the equality operator `==`. This will cause the code to always print "Hello World" because the assignment will always evaluate to true. To fix this, change `if(test = 10)` to `if(test == 10)`.

9. ...do your best to determine what that error is, what it will cause the code to do, and how to fix it.

    ```cpp
    #include <iostream>
    int main() {
        int test = 0;

        if test == 10 {
            std::cout << "Hello World" << std::endl;
        }
        else {
            std::cout << "foo bar" << std::endl;
        }
        return 0;
    }
    ```

    - The error is that the if statement is missing the parentheses. This will cause the code to not compile. To fix this, change `if test == 10` to `if(test == 10)`.

10. ...do your best to determine what that error is, what it will cause the code to do, and how to fix it.

    ```cpp
    #include <iostream>
    int main() {
        int test = 0;

        if (test == 0) 
            std::cout << "Hello World" << std::endl;
            std::cout << "Hello World2" << std::endl;
        else {
            std::cout << "foo bar" << std::endl;
        }
        return 0;
    }
    ```

    - The error is that the second `std::cout` statement is not part of the if statement. This will cause the code to always print "Hello World2" because the `else` statement will never be reached. To fix this, add curly braces around the `if` statement.

## Programs

1. [`program1.cpp`] Implement an algorithm using C++ that outputs the letter grade from a number grade. You can use a typical grade scheme found [here](https://pages.collegeboard.org/how-to-convert-gpa-4.0-scale).

    - Solution (if Approach): [lab-03/src/program1-IF.cpp](src/program1-IF.cpp)
    - Solution (switch Approach): [lab-03/src/program1-SWITCH.cpp](src/program1-SWITCH.cpp)

2. [`program2.cpp`] Implement an algorithm using C++ to detect a speeding car, given that the speed limit is 50 mph. This algorithm should have three possible outputs, "Safe" for any speed below the limit, "Pushing your luck" for any speed in the range [50-55]mph, and "Speeding" for any speed greater than 55.

    - Solution: [lab-03/src/program2.cpp](src/program2.cpp)

3. [`program3.cpp`] Implement an algorithm using C++ to determine if a number is prime. This algorithm should have two possible outputs, Prime" if a number is prime, "Not Prime" otherwise.

    - Solution: [lab-03/src/program3.cpp](src/program3.cpp)
    - Faster Solution: [lab-03/src/program3-FASTER.cpp](src/program3-FASTER.cpp)

4. [`program4.cpp`] Implement an algorithm using C++ to determine if a given letter is capitalized or not. This algorithm should have two possible outputs, "Upper Case" if a letter is capital, "Lower Case" otherwise.

    - Solution: [lab-03/src/program4.cpp](src/program4.cpp)

5. [`program5.cpp`] Implement an algorithm using C++ to implement the following rules (see the lab). Note that a single entry can trigger multiple rules.

    - Solution: [lab-03/src/program5.cpp](src/program5.cpp)

6. [`program6.cpp`] Implement an algorithm in C++ to test if a number is within a range given by the user, using a single if statement. This should take three values from the user those being (in order) the lower bound on the range, the upper bound on the range, and then the number to be tested.

    - Solution: [lab-03/src/program6.cpp](src/program6.cpp)

7. [`program7.cpp`] Implement an algorithm in C++ to print the maximum of three given numbers. This should take three values from the user (in any order) and print out the largest of the three.

   - Solution: [lab-03/src/program7.cpp](src/program7.cpp)
