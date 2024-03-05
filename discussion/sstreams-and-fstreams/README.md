# String & File Streams

## Table of Contents

- [String \& File Streams](#string--file-streams)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [String Streams](#string-streams)
    - [Exercise](#exercise)
  - [File Streams](#file-streams)
    - [Reading from a File (Input)](#reading-from-a-file-input)
    - [Exercise](#exercise-1)
    - [Exercise](#exercise-2)

## Introduction

Up until this point in 211, we have used `std::cin` and `std::cout` to read input and write output for our programs. However, this isn't very realistic for real-world applications. Today, we'll cover how to use string and file streams to better handle inputs and output in C++.

## String Streams

First things first, let's include the library necessary to work with string streams:

```cpp
#include <sstream>
```

This library provides us with the `std::stringstream` class, which allows us to read from and write to strings in a way that is similar to that of `std::cin` and `std::cout`. Take, for example, the two snippets below.

```cpp
#include <iostream>

int main () {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << name << " is " << age << " years old." << std::endl;

    return 0;
}
```

Hopefully this first one isn't anything new to you. It's a simple program that asks the user for their name and age and then prints out a message with that information. Now, let's see how we can do the same thing using string streams:

```cpp
#include <iostream>
#include <sstream>

int main () {
    std::string line;
    std::string name;
    int age;

    std::cout << "Enter your name and age (separated by a space): ";
    std::getline(std::cin, line);

    std::iostringstream ss(line);
    ss >> name >> age;

    std::cout << name << " is " << age << " years old." << std::endl;

    return 0;
}
```

In this example, we use `std::getline` to read a line of input from the user, and then we use `std::istringstream` to read from that line as if it were `std::cin`. This allows us to use the same input and output patterns that we're used to, but with strings instead of the console.

Notice that we only include the `<sstream>` library despite using a `std::ifstream` object. This is because `std::ifstream` is a subclass of `std::istream`, which is included in the `<iostream>` library. The same is true for `std::ofstream` and `std::ostream`.

### Exercise

✅ [`exercise_1.cpp`] Now that you'e seen how to use string streams for input, try to write a program that uses string streams for output. The program should ask the user for their name and age and then print out a message with that information.

<details><summary>Solution</summary>

Here is a sample solution based upon what we've learned so far:

```cpp
#include <iostream>
#include <sstream>

int main () {
    // Create our variables to hold the input.
    std::string name;
    int age;

    // Prompt the user for their name and age.
    std::cout << "Enter your name and age (separated by a space): ";
    
    // Get the input from the user.
    std::string line;
    std::getline(std::cin, line);

    // Create our input string stream and extract the name and age.
    std::istringstream ss(line);
    ss >> name >> age;
    
    // Create our output string stream.
    std::ostringstream oss;

    // Output the message to the output string stream.
    oss << "Hello, " << name << ". You are " << age << " years old.";

    // Print the message to the console.
    std::cout << oss.str() << std::endl;

    return 0;
}
```

</details>

## File Streams

Now that we've covered string streams, we can utilize them in combination with file streams to read and write to files. This is a very common pattern in C++ and is used in many real-world applications.

### Reading from a File (Input)

To read from a file, we use the `std::ifstream` class. This class is a subclass of `std::istream`, which means that we can use it in the same way that we use `std::cin`. Here's an example of how to read from a file:

**Sample Program**:

```cpp
#include <iostream>
#include <fstream>

int main () {
    // Open the file to read our input from.
    std::ifstream file("input.txt");

    // Check if the file was opened successfully.
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Read the file line by line.
    std::string line;

    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Close the file.
    file.close();

    return 0;
}
```

**Sample Output**:

```plaintext
This is the first line of the file.
This is the second line of the file.
I like spaghetti and I think that fact belongs on line 3!
```

In this example, we use `std::ifstream` to open a file called `input.txt` and then we use `std::getline` to read the file line by line. This is a common pattern for reading from files, and it's a good way to avoid reading the entire file into memory at once.

**But wait!!!**

What if we want to parse through each line, separating the data by a delimiter - like a space, for example? We can use string streams to do this! Here's an example:

**Sample Program**:

```cpp
#include <iostream>
#include <fstream>
#include <sstream>

int main () {
    // Open the file to read our input
    std::ifstream file("input.txt");

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Read the file line by line
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string word;

        // Parse the line using a string stream
        while (ss >> word) {
            std::cout << word << std::endl;
        }
    }

    // Close the file
    file.close();

    return 0;
}
```

**Sample Output**:

```plaintext
This
is
the
first
line
of
the
file.
This
is
the
second
line
of
the
file.
I
like
spaghetti
and
I
think
that
fact
belongs
on
line
3!
```

In this example, we use `std::istringstream` to parse each line of the file into individual words. While the example is simple, it demonstrates how we can use string streams to parse data from a file in a way that is similar to how we parse data from the console.

### Exercise

✅ [`exercise_2.cpp`] Write a program that reads in the file below, summing all of the numbers in the file and printing out the total sum.

**Sample File**:

```plaintext
1 2 3 4 5
6 7 8 9 10
```

<details><summary>Solution</summary>

Here is a sample solution based upon what we've learned so far:

```cpp
#include <iostream>
#include <fstream>
#include <sstream>

int main () {
    // Open the file to read our input
    std::ifstream file("input.txt");

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Read the file line by line
    std::string line;
    int sum = 0;

    while (std::getline(file, line)) {
        std::istringstream ss(line);
        int number;

        // Parse the line using a string stream
        while (ss >> number) {
            sum += number;
        }
    }

    // Close the file
    file.close();

    // Print the sum to the console
    std::cout << "The sum of the numbers in the file is: " << sum << std::endl;

    return 0;
}
```

</details>
```

## Writing to a File (Output)

To write to a file, we use the `std::ofstream` class. This class is a subclass of `std::ostream`, which means that we can use it in the same way that we use `std::cout`. Here's an example of how to write to a file:

**Sample Program**:

```cpp
#include <iostream>
#include <fstream>

int main () {
    // Open the file to write our output to
    std::ofstream file("output.txt");

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Write to the file
    file << "This is the first line of the file." << std::endl;
    file << "This is the second line of the file." << std::endl;
    file << "I like spaghetti and I think that fact belongs on line 3!" << std::endl;

    // Close the file
    file.close();

    return 0;
}
```

In this example, we use `std::ofstream` to open a file called `output.txt` and then we use the `<<` operator to write to the file. This is a common pattern for writing to files, and it's a good way to avoid writing the entire file at once.

Unlike reading from a file, writing to a file is simple enough that we don't need to use string streams. However, if you want to format your output using `std::ostringstream` before writing it to a file, you can do so in the same way that you would format your output before writing it to the console.

### Exercise

✅ [`exercise_3.cpp`] Write a program that reads in the file below, summing all of the numbers in the file, and then writes the equation for the total sum and the sum itself to a new file called `output.txt`.

**Sample File**:

```plaintext
1 2 3 4 5
6 7 8 9 10
```

<details><summary>Solution</summary>

Here is a sample solution based upon what we've learned so far:

```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main () {
    // Open the file to read our input
    std::ifstream file("input.txt");

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Read the file line by line
    std::vector<int> numbers;
    std::string line;
    int sum = 0;

    while (std::getline(file, line)) {
        std::istringstream ss(line);
        int number;

        // Parse the line using a string stream
        while (ss >> number) {
            numbers.push_back(number);
            sum += number;
        }
    }

    // Close the file
    file.close();

    // Open the file to write our output to
    std::ofstream outputFile("output.txt");

    // Check if the file was opened successfully
    if (!outputFile.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    // Write the equation for the sum to the file
    outputFile << "Sum: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        outputFile << numbers[i];
        if (i != numbers.size() - 1) {
            outputFile << " + ";
        }
    }
    outputFile << " = " << sum << std::endl;

    // Close the file
    outputFile.close();

    return 0;
}
```