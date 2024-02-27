# Functions

> A function is a group of statements that, together, perform a task (packaged as a unit).

[Click Here](https://github.com/mikeconti/csc211-fall2023/blob/main/lecture/lecture07.pdf) to review the lecture notes on functions!

## Main Takeaways

When writing and working with functions, there are a few key aspects to consider...

- A function must be defined before it is called.
- Parameters to functions must be given a type and a name, but as long as the typing is correct, the name need not matter.
- All non-void type functions must have a return statement that returns some value of the same type as the function.
- Generally, a function should have one clear task to accomplish.

## Exercise #1: The Power Function

Using what you know now about functions, try to complete the program below so that the ``power()`` function returns a number num raised to a power exp.

You need not modify the ``main()`` function.

```c++
long int power (int num, int exp) {
    // Complete this function so it returns num^exp.
    // DO NOT use the built-in pow() function from C++.
}

int main () {
    int num_in, exp_in;
    std::cout << "Enter any number and the power you'd like to raise it to: ";
    std::cin >> num_in >> exp_in;

    std::cout << "Result: " << power(num_in, exp_in) << std::endl;

    return 0;
}
```

## Exercise #2: The Void Type

As we know, a function of type ``void`` has no return value, but we can still use pointers and/or references to get a value from a ``void`` function.

Knowing this, try to rewrite the power function from example #1 using the code provided below. You need not modify the ``main()`` function.

```c++
void power (int num, int exp, long int & result) {
    // Complete this function so result = num^exp.
    // DO NOT use the built-in pow() function from C++.
}

int main () {
    int num_in, exp_in;
    std::cout << "Enter any number and the power you'd like to raise it to: ";
    std::cin >> num_in >> exp_in;

    long int result;
    power(num_in, exp_in, result);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
```
