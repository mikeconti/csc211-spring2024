# String & File Streams

## Table of Contents

- [String \& File Streams](#string--file-streams)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [String Streams](#string-streams)
    - [Input String Streams](#input-string-streams)
    - [Output String Streams](#output-string-streams)
  - [File Streams](#file-streams)
    - [Input File Streams](#input-file-streams)
    - [Output File Streams](#output-file-streams)
    - [Safety First - Always Close Your Files](#safety-first---always-close-your-files)
  - [Streams \& Error Handling](#streams--error-handling)
  - [Exercises](#exercises)

## Introduction

Prior to now, we have been using the standard input and output streams, `std::cin` and `std::cout`, to read and write data from the terminal. However, most real-world applications don't run through the terminal, so it's important to learn how to use streams to read and write data from other sources.

## String Streams

The first kind of stream we'll discuss is called a [string stream](https://cplusplus.com/reference/sstream/stringstream/stringstream/). String streams are used to read and write data to and from strings. There are three types of string streams: **input**, **output**, and **input/output**, which are declared as `std::istringstream`, `std::ostringstream`, and `std::stringstream`, respectively.

To keep things simle and since ``std::stringstream`` works essentially as a combination of ``std::istringstream`` and ``std::ostringstream``, we'll focus on the input and output string streams for now.

### Input String Streams

Starting with input streams, let's say you have a string that contains a number, and you want to convert that string into an integer. You can use an input string stream to do this without the use of something like ``std::stoi()`` or ``std::atoi()``.

**Example**: Convert a string to an integer using an input string stream.

```cpp
#include <iostream>
#include <sstream> // Include the sstream library
#include <string>

int main() {
    // Declare the input string
    std::string input;

    // Get the input from the user
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);

    // Declare an input string stream
    std::istringstream inputStream(input);

    // Declare an integer to store the converted value
    int number;

    // Read the integer from the input stream
    inputStream >> number;

    // Output the converted integer
    std::cout << "The number you entered was: " << number << std::endl;

    return 0;
}
```

**Output**:

```bash
Enter a number: 42
The number you entered was: 42
```

In this example, we first declare a string called `input` to store the user's input. We then use `std::getline()` to get the input from the user. Next, we declare an input string stream called `inputStream` and pass the `input` string to it. Finally, we declare an integer called `number` and use the input stream to read the integer from the string.

### Output String Streams

Output string streams work incredibly similar to ``std::cout`` with the added benefit of being able to better manipulate strings and, like input streams, easily convert other data types to strings.

**Example**: Given a line of input, reverse the order of the words using an output string stream. We'll also include an input string stream to read the words from the input and give us a better understanding of how to use both input and output string streams together.

```cpp
#include <iostream>
#include <sstream> // Include the sstream library
#include <string>
#include <vector>

int main() {
    // Declare the input string
    std::string input;

    // Get the input from the user
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, input);

    // Declare an output string stream
    std::ostringstream outputStream;

    // Declare a vector to store the words
    std::vector<std::string> words;

    // Declare an input string stream
    std::istringstream inputStream(input);

    // Read the words from the input stream
    std::string word;

    while (inputStream >> word) {
        words.push_back(word);
    }

    // Reverse the order of the words
    for (int idx = 0; idx < words.size(); idx++) {
        outputStream << words[words.size() - idx - 1] << " ";
    }

    // Output the reversed line of text
    std::cout << "The reversed line of text is: " << outputStream.str() << std::endl;

    return 0;
}
```

**Output**:

```bash
Enter a line of text: Hello, world! This is a test.
The reversed line of text is: test. a is This world! Hello,
```

In this example, we first use an input string stream to read the words from the input line and store them in a vector. Notice how simple it is to read the words from the input stream using the `>>` operator? It's just like reading from `std::cin`! That aside, though, we then use an output string stream to reverse the order of the words and output the reversed line of text. Nothing too fancy, but it's a great way to see how input and output string streams can be used together.

## File Streams

The second kind of stream we'll discuss is called a [file stream](https://cplusplus.com/reference/fstream/fstream/). File streams are used to read and write data to and from files on your computer. There are three types of file streams: **input**, **output**, and **input/output**, which are declared as `std::ifstream`, `std::ofstream`, and `std::fstream`, respectively.

Similarly to string streams, we'll focus on the input and output file streams for now, as `std::fstream` works essentially as a combination of `std::ifstream` and `std::ofstream`.

### Input File Streams

Starting with input streams, let's say you have a file that contains a list of numbers, and you want to read those numbers into a vector. Using an input file stream, you can easily do just that in just a few lines of code.

**Example**: Read a list of numbers from a file into a vector.

```cpp
#include <iostream>
#include <fstream> // Include the fstream library
#include <vector>

int main() {
    // Declare the input file stream
    std::ifstream inputFile("numbers.txt");

    // Declare a vector to store the numbers
    std::vector<int> numbers;

    // Read the numbers from the file
    int number;

    while (inputFile >> number) {
        numbers.push_back(number);
    }

    // Output the numbers
    std::cout << "The numbers in the file are: ";

    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}
```

Assuming the given **input** is...

```plaintext
1 2 3 4 5 6 7 8 9 10
```

...the **output** will be...

```bash
The numbers in the file are: 1 2 3 4 5 6 7 8 9 10
```

In this example, we first declare an input file stream called `inputFile` and provide it the name of the file we'd like to read from. We then declare a vector called `numbers` to store the numbers read from the file and use a while loop to read them into the vector. Finally, we output the numbers to the terminal. It's that simple!

### Output File Streams

Output file streams work similarly to input file streams, but instead of reading data from a file, you write data to a file. Let's say you have a vector of numbers and you want to write those numbers to a file. Using an output file stream, you can easily do just that in a way that you'll notice feels quite familiar.

**Example**: Write a vector of numbers to a file.

```cpp
#include <iostream>
#include <fstream> // Include the fstream library
#include <vector>

int main() {
    // Declare the output file stream
    std::ofstream outputFile("numbers.txt");

    // Declare a vector of numbers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Write the numbers to the file
    for (int num : numbers) { // Loop through the numbers
        outputFile << num << " "; // Write the number to the file
    }

    // Output the success message
    std::cout << "The numbers have been written to the file." << std::endl;

    return 0;
}
```

**Output (terminal)**:

```bash
The numbers have been written to the file.
```

**Output (numbers.txt)**:

```plaintext
1 2 3 4 5 6 7 8 9 10
```

In this example, we first declare an output file stream called `outputFile` and provide it the name of the file we'd like to write to. We then declare a vector called `numbers` and write each number to the file using a for loop. Finally, we output a success message to the terminal. It's that simple!

### Safety First - Always Close Your Files

When working with file streams, it's important to close the file after you're done reading from or writing to it. This is done using the `close()` function on the file stream you're working with.

That call should look something like this:

```cpp
inputFile.close();
```

or

```cpp
outputFile.close();
```

It's important to close the file after you're done with it to ensure that the data you've written to the file is saved and that the file is properly closed. If you don't close the file, the data you've written to it may not be saved, and the file may remain open, which can cause issues when trying to access the file later on.

## Streams & Error Handling

When working with streams, it's important to handle errors that may occur. For example, if you try to open a file that doesn't exist, the file stream will fail, and you'll need to check for this failure before proceeding. You can do this by checking the stream's state using the `fail()` function.

**Example**: Check if a file stream has failed to open a file.

```cpp
#include <iostream>
#include <fstream> // Include the fstream library

int main() {
    // Declare the input file stream
    std::ifstream inputFile("nonexistent.txt");

    // Check if the file stream has failed
    if (inputFile.fail()) {
        std::cerr << "Error: Failed to open file." << std::endl;
        return 1;
    }

    return 0;
}
```

Alternatively, you can use the `is_open()` function to check if the file stream has successfully opened a file.

**Example**: Check if a file stream has successfully opened a file.

```cpp
#include <iostream>
#include <fstream> // Include the fstream library

int main() {
    // Declare the input file stream
    std::ifstream inputFile("numbers.txt");

    // Check if the file stream is open
    if (!inputFile.is_open()) {
        std::cerr << "Error: Failed to open file." << std::endl;
        return 1;
    }

    return 0;
}
```

In both examples, we first declare an input file stream and provide it the name of the file we'd like to open. We then check if the file stream has failed to open the file using the `fail()` function in the first example and the `is_open()` function in the second example. If the file stream has failed to open the file, we output an error message to the terminal and return a non-zero value to indicate that an error occurred.

## Exercises

✅ [``exercise01.cpp``]: Write a program that uses string streams to read a line of text from the user and output the number of words in the line.

> **Solution**: [``exercise01.cpp``](src/exercise01.cpp)

✅ [``exercise02.cpp``]: Write a program that uses string streams that, given a line of input, removes all the vowels from the line using output string streams and outputs the modified line.

> **Solution**: [``exercise02.cpp``](src/exercise02.cpp)

✅ [``exercise03.cpp``]: Write a program that uses file streams to read a list of numbers from a file and output the sum of the numbers.

> **Solution**: [``exercise03.cpp``](src/exercise03.cpp)

✅ [``exercise04.cpp``]: Write a program that uses file streams to read a list of numbers from a file and write the sum of the numbers to a new file.

> **Solution**: [``exercise04.cpp``](src/exercise04.cpp)
