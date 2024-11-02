# 📐 Problem 17: Calculate Triangle Area

## 📜 Description
This C++ program calculates the area of a triangle using its base (`a`) and height (`h`).

## 💡 Code Explanation

The program consists of the following functions:

- **📥 Function `ReadTriangleArea`**:
  - This function prompts the user to input the base (`a`) and height (`h`) of the triangle. Both values are captured by reference.

- **📐 Function `CalculArea`**:
  - This function takes the base and height as parameters and calculates the area of the triangle.
  - It returns the area as a float.

- **🖥️ Function `Print`**:
  - This function takes the calculated area as a parameter and prints it to the console.

- **📅 Function `main`**:
  - Declares two integer variables for the triangle's dimensions.
  - Calls `ReadTriangleArea` to populate these variables with user input.
  - Calls `CalculArea` to compute the area and then calls `Print` to display the result.

## ▶️ Execution Example
When you enter the following values:
- Base `a`: `10`
- Height `h`: `5`

The program will display:
```plaintext
The Triangle Area is : 25
