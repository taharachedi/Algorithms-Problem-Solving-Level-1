# 📚 Problem 9: Sum of Three Numbers

## 📜 Description
This C++ program reads three integers from the user, calculates their sum, and displays the total. It demonstrates the use of reference parameters to capture input values.

The program includes the following features:
- 🔹 `ReadNumber`: Prompts the user to enter three numbers and captures them by reference.
- 🔹 `Sum`: Computes the sum of the three numbers.
- 🔹 `Print`: Displays the total sum.

## 💡 Code Explanation

- **📥 Function `ReadNumber`**:
  - This function takes three integer references as parameters and prompts the user to enter values for each. The entered values are stored in the corresponding reference variables.

- **➕ Function `Sum`**:
  - Takes three integer parameters, computes their sum, and returns the total.

- **🖥️ Function `Print`**:
  - Accepts the total as a parameter and prints the result to the console.

- **📅 Function `main`**:
  - Declares three integer variables, calls `ReadNumber` to populate them, and then computes and displays the total using `Sum` and `Print`.

## ▶️ Execution Example
When you enter the following numbers:
- First Number: `5`
- Second Number: `10`
- Third Number: `15`

The program will display:
```plaintext
The Total is : 30
