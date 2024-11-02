# 📚 Problem 13: Finding the Maximum of Three Numbers

## 📜 Description
This C++ program reads three integers from the user and determines the maximum value among them. It provides a straightforward method for finding the largest of three numbers.

The program includes the following features:
- 🔹 `ReadNum`: Prompts the user to enter three numbers and captures them by reference.
- 🔹 `Maximun`: Compares the three numbers and returns the largest one.
- 🔹 `Print`: Displays the maximum number.

## 💡 Code Explanation

- **📥 Function `ReadNum`**:
  - This function takes three integer references as parameters and prompts the user to enter values for each. The entered values are stored in the corresponding reference variables.

- **➕ Function `Maximun`**:
  - Accepts three integer parameters, compares them, and returns the largest value.

- **🖥️ Function `Print`**:
  - Takes the maximum value as a parameter and prints it to the console.

- **📅 Function `main`**:
  - Declares three integer variables, calls `ReadNum` to populate them, and then calculates and displays the maximum using `Maximun` and `Print`.

## ▶️ Execution Example
When you enter the following numbers:
- First Number: `15`
- Second Number: `20`
- Third Number: `10`

The program will display:
```plaintext
The Max is : 20
