# Pointers

What is a pointer?

> A pointer is a special type of variable whose value is the **memory address** of another variable.

Need some extra review? [Read the lecture slides!](https://github.com/mikeconti/csc211-fall2023/blob/main/lecture/lecture11.pdf)

Here's a simple example of what that might look like...

```C++
#include <iostream>

int main () {
    int value = 25;
    int * pointer = &value;

    // We know that the statement below outputs "25".
    std::cout << value << std::endl;

    // What does this statement do?
    std::cout << pointer << std::endl;

    // How about this one?
    std::cout << (*pointer) << std::endl;

    return 0;
}
```

Take a moment to consider the code above. Despite looking very similar, the two print statements after printing our value behave quite differently. Think you know what's going on? Check your answer below!

<details><summary>Answer</summary>

- ``std::cout << pointer << std::endl;`` outputs the **memory address** the pointer is pointing to.
- ``std::cout << (*pointer) << std::endl;`` dereferences the pointer and outputs the **value stored** at that memory address.

</details>

## Exercise #1: Adding Pointers to Addition

Now that you're beginning to see how pointers work, let's try implementing them at a basic level! Using the code given below, write a function that uses pointers to set the value of ``sum`` equal to that of ``a + b``.

```C++
#include <iostream>

void pointerSum (int a, int b, int * sum);

int main () {
    int a, b, sum;

    std::cout << "Enter two numbers a and b...\na = ";
    std::cin >> a;

    std::cout << "b = ";
    std::cin >> b;

    pointerSum(a, b, &sum);

    std::cout << "The sum of " << a << " and " << b << " is " << sum << "." << std::endl;
}

void pointerSum (int a, int b, int * sum) {
    // Write the contents of your function here.
    // Don't overthink it!
}
```

<details><summary>Answer</summary>

For this program to function as intended, you need only write one line under the function header ``pointerSum()``!

```C++
void pointerSum (int a, int b, int * sum) {
    // We must dereference the sum pointer to change its value.
    (*sum) = a + b;
}
```

Notice - the function is of ``void`` type, so no values may be returned from it. Instead, we dereference our pointer ``sum`` pointer and set its value equal to the sum of ``a`` and ``b``. This essentially allows us to return a value from a function even though it's of ``void`` type!

</details>

## Pointers with Arrays

You may remember from past lectures that arrays hold the memory address of their first element - sound familiar? That's right, arrays are just pointers!

When working with arrays, you can consider them *pointers* to their first element, which makes things a whole lot easier. Say, for example, you're passing an array to a function. In the past, we would have done something like this...

```C++
void someFunction (int someArray[]) {
    // Does something with our array.
}
```

This is a totally valid approach - and runs exactly the same as...

```C++
void someFunction (int * someArray) {
    // Does something with our array.
}
```

The nice thing about this interchangeability is that, sometimes, pointers can make working with arrays easier. Often times, 2D arrays are used to store large quantities of data, but passing 2D arrays into functions can be a pain if you're not sure of their size when writing the function. Pointers allow us to avoid this problem (to an extent). Instead of the usual approach, which looks like this...

```C++
void some2DFunction (int someArray[][someSize]) {
    // Does something with our 2D array.
}
```

...we can do the following, which doesn't require us to know the value of ``someSize``...

```C++
void some2DFunction (int ** someArray) {
    // Does something with our 2D array.
}
```

That said, you must be careful - it can be difficult to keep track of pointers, especially when you're just beginning to understand how they work!

## Example #2: Summing up Arrays

Now that we've learned a bit about pointers with regard to arrays, let's see if we can finish the program below. Notice that this program builds off of Example #1's program - you can look back if you need to!

```C++
#include <iostream>

void pointerSum (int a, int b, int * sum);
void arraySum (int * array, int size, int * sum);

int main () {
    int a, b, sum = 0;
    int myArray[5];

    std::cout << "Enter five numbers..." << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "myArray[" << i << "] = ";
        std::cin >> myArray[i];
    }

    // Notice that arrays are passed by reference, so we don't need to use the & operator.
    arraySum(myArray, 5, &sum);

    std::cout << "The sum of these 5 digits is " << sum << "." << std::endl;
}

void pointerSum (int a, int b, int * sum) {
    (*sum) = a + b;
}

void arraySum (int * array, int size, int * sum) {
    // Write the contents of your function here.
}
```

<details><summary>Answer</summary>

I'm sure it's a little weird to create and use our own function for addition, but hopefully it helps clear up some confusion around how pointers work! If done correctly, your function looks something like this...

```C++
void arraySum (int * array, int size, int * sum) {
    for (int i = 0; i < size; i++) {
        // Temporary variable to hold our result from pointerSum().
        int result = 0;

        // Call pointerSum() to add the next item in the array.
        pointerSum((*sum), array[i], &result);

        // Update our sum with the result of our pointerSum() call.
        (*sum) = result;
    }
}
```

</details>
