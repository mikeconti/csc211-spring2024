# Exam#01 Review

- [Exam#01 Review](#exam01-review)
  - [Table of Contents](#table-of-contents)
  - [Exam Information](#exam-information)
- [Exam Topics](#exam-topics)
  - [The Command Line](#the-command-line)
    - [Exercises](#exercises)
  - [Number Systems](#number-systems)
    - [Decimal to Binary](#decimal-to-binary)
    - [Binary to Decimal](#binary-to-decimal)
    - [Decimal to Hexadecimal](#decimal-to-hexadecimal)
    - [Hexadecimal to Decimal](#hexadecimal-to-decimal)
    - [Exercises](#exercises-1)
  - [Conditionals, Expressions \& Program Structure](#conditionals-expressions--program-structure)
    - [Conditionals](#conditionals)
    - [Expressions](#expressions)
    - [Program Structure](#program-structure)
    - [Exercises](#exercises-2)
  - [Loops \& Nested Loops](#loops--nested-loops)
    - [Loops](#loops)
    - [Nested Loops](#nested-loops)

## Exam Information

Your first exam will be in class on Thursday, February 22, 2024. You are permitted a single 8.5" x 11" sheet of paper with notes (hand-written) on both sides. The exam will otherwise be closed book and closed notes.

# Exam Topics

## The Command Line

The Command Line is a text-based interface to the computer. It is a program that takes commands from the keyboard and gives them to the operating system to perform. The command line is a quick, powerful, text-based interface developers use to more effectively and efficiently communicate with computers to accomplish a wider set of tasks.

So, how do we use the command line? There are a great variety of commands that can be used to interact with the command line. Here are a few of the most common commands:

- `ls` - list the contents of the current directory
- `cd` - change the current directory
- `pwd` - print the current working directory
- `mkdir` - make a new directory
- `rmdir` - remove a directory
- `touch` - create a new file
- `rm` - remove a file
- `cp` - copy a file
- `mv` - move a file
- `cat` - concatenate and display the contents of a file
- `man` - display the manual page for a command

As a reminder, the command line views the file system as a tree. The root of the tree is `/` and the branches are the directories. The leaves are the files. The command line starts at the root of the tree and the current directory is the root. The command line can move around the tree by changing the current directory.

### Exercises

1. What command would you use to create a new directory called `project-1`?

<details><summary>Answer</summary>

`mkdir project-1`

</details><br>

2. How would you move into the `project-1` directory?

<details><summary>Answer</summary>

`cd project-1`

</details><br>

3. What command would you use to create a new file called `index.html`?

<details><summary>Answer</summary>

`touch index.html`

</details><br>

1. How might you rename the `index.html` file to `home.html`?

<details><summary>Answer</summary>

`mv index.html home.html`

</details><br>

5. What command would you use to list the contents of the current directory?

<details><summary>Answer</summary>

`ls`

</details><br>

## Number Systems

In computer science, we often work with numbers in different bases. The most common bases are base-2 (binary), base-10 (decimal), and base-16 (hexadecimal). Here are a few examples of numbers in different bases:

- `0b1010` - binary
- `0d10` - decimal
- `0xA` - hexadecimal

The binary number system is base-2, which means it uses only two digits: 0 and 1. The decimal number system is base-10, which means it uses ten digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9. The hexadecimal number system is base-16, which means it uses sixteen digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, and F.

Converting between different bases is a common task in computer science. Here are a few examples of how to convert between different bases:

### Decimal to Binary

To convert a decimal number to a binary number, you can use the following algorithm:

1. Divide the decimal number by 2.
2. Get the integer quotient for the next iteration.
3. Get the remainder for the binary digit.
4. Repeat the steps until the quotient is equal to 0.
5. The binary number is the remainder read from bottom to top.

For example, to convert the decimal number 10 to a binary number:

```plaintext
10 / 2 = 5 remainder 0
5 / 2 = 2 remainder 1
2 / 2 = 1 remainder 0
1 / 2 = 0 remainder 1
```

So, the binary number is `1010`.

### Binary to Decimal

To convert a binary number to a decimal number, you can use the following formula:

```plaintext
d = (b0 * 2^0) + (b1 * 2^1) + (b2 * 2^2) + ... + (bn * 2^n)
```

Where `d` is the decimal number and `b0`, `b1`, `b2`, ..., `bn` are the binary digits.

### Decimal to Hexadecimal

To convert a decimal number to a hexadecimal number, you can use the following algorithm:

1. Divide the decimal number by 16.
2. Get the integer quotient for the next iteration.
3. Get the remainder for the hexadecimal digit. If the remainder is greater than 9, use the corresponding letter (A, B, C, D, E, or F).
4. Repeat the steps until the quotient is equal to 0.
5. The hexadecimal number is the remainder read from bottom to top.

For example, to convert the decimal number 200 to a hexadecimal number:

```plaintext
200 / 16 = 12 remainder 8
12 / 16 = 0 remainder 12
```

So, the hexadecimal number is `C8`.

### Hexadecimal to Decimal

To convert a hexadecimal number to a decimal number, you can use the following formula:

```plaintext
d = (h0 * 16^0) + (h1 * 16^1) + (h2 * 16^2) + ... + (hn * 16^n)
```

Where `d` is the decimal number and `h0`, `h1`, `h2`, ..., `hn` are the hexadecimal digits.

### Exercises

1. Convert the decimal number ``42`` to a binary number.

<details><summary>Answer</summary>

```plaintext
42 / 2 = 21 remainder 0
21 / 2 = 10 remainder 1
10 / 2 = 5 remainder 0
5 / 2 = 2 remainder 1
2 / 2 = 1 remainder 0
1 / 2 = 0 remainder 1
```

So, the binary number is `101010`.

</details><br>

2. Convert the binary number `101101` to a decimal number.

<details><summary>Answer</summary>

```plaintext
d = (1 * 2^0) + (0 * 2^1) + (1 * 2^2) + (1 * 2^3) + (0 * 2^4) + (1 * 2^5)
  = 1 + 0 + 4 + 8 + 0 + 32
  = 45
```

So, the decimal number is `45`.

</details><br>

3. Convert the decimal number `255` to a hexadecimal number.

<details><summary>Answer</summary>

```plaintext
255 / 16 = 15 remainder 15
15 / 16 = 0 remainder 15
```

So, the hexadecimal number is `FF`.

</details><br>

4. Convert the hexadecimal number `1A3` to a decimal number.

<details><summary>Answer</summary>

```plaintext
d = (3 * 16^0) + (10 * 16^1) + (1 * 16^2)
  = 3 + 160 + 256
  = 419
```

So, the decimal number is `419`.

</details><br>

## Conditionals, Expressions & Program Structure

### Conditionals

In C++ and in programming in general, conditionals are used to make decisions. A conditional is a statement that controls the flow of execution based on whether a condition is true or false. The most common conditional statement is the `if` statement. Here is an example of an `if` statement in C++:

```cpp
if (condition) {
  // code to execute if the condition is true
}
```

In this example, the `condition` is a boolean expression. If the `condition` is true, the code inside the curly braces is executed. If the `condition` is false, the code inside the curly braces is skipped.

In addition to the `if` statement, there are other conditional statements that can be used to make decisions. Here are a few examples:

- `if-else` statement
- `switch` statement

### Expressions

An expression is a combination of values, variables, operators, and functions that are evaluated to produce a result. For example, `x + 1` is an expression that adds `x` and `1` together. Expressions can be used in many places in C++ code, such as in assignments, function calls, and conditional statements.

### Program Structure

In C++, a program is a collection of functions. A function is a block of code that performs a specific task. The `main` function is the entry point of a C++ program. When a C++ program is run, the `main` function is called first. Here is an example of a simple C++ program:

```cpp
#include <iostream>

int main() {
  std::cout << "Hello, world!" << std::endl;
  return 0;
}
```

In this example, the `main` function uses the `std::cout` object to print the message "Hello, world!" to the console. The `return 0` statement is used to indicate that the program executed successfully.

Now, let's implement some simple conditional statements and expressions in C++.

```cpp
#include <iostream>

int main() {
  int x;
  std::cout << "Enter a number: ";
  std::cin >> x;

  if (x > 5) {
    std::cout << "x is greater than 5" << std::endl;
  } else {
    std::cout << "x is less than or equal to 5" << std::endl;
  }

  return 0;
}
```

In this example, the `main` function uses the `std::cin` object to read a number from the console and stores it in the variable `x`. Then, it uses an `if-else` statement to check if `x` is greater than 5. If it is, it prints the message "x is greater than 5". Otherwise, it prints the message "x is less than or equal to 5".

### Exercises

1. Write a C++ program that prompts the user to enter a number and then prints whether the number is even or odd.

<details><summary>Answer</summary>

```cpp
#include <iostream>

int main() {
  int x;
  std::cout << "Enter a number: ";
  std::cin >> x;

  if (x % 2 == 0) {
    std::cout << "x is even" << std::endl;
  } else {
    std::cout << "x is odd" << std::endl;
  }

  return 0;
}
```

</details><br>

## Loops & Nested Loops

### Loops

In C++ and other languages that support structured programming, loops are used to execute a block of code repeatedly. There are several types of loops that can be used in C++:

- `while` loop
- `do-while` loop
- `for` loop
- `range-based for` loop

Here are a few examples of how to use loops in C++:

```cpp
#include <iostream>

int main() {
  int i = 0;

  while (i < 5) {
    std::cout << i << std::endl;
    i++;
  }

  return 0;
}
```

In this example, the `main` function uses a `while` loop to print the numbers from 0 to 4 to the console.

```cpp
#include <iostream>

int main() {
  int i = 0;

  do {
    std::cout << i << std::endl;
    i++;
  } while (i < 5);

  return 0;
}
```

In this example, the `main` function uses a `do-while` loop to print the numbers from 0 to 4 to the console.

```cpp
#include <iostream>

int main() {
  for (int i = 0; i < 5; i++) {
    std::cout << i << std::endl;
  }

  return 0;
}
```

In this example, the `main` function uses a `for` loop to print the numbers from 0 to 4 to the console.

```cpp
#include <iostream>

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  for (int x : arr) {
    std::cout << x << std::endl;
  }

  return 0;
}
```

In this example, the `main` function uses a `range-based for` loop to print the numbers from 1 to 5 to the console.

### Nested Loops

Loops may also be nested, meaning that one loop can be inside another loop. Here is an example of a nested loop in C++:

```cpp
#include <iostream>

int main() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << i << " " << j << std::endl;
    }
  }

  return 0;
}
```

In this example, the `main` function uses a `for` loop to iterate over the numbers from 0 to 2. Inside the outer loop, there is another `for` loop that iterates over the numbers from 0 to 2. The result is that the numbers from 0 to 2 are printed in a grid pattern to the console.

Here is the output of the program:

```plaintext
0 0
0 1
0 2
1 0
1 1
1 2
2 0
2 1
2 2
```
