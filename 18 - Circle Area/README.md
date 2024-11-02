# 🟡 Problem 18: Calculate Circle Area

## 📜 Description
This C++ program calculates the area of a circle based on the radius (`r`) provided by the user. 


## 💡 Code Explanation

The program consists of the following functions:

- **📥 Function `Read`**:
  - Prompts the user to input the radius (`r`) of the circle and returns it as a float.

- **📏 Function `CalculArea`**:
  - Takes the radius as a parameter and calculates the area of the circle 
  - It uses the `pow` function from the `<cmath>` library to compute \(r^2\) and returns the area.

- **🖥️ Function `Print`**:
  - Takes the calculated area as a parameter and prints it to the console.

- **📅 Function `main`**:
  - Calls `Read` to get the radius from the user.
  - Calls `CalculArea` to compute the area of the circle.
  - Calls `Print` to display the result.

## ▶️ Execution Example
When you enter the following value:
- Radius `r`: `5`

The program will display:
```plaintext
The Circle Area is : 78.5
