# 📏 Problem 16: Calculate Rectangle Area Using Side and Diagonal

## 📜 Description
This C++ program calculates the area of a rectangle using one of its sides (`a`) and the diagonal (`d`). The area is calculated using the formula derived from the Pythagorean theorem. 

## 💡 Code Explanation

The program consists of the following functions:

- **📥 Function `Read`**:
  - This function prompts the user to input the side length `a` and the diagonal length `d` of the rectangle. Both values are captured by reference.

- **📐 Function `CalculArea`**:
  - This function takes the side length and diagonal as parameters and calculates the area of the rectangle. 
  - It leverages the `sqrt` and `pow` functions from the `<cmath>` library.

- **🖥️ Function `Print_float_Area`**:
  - This function takes the calculated area as a parameter and prints it to the console.

- **📅 Function `main`**:
  - Declares two float variables for the rectangle's dimensions.
  - Calls `Read` to populate these variables with user input.
  - Calls `CalculArea` to compute the area and then calls `Print_float_Area` to display the result.

## ▶️ Execution Example
When you enter the following values:
- Side `a`: `5`
- Diagonal `d`: `7`

The program will display:
```plaintext
The Rectangle Area is : 16.5832
