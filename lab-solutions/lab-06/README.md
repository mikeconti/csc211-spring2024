# Lab #06: Solution Set

## Table of Contents

- [Lab #06: Solution Set](#lab-06-solution-set)
  - [Table of Contents](#table-of-contents)
  - [Questions](#questions)
  - [Programs](#programs)
    - [For programs 1-6, you will be using C-style strings](#for-programs-1-6-you-will-be-using-c-style-strings)
    - [For programs 7-9, you will be using the string and stringstream classes from C++](#for-programs-7-9-you-will-be-using-the-string-and-stringstream-classes-from-c)

## Questions

```cpp
char myString[10];
```

1. What is the largest size string we could store into this variable?

    - The largest size string we could store into this variable is 9 characters. The
    last character in the array is reserved for the null terminator.

2. What is the largest size string we could store into an arbitrary variable of size n?

    - The largest size string we could store into an arbitrary variable of size n is
    `n - 1` characters. The last character in the array is reserved for the null
    terminator.

3. What do you think will happen if a string has no null terminator?

    - If a string has no null terminator, the program will continue to read memory
    until it finds a null terminator. This could cause the program to crash or
    produce unexpected results.

4. What does this mean we can do with strings to look for where it ends?

    - We can use a loop to iterate through the string until we find the null
    terminator. This will allow us to determine the length of the string.

5. Look through the documentation for the String class. Learn what the copy() function does, demonstrate you understand how to use it by writing a function utilizing it, and write a comment explaining what each parameter to the function is, as well as what is happening.

    - The `copy()` function is used to copy a substring of a string to another string. The
    function signature is as follows:

    ```cpp
    string copy(size_t pos, size_t len, const string& str);
    ```

    - The `pos` parameter is the position of the first character to be copied. The `len`
    parameter is the number of characters to be copied. The `str` parameter is the string
    to be copied to.

    - Here is an example of how to use the `copy()` function:

    ```cpp
    string str = "Hello, World!";
    string newStr = str.copy(7, 5, "");
    cout << newStr << endl; // Output: World
    ```

    - In this example, the `copy()` function is used to copy the substring "World" from the
    `str` variable to the `newStr` variable.

6. Look through the documentation for the String class. Learn what the swap() function does, demonstrate you understand how to use it by writing a function utilizing it, and write a comment explaining what each parameter to the function is, as well as what is happening.

    - The `swap()` function is used to swap the contents of two strings. The function
    signature is as follows:

    ```cpp
    void swap(string& str);
    ```

    - The `str` parameter is the string to be swapped with the calling string.

    - Here is an example of how to use the `swap()` function:

    ```cpp
    string str1 = "Hello";
    string str2 = "World";
    str1.swap(str2);
    cout << str1 << endl; // Output: World
    cout << str2 << endl; // Output: Hello
    ```

    - In this example, the `swap()` function is used to swap the contents of the `str1` and
    `str2` variables.

7. Look through the documentation for the String class. Learn what the insert() function does, demonstrate you understand how to use it by writing a function utilizing it, and write a comment explaining what each parameter to the function is, as well as what is happening. Note that this function has multiple versions, why is that?

    - The `insert()` function is used to insert a substring into a string. The function
    signature is as follows:

    ```cpp
    string& insert(size_t pos, const string& str);
    ```

    - The `pos` parameter is the position at which the substring will be inserted. The
    `str` parameter is the string to be inserted.

    - Here is an example of how to use the `insert()` function:

    ```cpp
    string str = "Hello!";
    str.insert(5, " World");
    cout << str << endl; // Output: Hello World!
    ```

    - In this example, the `insert()` function is used to insert the substring " World" into
    the `str` variable at position 5.

    - The `insert()` function has multiple versions because it can be used to insert
    substrings at different positions in the string.

## Programs

### For programs 1-6, you will be using C-style strings

1. [`program1.cpp`] Implement in C++ a function with the following header unsigned int string_len(char str[]) that will return the length of the str parameter(not including the null terminator).

    - Solution: [Click Here](src/program1.cpp)

2. [`program2.cpp`] Implement in C++ a function with the following header void replace(char str[], char a, char b) that will replace every instance of character a in the str parameter with character b. (We wrote psuedocode for this problem earlier in the semester so feel free to reference it for this problem)

    - Solution: [Click Here](src/program2.cpp)

3. [`program3.cpp`] Implement in C++ a function with the following header bool palindrome(char str[]) that will return true if the str parameter is a palindrome(that is to say that the string is spelled the same way forwards and backwards, E.G. tacocat, racecar, etc.), and false otherwise. For this particular question you can assume you will always et input that is all lowercase and contains no spaces. (Hint: your string_len function from earlier wll be useful here)

    - Solution: [Click Here](src/program3.cpp)

4. [`program4.cpp`] Implement in C++ a function with the following header void reverse(char str[]) that will reverse the str parameter.

    - Solution: [Click Here](src/program4.cpp)

5. [`program5.cpp`] Implement in C++ a function with the following header void remove(char str[], char a) that will remove the first occurence of character a from the str parameter. (Note: you will have to shift over the rest of the string after removing the character)

    - Solution: [Click Here](src/program5.cpp)

6. [`program6.cpp`] Implement in C++ a function with the following header void all_to(char str[], bool caps) that will change all of the characters in the str parameter to their uppercase equivalent if caps is True or change all of the character in str to their lowercase equivalent if caps is False.

    - ASCII Table Solution: [Click Here](src/program6-ASCII.cpp)
    - toUpper/tolower Solution: [Click Here](src/program6-TO.cpp)

### For programs 7-9, you will be using the string and stringstream classes from C++

7. [`program7.cpp`] Using sstream: Write a C++ program that reads a string containing two numbers separated by a space, adds them together, and outputs the result.

    - Solution: [Click Here](src/program7.cpp)

8. [`program8.cpp`] Using sstream: Write a C++ program that reads a string containing multiple words separated by spaces, counts the number of words, and outputs the count.

    - Solution: [Click Here](src/program8.cpp)

9. [`program9.cpp`] Using sstream: Write a C++ program that reads a string containing a sequence of integers separated by commas, calculates the sum of the integers, and outputs the result.

    - Solution: [Click Here](src/program9.cpp)
