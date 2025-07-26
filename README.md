# C++ Experiment 6: To study and implement C++ looping statements

## Aim

To:
1. Understand the usage of different types of loops in C++.
2. Implement loops (`for`, `while`) with control statements such as `continue` and `exit(0)`.
3. Use loops to handle repeated execution, filtering, and logical tasks like reversing a number and validating password attempts.

---

## Tool Used

VS Code

---

## Objectives

- To understand the syntax and flow of `for`, `while`, and nested loops.
- To implement `continue` and `exit(0)` to alter the control flow inside loops.
- To apply loops to solve real-world logic problems like filtering even numbers, reversing digits, or limiting password attempts.
- To understand how loop control helps manage repetition without manual duplication.

---

## Theory

### Looping in C++
Looping allows a set of instructions to be executed repeatedly based on a condition. C++ supports three primary types of loops: `for`, `while`, and `do-while`.

---

### 1. For Loop

- The `for` loop is used when the number of iterations is known.
- Syntax:
  ```cpp
  for(initialization ; condition ;  step - increment or decrement ){
      // loop body
  }
  ```
#### Execution Steps

- **Initialize** the loop control variable.
- **Check** the loop condition.
- If the **condition is true**, execute the loop body.
- **Update** the loop variable (increment/decrement).
- Repeat the process until the condition becomes false.


--- 

### 2. While Loop
- The while loop is used when the number of iterations is not known beforehand.
- The loop continues until the condition becomes false.
- Syntax:
 ```cpp
while(condition){
    // loop body
}
```
--- 

### 3. Do-While Loop (not used in this experiment but part of loop family)
- The loop body executes at least once, even if the condition is false initially.
- After executing the body, the condition is checked.
- If the condition is true, the loop continues; otherwise, it exits.
- Syntax :
```cpp
do {
    // code to be executed
} while(condition);
```
### Loop Control Statements
1. continue: Skips the current iteration and jumps to the next loop cycle.
2. exit(0): Terminates the program immediately. Often used after success/failure cases like password validation.

---

## Header File: `<cstring>`
- The `<cstring>` header file in C++ provides functions for manipulating C-style strings, which are arrays of characters ending with a null character (`'\0'`).
- It is the C++ version of the C standard library `<string.h>`.

### Key Points:
- Used to perform operations on character arrays, not `std::string`.
- Contains standard string handling functions for copying, comparing, and modifying C-style strings.
- Works directly with raw character pointers (`char[]`), commonly used in lower-level programming.
-  Always ensure the destination arrays have enough space to avoid buffer overflows.

### Commonly Used Functions:

| Function      | Purpose                                        |
|---------------|------------------------------------------------|
| `strlen()`    | Returns the length of a C-string               |
| `strcpy()`    | Copies one C-string into another               |
| `strcat()`    | Concatenates (joins) two C-strings             |
| `strcmp()`    | Compares two C-strings                         |
| `strchr()`    | Finds first occurrence of a character in string|
| `strstr()`    | Finds first occurrence of a substring          |

--- 

## Application-Based Use Cases
1. Repeating a task multiple times
2. Calculating sum or product of numbers
3. Searching for an element in an array
4. Counting occurrences of a specific value
5. Printing number or symbol patterns
6. Validating user input until it is correct
7. Creating menu-driven programs
8. Reversing a number or string
9. Authenticating user credentials with limited attempts
10. Reading data from files line by line
11. Generating multiplication tables
12. Implementing timers or delays
13. Simulating real-time processes or animations
14. Traversing strings or arrays
15. Performing repeated mathematical operations (e.g., factorial, power)

--- 

##  Program Description

- **Program 1**: *Print even numbers from 0 to 10 using a for loop*  
  - A `for` loop is used to iterate from 0 to 10.
  - Each number is checked using the modulus operator `%` to determine if it is even.
  - The `continue` statement is used to skip odd numbers and move to the next iteration.

- **Program 2**: *Print the word "SIT" five times using a for loop*  
  - Demonstrates the use of a `for` loop to perform a task repeatedly.
  - Eliminates the need to manually write the same print statement multiple times.

