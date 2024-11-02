# 🟡 Problem 21: Calculate Circle Area from Circumference

## 📜 Description
This C++ program calculates the area of a circle based on its circumference (`L`). 

## 💡 Code Explanation

The program consists of the following functions:

- **📥 Function `ReadAreaCircumference`**:
  - Prompts the user to input the circumference (`L`) of the circle and returns it as a float.

- **📏 Function `CalculCircleArea`**:
  - Takes the circumference as a parameter and calculates the area of the circle.
  - It uses the `pow` function from the `<cmath>` library to compute \(L^2\) and returns the area.

- **🖥️ Function `Print`**:
  - Takes the calculated area as a parameter and prints it to the console.

- **📅 Function `main`**:
  - Calls `ReadAreaCircumference` to get the circumference from the user.
  - Calls `CalculCircleArea` to compute the area of the circle.
  - Calls `Print` to display the result.

## ▶️ Execution Example
When you enter the following value:
- Circumference `L`: `31.4`

The program will display:
```plaintext
The Circle Area Along The Circumference is : 78.5
