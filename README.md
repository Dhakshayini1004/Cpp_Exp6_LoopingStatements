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
  ```
  for(initialization ; condition ;  step - increment or decrement ){
      // loop body
  }
  ```
-Execution steps:
-- Initialize loop variable.
-- Check condition.
-- If condition is true, execute loop body.
-- Update the variable.

--- 

### 2. While Loop
- The while loop is used when the number of iterations is not known beforehand.
- The loop continues until the condition becomes false.
- Syntax:
 ```
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
```
do {
    // code to be executed
} while(condition);
```
### Loop Control Statements
1. continue: Skips the current iteration and jumps to the next loop cycle.
2. exit(0): Terminates the program immediately. Often used after success/failure cases like password validation.

---

### Header File: `<cstring>`
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

##Application-Based Use Cases
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

## Program Description
- The first program demonstrates a for loop that prints even numbers from 0 to 10.
-- It checks each number using the modulus operator (%) to determine evenness.
-- The continue statement is used to skip odd numbers and continue to the next iteration.

- The second program uses a for loop to print the word "SIT" five times.
-- It highlights how repetitive tasks can be handled using loops instead of writing the same line multiple times.

- The third program uses a while loop for password validation.
-- It allows the user up to 5 attempts to input the correct password using strcmp() for comparison.
-- If the password is correct, exit(0) is used to immediately terminate the program.
-- If the user fails all 5 attempts, a message is shown and the program exits.

- The fourth logic (to be written separately) involves reversing a number using a while loop.
-- It repeatedly extracts the last digit of the number using % 10.
-- The reversed number is constructed step by step using multiplication and addition.
-- The original number is reduced by dividing by 10 in each iteration until it becomes zero

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

4. Reversing a Number using while
```
Enter a number: 1234
Reversed number: 4321

Enter a number: 550
Reversed number: 55
```