- **Program 3**: *Password validation using a while loop*  
  - A `while` loop is used to give the user up to 5 attempts to enter the correct password.
  - The `strcmp()` function is used to compare the entered password with the correct one.
  - If the password is correct, `exit(0)` terminates the program immediately.
  - If all attempts are exhausted, the user is shown a failure message and the program ends.

- **Program 4**: *Reverse a number using a while loop*  
  - The program extracts the last digit of a number using `% 10`.
  - Builds the reversed number by multiplying and adding the digits step by step.
  - The original number is reduced by dividing by 10 in each iteration until it reaches 0.
 
- **Program 5**: *Print 15 different star/number/alphabet patterns using nested loops*  
  - Uses nested `for` loops to create complex patterns.
  - Demonstrates control of rows and columns for character placement.
  - Patterns include:
    1. **Right-angled Triangle** — increasing stars by row.
    2. **Inverted Right-angled Triangle** — decreasing stars by row.
    3. **Mirrored Right-angled Triangle** — right-aligned triangle using spaces.
    4. **Simple Equilateral Triangle** — centered triangle with increasing `*`.
    5. **Inverted Equilateral Triangle** — reverse of above.
    6. **Complex Equilateral Triangle** — pyramid without spacing between stars.
    7. **Number Triangle** — ascending numbers printed row-wise.
    8. **Diamond Pattern** — symmetric triangle top and bottom.
    9. **Hourglass Pattern** — inverted then upright triangle with spaces.
    10. **Row Number Pyramid** — repeated row numbers per line.
    11. **Mirrored Number Triangle** — each row starts with increasing sequence.
    12. **Alphabet Pyramid** — same letter (like `A`, `B`,...) repeated in row.
    13. **Continuous Alphabet Pyramid** — A-Z printed continuously in pyramid form.
    14. **Half Diamond Pattern** — grows then shrinks in star count.
    15. **Mirrored Right-angled Triangle (Full)** — triangle followed by inverted triangle for mirror effect.
  - Helps visualize control structures like nested loops and spacing logic for shape alignment.

---

## Concepts Used
- `for` and `while` loops.
- Loop initialization, condition, and update.
- `if`, `else`, and nested conditions.
- `continue`, `exit(0)`.
- `%`and `/` for digit manipulation.
- `strcmp()` for string comparison.
- User-defined variables and user input handling.
- Use of `cstring` header file for string based operations.

---

## Sample Output
1. Even-Odd Filter using for loop and continue
```
0
2
4
6
8
10
```
2. Repeating Message using for loop
```
SIT
SIT
SIT
SIT
SIT
```

3. Password Validation using while and strcmp()
```
Enter your Password	Dhakshayini
Oh-Oh Wrong password, Try again
Enter your Password	Dhakshayini44
Hooray Unlocked!
```
```
Enter your Password	Dhakshayini
Oh-Oh Wrong password, Try again
Enter your Password	v
Oh-Oh Wrong password, Try again
Enter your Password	Dhakshayini
Oh-Oh Wrong password, Try again
Enter your Password	Dhakshayini
Oh-Oh Wrong password, Try again
Enter your Password	Dhakshayini
Come Back Later, You have a forgetfull brain!!
```
4. Reversing a Number using while
```
Enter a number: 1234
Reversed number: 4321

Enter a number: 550
Reversed number: 55
```
5. Pattern Printing
``` 
Enter the number of rows :
5
*
**
***
****
*****

*****
****
***
**
*

    *
   **
  ***
 ****
*****

    * 
   * * 
  * * * 
 * * * * 
* * * * * 

* * * * * 
 * * * * 
  * * * 
   * * 
    * 

     *
    ***
   *****
  *******
 *********

1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15	

    *
   * *
  * * *
 * * * *
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

 * * * * *
  * * * *
   * * *
    * *
     *
    * *
   * * *
  * * * *
 * * * * *

1	
2	2	
3	3	3	
4	4	4	4	
5	5	5	5	5	

    1
   23
  345
 4567
56789

A
BB
CCC
DDDD
EEEEE

A
BC
DEF
GHIJ
KLMNO

 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
```
