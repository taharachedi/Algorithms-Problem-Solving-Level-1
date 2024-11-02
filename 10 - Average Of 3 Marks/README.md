# 📚 Problem 10: Average of Three Numbers

## 📜 Description
This C++ program reads three integers from the user, calculates their sum and average, and displays the average. It demonstrates the use of reference parameters to capture input values.

The program includes the following features:
- 🔹 `ReadNum`: Prompts the user to enter three numbers and captures them by reference.
- 🔹 `Sum`: Computes the sum of the three numbers.
- 🔹 `Average`: Calculates the average based on the sum.
- 🔹 `Print`: Displays the average value.

## 💡 Code Explanation

- **📥 Function `ReadNum`**:
  - This function takes three integer references as parameters and prompts the user to enter values for each. The entered values are stored in the corresponding reference variables.

- **➕ Function `Sum`**:
  - Takes three integer parameters, computes their sum, and returns the total.

- **📊 Function `Average`**:
  - Calls the `Sum` function to get the total and calculates the average by dividing it by 3.

- **🖥️ Function `Print`**:
  - Accepts the average as a parameter and prints the result to the console.

- **📅 Function `main`**:
  - Declares three integer variables, calls `ReadNum` to populate them, and then computes and displays the average using `Average` and `Print`.

## ▶️ Execution Example
When you enter the following numbers:
- First Number: `5`
- Second Number: `10`
- Third Number: `15`

The program will display:
```plaintext
The Average is : 10
