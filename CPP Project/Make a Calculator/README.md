# Project: Advanced Calculator
 ## Project Overview:
This is an advanced command-line calculator built using C++. It supports a wide range of operations, including arithmetic, logarithmic functions, trigonometric operations, number system conversions, and combinatorial functions. The calculator can handle basic mathematical operations, factorials, permutations, combinations, logarithms, angle-based trigonometric functions (like sine, cosine, tangent, etc.), and various number system conversions (binary, octal, decimal, hexadecimal).

## Features of the Calculator:
### Arithmetic Operations:

Addition: Sum of multiple numbers.
Multiplication: Product of multiple numbers.
Subtraction: Difference between two numbers.
Division: Quotient of two numbers with error handling for division by zero.
Exponentiation: Power calculation (raising one number to the power of another).
Factorial, Permutation, and Combination:

Factorial: Calculates the factorial of a given number.
Permutation: Calculates permutations of n items taken r at a time.
Combination: Calculates combinations of n items taken r at a time.
Logarithmic Functions:

Logarithm: Computes logarithms for any base.
Natural Logarithm (ln): Computes the natural logarithm (base e).
Trigonometric Functions:

Sine (sin): Calculates the sine of an angle.
Cosine (cos): Calculates the cosine of an angle.
Tangent (tan): Calculates the tangent of an angle.
Cotangent (cot): Calculates the cotangent of an angle.
Secant (sec): Calculates the secant of an angle.
Cosecant (csc): Calculates the cosecant of an angle.
(Note: All trigonometric calculations use degrees as input.)
Number System Conversion:

Binary to Decimal: Converts binary numbers to decimal.
Octal to Decimal: Converts octal numbers to decimal.
Hexadecimal to Decimal: Converts hexadecimal numbers to decimal.
Decimal to Binary, Octal, and Hexadecimal: Converts a decimal number to binary, octal, or hexadecimal.
Binary to Octal and Hexadecimal: Converts binary to octal or hexadecimal.
Octal to Binary and Hexadecimal: Converts octal to binary or hexadecimal.
Hexadecimal to Binary and Octal: Converts hexadecimal to binary or octal.
Error Handling:

Error handling for division by zero in division operations.
Validation for invalid user inputs in operations.

## Project Structure:
### Functions:

Arithmetic Operations: Handles addition, multiplication, subtraction, division, and power calculations.
Factorial, Permutation, Combination: Performs calculations for factorials, permutations, and combinations using recursive and formula-based logic.
Logarithmic Calculations: Computes logarithms for any base and natural logarithms using built-in logarithmic functions.
Trigonometric Functions: Calculates various trigonometric operations like sine, cosine, tangent, etc., using the math library.
Number System Conversion: Handles conversions between different number systems (binary, octal, decimal, hexadecimal).
### Main Program:
The program prompts the user to choose an operation from a menu and then performs the chosen operation.
It loops to allow multiple operations until the user chooses to exit.
## How to Use the Calculator:
### Run the Program:
Upon running the program, the user is greeted with a welcome message containing basic information about the project (name, roll number, session, etc.).

### Menu Options:
The user is prompted with a menu of available options:
Arithmetic Functions: Choose from addition, multiplication, subtraction, division, and exponentiation.
Permutation & Combination: Choose from factorial, permutations, or combinations.
Logarithmic Functions: Calculate logarithms and natural logarithms.
Number System Conversion: Convert numbers between binary, octal, decimal, and hexadecimal.
Trigonometric Functions: Perform trigonometric operations such as sine, cosine, tangent, etc.
Exit: Exit the program.
### Perform Operations:
Based on the selected option, the user inputs the required values and receives the result.
For example, when choosing the arithmetic functions, the user is prompted to input the numbers for the operation (e.g., for addition, how many numbers they wish to add).
### Exit:
The program continues to run until the user chooses the exit option (6).
#### Technologies Used:
Language: C++
Libraries:
<cmath> for mathematical operations (e.g., trigonometric functions, logarithms).
<iostream> for input/output operations.
<string> for handling string operations during number system conversions.
## Potential Improvements:
GUI Interface: Implement a graphical user interface (GUI) to make the user experience more interactive.
Advanced Operations: Implement more advanced mathematical functions such as matrices, derivatives, or integrals.
Error Handling: Improve input validation and error messages for invalid user inputs.
## Conclusion:
This calculator project demonstrates a solid understanding of C++ programming, mathematical logic, and function handling. It provides a comprehensive set of functionalities that are useful for solving common mathematical and computational problems, all within a simple command-line interface.
