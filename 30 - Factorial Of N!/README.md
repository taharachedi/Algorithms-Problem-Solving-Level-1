# 🌟 Problem 30: Factorial Calculator

> **Calculate the factorial of a positive number** using this straightforward C++ program.

## 🧩 Project Overview
This program prompts the user to input a positive integer and calculates its factorial using a simple iterative method. It's a practical demonstration of loops and functions in C++.

---

## 🌟 Features
- **📥 User Input**: Prompts the user to enter a positive number.
- **🔢 Factorial Calculation**: Computes the factorial of the input number using a `for` loop.
- **🖨️ Clear Output**: Displays the calculated factorial clearly.

---

## ⚙️ How It Works
1. **Input Number**: The program repeatedly asks the user for a positive integer until a valid number is entered.
2. **Factorial Calculation**: 
   - The factorial of the number \( N \) is calculated using a `for` loop, multiplying numbers from 1 to \( N \).
3. **Display Result**: The calculated factorial is printed out.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`ReadNumber(string Msg)`**
  - Prompts the user with a custom message to input a positive number and validates the input, ensuring it is non-negative.
- **`CalculFactoriel(int N)`**
  - Calculates the factorial of the given positive integer \( N \) using a `for` loop.
- **`Print(int Factoriel)`**
  - Displays the calculated factorial.

---

## ▶️ Execution Example

```plaintext
Please Enter A Positive Number ! :
5
The Factoriel is : 120
