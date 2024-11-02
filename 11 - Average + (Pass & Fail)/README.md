# 📚 Problem 11: Average of Three Numbers with Pass/Fail Check

## 📜 Description
This C++ program reads three floating-point numbers from the user, calculates their average, and checks whether the average is a passing mark. It provides an easy way to determine if a student has passed based on their average score.

The program includes the following features:
- 🔹 `ReadNumber`: Prompts the user to enter three numbers and captures them by reference.
- 🔹 `Sum`: Computes the sum of the three numbers.
- 🔹 `Average`: Calculates the average based on the sum.
- 🔹 `checkMark`: Determines if the average is a passing score.
- 🔹 `Print`: Displays the average and the result of the pass/fail check.

## 💡 Code Explanation

- **📥 Function `ReadNumber`**:
  - This function takes three float references as parameters and prompts the user to enter values for each. The entered values are stored in the corresponding reference variables.

- **➕ Function `Sum`**:
  - Takes three float parameters, computes their sum, and returns the total.

- **📊 Function `Average`**:
  - Calls the `Sum` function to get the total and calculates the average by dividing it by 3.

- **✅ Function `checkMark`**:
  - Accepts the average as a parameter and returns an enumeration value indicating whether the average is a pass or fail (based on a threshold of 50).

- **🖥️ Function `Print`**:
  - Accepts the average as a parameter, prints the result, and checks if the average is a passing score.

- **📅 Function `main`**:
  - Declares three float variables, calls `ReadNumber` to populate them, and then computes and displays the average using `Average` and `Print`.

## ▶️ Execution Example
When you enter the following numbers:
- First Number: `60`
- Second Number: `70`
- Third Number: `80`

The program will display:
```plaintext
The Average is : 70
Pass 
