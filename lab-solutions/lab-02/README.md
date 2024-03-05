# Lab 02: Solution Set

## Table of Contents

- [Lab 02: Solution Set](#lab-02-solution-set)
  - [Table of Contents](#table-of-contents)
  - [Questions](#questions)
  - [Programs](#programs)

## Questions

1. Give specific examples of real-world behaviors or activities that conform to this definition of algorithms (unrelated to computer science).

    - A recipe for baking a cake is an algorithm. It is a step-by-step procedure for completing a task. The task is to bake a cake, and the steps are the ingredients and instructions for mixing and baking the cake.

2. Give specific examples of algorithms that might occur in a computer science application.

    - A sorting algorithm is an algorithm that takes a list of items and arranges them in a specific order. A search algorithm is an algorithm that takes a list of items and finds a specific item in the list.

3. Write an algorithm to print all of the even numbers from 1-100.

    ```plaintext
    for i = 1 to 100
        if i is even
            print i
    ```

4. Write an algorithm to print True if a given number is a prime number and false if it isn't (a prime number being a number that is only divisible by 1 and itself e.g. 47).

    ```plaintext
    if n < 2
        return False
    for i = 2 to n - 1
        if n % i == 0
            return False
    return True
    ```

5. Write an algorithm to print the sum of all numbers up to a given number.

    ```plaintext
    sum = 0
    for i = 1 to n
        sum = sum + i
    print sum
    ```

6. Write an algorithm to replace all instances of a given letter in a word with another given letter.

    ```plaintext
    for i = 0 to length of word
        if word[i] == old_letter
            word[i] = new_letter
    print word
    ```

7. Write an algorithm to find the largest value in a list of numbers.

    ```plaintext
    max = list[0]
    for i = 1 to length of list
        if list[i] > max
            max = list[i]
    print max
    ```

8. Write an algorithm decrease the value of every number in a series of numbers by 1.

    ```plaintext
    for i = 0 to length of series
        series[i] = series[i] - 1
    print series
    ```

9. Record what you think c++ would output for the expression below.

    ```cpp
    #include <iostream>

    int main() {
        std::cout << 7/4 << std::endl;
        return 0;
    }
    ```

    - The output of the above expression is `1`. This is because `7/4` is an integer division, and the result is `1` with a remainder of `3`. The remainder is discarded in integer division, so the result is `1`.

10. Describe the different data types your group used in your program implementations and why you decided to use them.

    - We used `int` for the data type of the variables in our programs. We used `int` because the values we were working with were whole numbers, and we didn't need to use a floating point number.

## Programs

1. [`program1.cpp`] Implement an algorithm using c++ to apply the quadratic formula to three numbers given by the user.

    - Solution: [lab-02/src/program1.cpp](./program1.cpp)

2. [`program2.cpp`] Write a program that calculates the sales tax (T) of some purchase of N dollars and returns the final cost to the buyer (N + T). You can assume that sales tax is 7.0%.

    - Solution: [lab-02/src/program2.cpp](./program2.cpp)

3. [`program3.cpp`] Given some 4 digit number (4321), write a program that prints out each individual digit from right to left (1 , 2, 3, 4).

    - Solution (String Approach): [lab-02/src/program3-STRINGS.cpp](./program3-STRINGS.cpp)
    - Solution (Loop/Modulo Approach): [lab-02/src/program3-LOOPS.cpp](./program3-LOOPS.cpp)

4. [`program4.cpp`] Write a program that asks the user for their name and greets them with their name.

    - [lab-02/src/program4.cpp](./program4.cpp)

5. [`program5.cpp`] Write a program that takes the average of three numbers that the user provides as input.

    - [lab-02/src/program5.cpp](./program5.cpp)
