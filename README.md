### Overview: ###
This C program functions as a multi-functional utility, offering a variety of operations in an interactive format. It supports mathematical and logical operations, ranging from basic arithmetic to matrix operations, as well as date-based calculations. The user is prompted to choose a feature from the menu, and the program continues to offer options until the user opts to exit.

Here’s a quick guide to running the program:

### Option 1: Running the `.exe` File (Only For Windows Users ) ###

1. Download and Locate the `.exe` file on your computer.
2. Double-click the file to run it.
3. Follow the on-screen prompts to use the program.
4. To exit, select `0` from the menu.

### Option 2: Compile and Run Source Code ###

1. Install a C compiler (e.g., GCC, Code::Blocks, or Dev-C++).
2. Save the code as `program.c`.
3. Open Command Prompt or Terminal and navigate to the folder with the `.c` file.
4. Compile the code
   - For GCC: `gcc program.c -o program.exe` (Windows) or `gcc program.c -o program` (macOS/Linux).
5. Run the program
   - For Windows: `program.exe`.
   - For macOS/Linux: `./program`.

### Features: ###

1. Calculator:
   - This feature allows users to perform basic arithmetic operations:
     - **Addition**
     - **Subtraction**
     - **Multiplication**
     - **Division** (with validation to prevent division by zero).
   - After performing an operation, the user is given an option to continue with further calculations or exit.

2. Temperature Converter:
   - Converts temperatures between **Celsius** and **Fahrenheit** based on the user's selection.
     - Celsius to Fahrenheit conversion: \(F = \frac{9}{5} \times C + 32\)
     - Fahrenheit to Celsius conversion: \(C = \frac{(F - 32) \times 5}{9}\)

3. Quadratic Equation Solver:
   - Solves quadratic equations of the form \(a x^2 + b x + c = 0\).
   - It calculates the discriminant and determines whether the roots are:
     - **Real and Equal**
     - **Real and Distinct**
     - **Complex** (if the discriminant is negative).

4. Prime Number Checker:
   - Checks whether a given number is a **prime number**.
   - The program handles edge cases like **1** (not prime) and **0** (undefined).

5. Multiplication Table:
   - Generates a **multiplication table** for a single number (1-10).
   - Alternatively, it can generate multiplication tables for numbers within a specified **range**.

6. Square Root Calculator: 
   - Calculates the **square root** of a positive number.
   - The program ensures that the input is a positive integer, showing an error message for negative numbers.

7. Ascending/Descending Sort:
   - Sorts a list of numbers either in **ascending** or **descending** order.
   - The user can input the number of elements and their values, and the program will display them in the chosen order.

8. Day of a Date:
   - Calculates the **day of the week** for any given date (day, month, and year).
   - The program uses an algorithm (like Zeller's Congruence) to compute the day, displaying it as **Sunday**, **Monday**, etc.

9. Matrix Operations:
   - Performs **matrix addition** and **subtraction** for two matrices of the same size.
   - The user is prompted to enter the number of rows and columns for both matrices, followed by the matrix elements, and the program outputs the result of the chosen operation.


### User Experience: ###
- The user interacts with the program via a **menu-driven interface**.
- After each operation, the user is asked if they wish to continue with another operation or exit.
- The program keeps running until the user chooses to exit by pressing `0`.

### Example Interaction: ###
1. The user selects **1** for the calculator.
   - The program asks for two numbers and the operator.
   - It performs the calculation and displays the result.
   - Then, it prompts the user to either continue with more calculations or quit.

2. The user selects **2** for the temperature converter.
   - The program asks for the temperature and the desired conversion (Celsius to Fahrenheit or vice versa).
   - It performs the conversion and displays the result.
   - Then, it prompts the user to continue or quit.

### Exit: ###
- The user can exit the program at any time by selecting option `0` from the main menu, which will terminate the program with a message: *"Program Quitted Successfully. Thank you for using."*

This program is versatile and offers a range of features that cater to both basic and intermediate users who need assistance with mathematical operations and calculations.
