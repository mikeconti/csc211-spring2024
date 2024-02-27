# Lab 01: Solution Set

## Table of Contents

- [Lab 01: Solution Set](#lab-01-solution-set)
  - [Table of Contents](#table-of-contents)
  - [Questions](#questions)
  - [Programs](#programs)

## Questions

1. Describe some major differences between using a local or online version of the IDE.

    - The local version of an IDE is installed on your computer and runs on your computer. The online version of an IDE runs on a server and you access it through a web browser. The local version of an IDE is faster and more responsive than the online version. The online version of an IDE is more portable and can be accessed from any computer with an internet connection. The local version of an IDE is more secure because your files are stored on your computer. The online version of an IDE is less secure because your files are stored on a server.

2. Where are your files stored if using the online version vs the offline version?

    - The online version of the IDE stores your files on the server. The offline version of the IDE stores your files on your computer.

3. What are the PC and Mac hotkeys to create a new file?

    - PC: `Ctrl + N`
    - Mac: `Cmd + N`

4. Based on what you've heard so far about file systems, describe what you believe a file system is and some of the different ways you can navigate one using Shell commands.

    - A file system is a way to organize and store files on a computer, organized in a hierarchical structure. You can navigate a file system using shell commands by using commands like `cd` to change directories, `ls` to list files, `pwd` to print the working directory, and `mkdir` to make a new directory.

5. Create a directory named ``project-1``.

    - `mkdir project-1`

6. Enter the directory named ``project-1``.

    - `cd project-1`

7. Return to the parent directory.

    - `cd ..`

8. List all files in the current directory

    - `ls`

## Programs

1. ``hello.cpp``

```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}
```
