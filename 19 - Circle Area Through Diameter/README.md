# 🟡 Problem 19: Calculate Circle Area from Diameter

## 📜 Description
This C++ program calculates the area of a circle based on the diameter (`D`) provided by the user. The program approximates \(\pi\) as 3.14 for the calculations.

## 💡 Code Explanation

The program consists of the following functions:

- **📥 Function `Read`**:
  - Prompts the user to input the diameter (`D`) of the circle and returns it as a float.

- **📏 Function `CalculCircleArea`**:
  - Takes the diameter as a parameter and calculates the area of the circle. It uses the `pow` function from the `<cmath>` library to compute \(D^2\) and returns the area.

- **🖥️ Function `Print`**:
  - Takes the calculated area as a parameter and prints it to the console.

- **📅 Function `main`**:
  - Calls `Read` to get the diameter from the user.
  - Calls `CalculCircleArea` to compute the area of the circle.
  - Calls `Print` to display the result.

## ▶️ Execution Example
When you enter the following value:
- Diameter `D`: `10`

The program will display:
```plaintext
The Circle Area : 78.5
