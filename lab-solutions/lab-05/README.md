# Lab 05: Solution Set

## Table of Contents

- [Lab 05: Solution Set](#lab-05-solution-set)
  - [Table of Contents](#table-of-contents)
  - [Questions](#questions)
  - [Programs](#programs)

## Questions

```cpp
#include <iostream>

int pow(int, int);

int main() {
    int x = 2;
    int y = 4;
    int z = pow(x, y);
    std::cout << x << "^" << y << "=" << z << std::endl;
    return 0;
}

/* A Naive method for calculating powers */
int pow(int a, int b) {
    int result = 1;
    while (b != 0) {
        result *= a;
        --b;
    }
    return result;
}
```

1. What is the current value of x reported by the debugger at the breakpoint we set? Why is it that value?

    - The current value of `x` is some unknown, garbage value. This is because `x` is uninitialized at the time of the breakpoint, and so the value of `x` is whatever was in the memory location that `x` was assigned to.

2. Was your program trace similar to the debugger? If not, what were the differences and why?

    - (SUBJECTIVE): Yes, the program trace was similar to the debugger. The only difference was that the debugger was able to show the value of `x` at the breakpoint, while the program trace was not.

```cpp
#include <iostream>
int plus_one(int x) {
    return x + 1;
}
int plus_two(int x) {
    return plus_one(x + 1);
}
int main() {
    int result = 0;
    result = plus_one(0);
    result = plus_two(result);
    std::cout << result;
}
```

3. Examine what was printed out to the console. Where did this value come from? Describe how you think the call stack processed each operation (what was the order in which values were added to the stack?)

    - The value printed out to the console is `2`. This value comes from the `plus_two` function, which calls `plus_one` with the argument `x + 1`. The call stack processed each operation in the following order:
        1. `main` is called.
        2. `result` is initialized to `0`.
        3. `plus_one` is called with the argument `0`.
        4. `plus_one` returns `1`.
        5. `plus_two` is called with the argument `1`.
        6. `plus_one` is called with the argument `2`.
        7. `plus_one` returns `3`.
        8. `plus_two` returns `3`.
        9. `result` is assigned the value `3`.
        10. `main` returns.

4. Were you surprised by the activity in the stack on pythonTutor? What was different from your original guess?

    - (SUBJECTIVE): Yes, I was surprised by the activity in the stack on pythonTutor. I was surprised by the order in which the functions were called and returned. I was also surprised by the fact that the `result` variable was not overwritten by the `plus_one` function call in the `main` function.

```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}
```

5. What is the return type of the main function?

    - The return type of the `main` function is `int`. This is because the `main` function returns an `int` value representing the exit status of the program.

6. What are the parameters to the main function?

    - The parameters to the `main` function are `int argc` and `char* argv[]`. These parameters represent the number of command line arguments and the command line arguments themselves, respectively.

```cpp
#include <iostream>

bool is_even(int n) {
    if (!(n % 2)) return true;
    else return false;
}

void run() {
    int input;
    while (1) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> input;

        if (!input) break;
        else {
            if (is_even(input)) std::cout << "Even" << std::endl;
            else std::cout << "Odd" << std::endl;
        }
    }
}

int main() {
    run();
    return 0;
}
```

7. What do you think it means for a fuction to return void?

    - When a function returns `void`, it means that the function does not return a value. This is useful for functions that do not need to return a value, such as functions that perform some action but do not need to return a result.

8. Do you think that void functions can use return statements?

    - Yes, void functions can use return statements. This is useful for exiting the function early, or for returning from a function that does not return a value.

```cpp
#include <iostream>

int main() {
    run();
    return 0;
}

bool is_even(int n) {
    if (!(n % 2)) return true;
    else return false;
}

void run() {
    int input;
    while (1) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> input;

        if (!input) break;
        else {
            if (is_even(input)) std::cout << "Even" << std::endl;
            else std::cout << "Odd" << std::endl;
        }
    }
}
```

9. Copy the following (above) code into your IDE, it should throw a syntax error at compile time. What does this error mean to you?

    - The error means that the `run` function is not declared before it is used. This is because the `run` function is defined after the `main` function, and so the `main` function does not know about the `run` function when it is called.

```cpp
#include <iostream>
void mystery(int& b, int c, int& a) {
   a ++;
   b --;
   c += a;
}

int main() {
   int a = 5;
   int b = 10;
   int c = 15;
   mystery(c, a, b);
   std::cout << a << ' ' << b << ' ' << c << '\n';
   return 0;
}
```

10. What is the output of the above code?

    - The output of the above code is `5 9 6`. This is because the `mystery` function takes the first and third arguments by reference, and the second argument by value. The `mystery` function then increments the first argument, decrements the second argument, and adds the first argument to the third argument. The `main` function then prints the values of `a`, `b`, and `c`.

## Programs

```cpp
int add(int a, int b) {
    //add a to b
    //return result
}

int mult(int a, int b) {
    //add a to a sum, b times
    //return sum
}

int exp(int a, int b) {
    //multiply a times a b times
    //return result
}

int main() {
    std::cout << exp(2, 6) << std::endl;
}
```

1. [`program1.cpp`] Write three functions in C++ to implement simple addition, multiplication, and exponentiation as with the function headers seen above and test them. Each function should use your base math functions (that is to say that mult() should us add(), exp() should use mult(), etc.)

    - Solution: [Click Here](src/program1.cpp)

2. [`program2.cpp`] Write a function that accepts 3 integers: a, b, and c. If a is even, return the sum of all ints between b and c. Otherwise, return the product of all ints between b and c.

    - Solution: [Click Here](src/program2.cpp)

3. [`program3.cpp`] Write a function that accepts a decimal number and returns that number in Binary.

    - Solution: [Click Here](src/program3.cpp)

4. [`program4.cpp`] Write a function that accepts an integer n and returns the # of digits. Ex. 1234 returns 4.

    - Solution: [Click Here](src/program4.cpp)

5. [`program5.cpp`] Write a function that accepts an integer n and returns the reverse of the integer. Ex. 1234 returns 4321. Hint: Use your solution from Question 13 to help you solve this!

    - Solution: [Click Here](src/program5.cpp)

6. [`program6.cpp`] Write a function that accepts an integer n and displays the pyramid from Lab 4 program8.cpp with n rows. Note: This will cause the numbers to enter double digits, which will throw off the pyramid. Bound the output of the print statements between 0 and 9. Ex. 11->1, 12->2, 37->7, 50->0.

    - Solution: [Click Here](src/program6.cpp)