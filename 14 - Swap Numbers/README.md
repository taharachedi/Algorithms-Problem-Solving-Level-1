# 📚 Problem 14: Swapping Two Numbers

## 📜 Description
This C++ program reads two integers from the user, displays them, and then swaps their values. The program illustrates how to use reference parameters to modify variable values.

The program consists of the following functions:
- 🔹 `ReadNumber`: Prompts the user to enter two integers and captures them by reference.
- 🔹 `Swap`: Swaps the values of the two integers using a temporary variable.
- 🔹 `Print`: Displays the current values of the two integers.

## 💡 Code Explanation

- **📥 Function `ReadNumber`**:
  - This function takes two integer references as parameters and prompts the user to enter values for each. The entered values are stored in the corresponding reference variables.

- **🔄 Function `Swap`**:
  - Accepts two integer references as parameters and swaps their values using a temporary variable.

- **🖥️ Function `Print`**:
  - Takes two integer parameters and prints their values to the console.

- **📅 Function `main`**:
  - Declares two integer variables, calls `ReadNumber` to populate them, prints their initial values, swaps them using the `Swap` function, and prints the swapped values.

## ▶️ Execution Example
When you enter the following numbers:
- First Number: `10`
- Second Number: `20`

The program will display:
```plaintext
Number 1: 10
Number 2: 20

Number 1: 20
Number 2: 10
