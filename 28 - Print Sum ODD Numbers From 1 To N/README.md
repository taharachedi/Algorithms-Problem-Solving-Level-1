# 🔺Problem 28: Sum of Odd Numbers

> **Calculate the sum of odd numbers up to N** using this effective C++ program that demonstrates multiple looping constructs.

## 🧩 Project Overview
This program prompts the user to enter a number \( N \) and calculates the sum of all odd numbers from 1 to \( N \) using three different looping methods: **for**, **while**, and **do-while**. It's a great example for learning about loops, conditionals, and enumerations in C++!

---

## 🌟 Features
- **📥 User Input:** Guides the user to enter a number \( N \).
- **🔁 Multiple Looping Techniques:** Demonstrates the use of `for`, `while`, and `do-while` loops to calculate the sum of odd numbers.
- **🖨️ Clear Output:** Displays the calculated sum for each method clearly.

---

## ⚙️ How It Works
1. **Input Number**: The program prompts the user to input the number \( N \).
2. **Sum Calculation Methods**:
   - **For Loop**: Uses a `for` loop to calculate the sum of odd numbers from 1 to \( N \).
   - **While Loop**: Uses a `while` loop to calculate the sum of odd numbers from 1 to \( N \).
   - **Do-While Loop**: Uses a `do-while` loop to calculate the sum of odd numbers from 1 to \( N \).
3. **Display Results**: Each method's output is printed, showing the calculated sum.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`Read()`**
  - Prompts the user to input the number \( N \) and returns the value.
- **`check_OddOrEven(int N)`**
  - Determines if the number \( N \) is odd or even using an enumeration.
- **`Print_For(int N)`**
  - Uses a `for` loop to calculate and display the sum of odd numbers from 1 to \( N \).
- **`Print_While(int N)`**
  - Uses a `while` loop to calculate and display the sum of odd numbers from 1 to \( N \).
- **`Print_DoWhile(int N)`**
  - Uses a `do-while` loop to calculate and display the sum of odd numbers from 1 to \( N \).

---

## ▶️ Execution Example

```plaintext
Please Enter The Last Num N : 
10

The Sum Using For Is : 
25
----------------------

The Sum Using While is : 
25
----------------------

The Sum Using Do_While is : 
25
----------------------
