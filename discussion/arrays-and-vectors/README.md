# Arrays & Vectors

## Table of Contents

- [Arrays \& Vectors](#arrays--vectors)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Starting Simple: Arrays](#starting-simple-arrays)
    - [Arrays Exercise](#arrays-exercise)
  - [Vectors: The Dynamic Array](#vectors-the-dynamic-array)
    - [Vectors Exercise](#vectors-exercise)
  - [Multidimensional Arrays \& Vectors](#multidimensional-arrays--vectors)
    - [2D Arrays \& Vectors Exercise](#2d-arrays--vectors-exercise)

## Introduction

They're here, they're there, they're contiguous in memory - it's time to talk about arrays and vectors! These are the bread and butter of data structures, and they're used in almost every program you'll write. In this discussion, we'll cover the basics of arrays and vectors, and then dive into some of the more advanced topics, like multidimensional arrays and vectors of vectors.

## Starting Simple: Arrays

![Array Diagram](https://media.geeksforgeeks.org/wp-content/uploads/20230810103814/Arrays-in-C.png)

An array is a contiguous block of memory that holds a fixed number of items. The items in the array are all of the same type, and they're stored in a sequence. You can access the items in an array using an index, which is a number that represents the position of the item in the array. The index of the first item in the array is 0, and the index of the last item in the array is the number of items in the array minus 1.

Here's an example of an array in C++:

```cpp
#include <iostream>

int main () {
    int myArray[5] = {1, 2, 3, 4, 5};
    
    std::cout << myArray[0] << std::endl; // prints 1
    std::cout << myArray[1] << std::endl; // prints 2
    std::cout << myArray[2] << std::endl; // prints 3
    std::cout << myArray[3] << std::endl; // prints 4
    std::cout << myArray[4] << std::endl; // prints 5
    
    return 0;
}
```

In this example, we declare an array called `myArray` that holds 5 integers. We initialize the array with the values 1, 2, 3, 4, and 5, and then we print out each of the values using the array's indices.

You can also use a loop to iterate through the items in an array:

```cpp
#include <iostream>

int main () {
    int myArray[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++) {
        std::cout << myArray[i] << std::endl;
    }
    
    return 0;
}
```

In this example, we use a `for` loop to iterate through the items in the array and print them out. This is a common pattern for working with arrays, and it's a good way to avoid writing repetitive code. It's also great for when you don't know the size of the array at compile time or used user input to determine the size of the array.

Speaking of which, you can also use user input to determine the size and contents of an array:

```cpp
#include <iostream>

int main () {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    int myArray[size];
    
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a value for index " << i << ": ";
        std::cin >> myArray[i];
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << myArray[i] << std::endl;
    }
    
    return 0;
}
```

### Arrays Exercise

✅ [`exercise_1.cpp`] Write a program that asks the user for the size of an array and then asks the user for the contents of the array. After the user has entered the contents of the array, the program should print out the contents of the array in reverse order.

## Vectors: The Dynamic Array

Similar to arrays, vectors are a sequence of elements of a single type. However, unlike arrays, vectors can change in size. This is because vectors are implemented as dynamic arrays, which means that they can grow and shrink as needed. This makes vectors a very flexible and powerful data structure.

Here's an example of a vector in C++:

```cpp
#include <iostream>
#include <vector>

int main () {
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    for (int i = 0; i < myVector.size(); i++) {
        std::cout << myVector.at(i) << std::endl;
    }

    return 0;
}
```

In this example, we declare a vector called `myVector` that holds 5 integers. We initialize the vector with the values 1, 2, 3, 4, and 5, and then we print out each of the values using the vector's `at` method. But wait - what's that `size` method? And what's the `at` method? Let's break it down:

- The `size` method returns the number of items in the vector.
- The `at` method returns the item at a given index in the vector.

There are a few other methods that you can use to work with vectors, like `push_back`, `erase`, and `insert`. These methods allow you to add, remove, and modify items in the vector, and they're what make vectors so powerful. If you are interested in seeing the many methods that vectors have, you can check out the [C++ reference](https://en.cppreference.com/w/cpp/container/vector).

You can also use user input to determine the size and contents of a vector:

```cpp
#include <iostream>
#include <vector>

int main () {
    int num_elements;
    std::cin >> num_elements;

    std::vector<int> myVector;
    
    for (int i = 0; i < num_elements; i++) {
        std::cout << "Enter a value for index " << i << ": ";
        std::cin >> myVector.at(i);
    }
    
    for (int i = 0; i < num_elements; i++) {
        std::cout << myVector.at(i) << std::endl;
    }
    
    return 0;
}
```

### Vectors Exercise

✅ [`exercise_2.cpp`] See if you can modify the previous program to print out the contents of a vector rather than an array in reverse order.

## Multidimensional Arrays & Vectors

So far, we've only talked about one-dimensional arrays and vectors. But what if you want to store a grid of items, like a chessboard or a spreadsheet? That's where multidimensional arrays and vectors come in.

First, it's important to identify whether you need a 2D array or a 2D vector. The general rule of thumb is to use a 2D array if you know the size of the grid at compile time, and to use a 2D vector if you don't. This is because 2D arrays are more efficient than 2D vectors, but 2D vectors are more flexible than 2D arrays where they can grow and shrink as needed.

Here's an example of a 2D array in C++:

```cpp
#include <iostream>

int main () {
    int myArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << myArray[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
```

In this example, we declare a 2D array called `myArray` that holds 3 rows and 3 columns. We initialize the array with the values 1 through 9, and then we print out each of the values using a nested `for` loop.

Here is that same example, but using a 2D vector instead:

```cpp
#include <iostream>
#include <vector>

int main () {
    std::vector<std::vector<int>> myVector = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < myVector.size(); i++) {
        for (int j = 0; j < myVector.at(i).size(); j++) {
            std::cout << myVector.at(i).at(j);
        }
        std::cout << std::endl;
    }

    return 0;
}
```

In this example, we declare a 2D vector called `myVector` that holds 3 rows and 3 columns. We initialize the vector with the values 1 through 9, and then we print out each of the values using a nested `for` loop. Notice that we use the `size` method to get the number of rows in the vector, and the `at` method to get the number of columns in each row. This just furthers the point that vectors are more flexible than arrays, though they may be less efficient.

### 2D Arrays & Vectors Exercise

✅ [`exercise_3.cpp`] Write a program that asks the user for the size of a 2D array and then asks the user for the contents of the array. After the user has entered the contents of the array, the program should print out the contents of the array. **No need to reverse anything for this example!**
