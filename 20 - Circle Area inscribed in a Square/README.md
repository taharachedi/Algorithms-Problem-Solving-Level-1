# 🟡 Problem 20: Calculate Circle Area from Square Side Length

## 📜 Description
This C++ program calculates the area of a circle based on the side length (`A`) of a square that circumscribes it. The program approximates \(\pi\) as 3.14 for the calculations.

## 💡 Code Explanation

The program consists of the following functions:

- **📥 Function `Read`**:
  - Prompts the user to input the side length (`A`) of the square and returns it as a float.

- **📏 Function `CalculArea`**:
  - Takes the side length of the square as a parameter and calculates the area of the circle inscribed within it. It uses the `pow` function from the `<cmath>` library to compute \(A^2\) and returns the area.

- **🖥️ Function `Print`**:
  - Takes the calculated area as a parameter and prints it to the console.

- **📅 Function `main`**:
  - Calls `Read` to get the side length from the user.
  - Calls `CalculArea` to compute the area of the circle.
  - Calls `Print` to display the result.

## ▶️ Execution Example
When you enter the following value:
- Square Side `A`: `10`

The program will display:
```plaintext
The Circle Area is : 78.5
