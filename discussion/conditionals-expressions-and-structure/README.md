# Expressions, Conditionals, and Program Structure

Remember your algebra and start thinking logically - let's talk about expressions as well as their relation to conditionals and program structure!

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20190801163131/What-is-an-Expression_-3.jpg" width="40%"/>

> An expression is a combination of operators, constants and variables. An expression may consist of one or more operands, and zero or more operators to produce a value.

via [GeeksForGeeks.org](https://www.geeksforgeeks.org/what-is-an-expression-and-what-are-the-types-of-expressions/#)

## Using Boolean Expressions for Conditionals

Knowing that expressions can come in a variety of different forms, let's think about how we can utilize them for conditional statements! In other words, let's take a look at **boolean expressions**.

First, what is a boolean expression? A **boolean expression** is a specific kind of expression whose value when evaluated results in **true** or **false** (sometimes **1** or **0**, respectively). For example, the code snippet below assigns a boolean variable in C++ to true or false depending on whether or not the value of x is greater than or equal to that of 25.

```c++
bool myBooleanExpression = (x >= 25);
```

**❓ Question 1.** Given the expression below, what would the value of ``isSomething`` be when x = 15?

```c++
bool isSomething = (x % 2 == 0);
```

<details> <summary>Answer</summary> <br>

``isSomething = false``

Because x % 2 returns the *remainder* of diving a number by 2, the result of checking that expression against 0 represents whether our value, x, is even (true) or odd (false).

</details> <br>

Now then, let's try applying what we've learned to a conditional statement. Conditional statements appear in most languages, often appearing and performing very similarly. In C++, the general syntax of a conditional statement is as follows:

```c++
if (boolean expression) {
    // Do something!
}
```

That said, there are a variety of different conditional statements. Here's a few more!

**If Else**

```c++
if (boolean expression) {
    // Do something if!
} else {
    // Do something else!
}
```

**Short Hand If Else**

```c++
bool variable = (boolean expression) ? <line to run if true> : <line to run if false>;
```

**Else If**

```c++
if (boolean expression) {
    // Do something if!
} else if (next boolean expression) {
    // Do something else if!
} else {
    // Do something else!
}
```

**Switch** (Similar to a chained else if but works directly with the value of any given expression rather than true/false in a boolean expression specifically.)

```c++
switch (expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```

**❓ Question 2.** Given the code snippet below, what would the program print when x = 10? x = 24?

```c++
int main () {
    int x;
    std::cin >> x;

    if (x % 3 == 0) {
        std::cout << "Divisible by 3!" << std::endl;
    } else if (x % 5 == 0) {
        std::cout << "Divisible by 5!" << std::endl;
    } else {
        std::cout << "What a boring, old number." << std::endl;
    }
}
```

<details> <summary>Answer</summary> <br>

When x = 10:

``Divisible by 5!``

When x = 24:

``Divisible by 3!``

</details> <br>

## Exercises

Pretty straightforward, right? Let's get conditional!

**❗️ Exercise 1.** Write a program that takes in a single integer representing inches as input and converts it to...

* Feet (12 inches)
* Yards (36 inches)
* Centimeters (2.54/inch)
* Meters (39.37 inches)

**❗️ Exercise 2.** Given a single integer 0 - 100, use a ``switch()`` statement to print out the grade corresponding to that number. You are welcome to select your own ranges for each grade, but if you would like to implement a real example, [try this one](https://bigfuture.collegeboard.org/plan-for-college/college-basics/how-to-convert-gpa-4.0-scale)!
