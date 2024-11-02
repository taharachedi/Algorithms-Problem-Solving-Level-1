# 📏 Problem 15: Calculate Rectangle Area

## 📜 Description
This C++ program calculates the area of a rectangle based on user input for its width and height. The program demonstrates the use of functions for reading input, calculating the area, and printing the result.

## 💡 Code Explanation

The program consists of the following functions:

- **📥 Function `Read`**:
  - This function prompts the user to input the dimensions of the rectangle (width and height) and captures these values by reference.

- **📐 Function `CalculArea`**:
  - This function takes the width and height as parameters and calculates the area of the rectangle using the formula: `Area = width * height`.

- **🖥️ Function `Print`**:
  - This function takes the calculated area as a parameter and prints it to the console.

- **📅 Function `main`**:
  - Declares two integer variables for the rectangle's dimensions.
  - Calls `Read` to populate these variables with user input.
  - Calls `CalculArea` to compute the area and then calls `Print` to display the result.

## ▶️ Execution Example
When you enter the following values:
- Width (a): `5`
- Height (b): `10`

The program will display:
```plaintext
The Rectangle Area is: 50
