# Lab 04: Solution Set

## Table of Contents

- [Lab 04: Solution Set](#lab-04-solution-set)
  - [Table of Contents](#table-of-contents)
  - [Questions](#questions)
  - [Programs](#programs)

## Questions

1. What do you think you can do to get the program to print 10 using the variable i?

    - You can change the condition in the for loop to `i < 11` or `i <= 10`.

2. How could you format an infinite for loop?

    - You can format an infinite for loop by using `for (;;) { ... }` or, in while form, `while (true) { ... }`.

3. For the following code, identify first if there is a syntax error. If so identify why and indicate how to fix the error. If the syntax is correct indicate what semantic error is present, if there is one, and how to fix it.

    ```cpp
        #include <iostream>
    int main(){
        for (int i = 0 ; i < 10 ; ++i) {
            int j = 10 + i;
            j += 12;
            std::cout << j << '\n';
            --i;
        }
    }
    ```

    - There is no syntax error in the code. However, there is a semantic error. The `--i` statement will cause an infinite loop. To fix this, you can remove the `--i` statement.

4. For the following code, identify first if there is a syntax error. If so identify why and indicate how to fix the error. If the syntax is correct indicate what semantic error is present, if there is one, and how to fix it.

    ```cpp
    #include <iostream>
    int main(){
        int i = 0;
        while (true) {
            i++;
            if(i == 10) continue;
        }
        if(i > 1) std::cout << i << std::endl;
    }
    ```

5. For the following code, identify first if there is a syntax error. If there is one, identify why and indicate how to fix the error. If the syntax is correct indicate what semantic error is present and how to fix it.

    ```cpp
    #include <iostream>
    int main(){
        int i = 0;
        for (i ; i < 10 ; ++i);
        if(i == 9) std::cout << i << std::endl;
    }
    ```

    - There is no syntax error in the code. However, there is a semantic error. The `for` loop is not doing anything. To fix this, you can remove the semicolon after the `for` loop.

6. For the following code, identify first if there is a syntax error. If there is, identify why and indicate how to fix the error. If the syntax is correct indicate what semantic error is present and how to fix it.

    ```cpp
    #include <iostream>
    int main(){
        int i = 1;
        while (!i) {
            i++;
            if (i == 10) break;
        }
        if(i == 10) std::cout << i << std::endl;
    }
    ```

    - There is no syntax error in the code. However, there is a semantic error. The `while` loop will not execute because `!i` will always be false. To fix this, you can change the condition to `i != 10`.

7. What is the value of sum once this program ends?

    ```cpp
    #include <iostream>
    int main(){
        int sum = 0;
        for (int i = 1; i <= 5 ; i++) {
            for (int j = i ; j > 0; j--) {
                sum += i * j;
            }
        }
    }
    ```

    - The value of `sum` will be 35.

## Programs

1. [`program1.cpp`] Implement a program to get a number from the user and print out all numbers up to the given input value with a for loop.

    - Solution: [lab-04/src/program1.cpp](src/program1.cpp)

2. [`program2.cpp`] Implement an program to infinitely get input from the user and print it out, which will stop when the user enters a 0 with a for loop.

    - Solution: [lab-04/src/program2.cpp](src/program2.cpp)

3. [`program3.cpp`] Replicate program1 using a while loop.

    - Solution: [lab-04/src/program3.cpp](src/program3.cpp)

4. [`program4.cpp`] Replicate program2 using a while loop.

    - Solution: [lab-04/src/program4.cpp](src/program4.cpp)

5. [`program5.cpp`] Write the code that would complete the outlined program.

    ```cpp
    #include <iostream>
    int main(){
        int sum = 0;
        
        // Loop i = 1 -> 10
            // If i is even
                //Loop j = 1 -> 5
                    // Add i * j to sum
            // Else
                // Loop j = (10 - i) -> 5
                    // Add i * j to sum
    }
    ```

    - Solution: [lab-04/src/program5.cpp](src/program5.cpp)

6. [`program6.cpp`] Implement a nested loop structure that will create the pyramid shown below.

    ```plaintext
    *
    ***
    *****
    *******
    ```

    - Solution: [lab-04/src/program6.cpp](src/program6.cpp)

7. [`program7.cpp`] Implement a nested loop structure that will create the pyramid shown below.

    ```plaintext
         *
        ***
       *****
      *******
    ```

    - Solution: [lab-04/src/program7.cpp](src/program7.cpp)

8. [`program8.cpp`] Implement a nested loop structure that will create the pyramid shown below.

    ```plaintext
         1
        232
       34543
      4567654
    ```

    - Solution: [lab-04/src/program8.cpp](src/program8.cpp)

9. [`program9.cpp`] Implement a nested loop structure that will create the pattern shown below with a constant height of 4 and width of 14.

    ```plaintext
    !!!!!!!!!!!!!!
    \\!!!!!!!!!!//
    \\\\!!!!!!////
    \\\\\\!!//////
    ```

    - Solution: [lab-04/src/program9.cpp](src/program9.cpp)
