# 💰 Problem 35: Currency Converter

> **A C++ program to convert different denominations of money into total value in pennies and dollars.**

## 🌟 Project Overview
This program allows users to enter quantities of various coin types (pennies, nickels, dimes, quarters) and dollar bills. It calculates the total value of the entered denominations in pennies and also converts that value into dollars.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter the quantities of different coin denominations.
- **✅ Total Value Calculation**: Computes the total value of the inputted coins and dollars in pennies and dollars.
- **🖨️ Output Display**: Displays the total value in both pennies and dollars.

---

## ⚙️ How It Works
1. **Input Denominations**: The program prompts the user to enter the number of pennies, nickels, dimes, quarters, and dollars.
2. **Calculate Total Value**: It calculates the total value in pennies using the following formula:
   - Total Value in Pennies = 
     - (Pennies * 1) +
     - (Nickels * 5) +
     - (Dimes * 10) +
     - (Quarters * 25) +
     - (Dollars * 100)
3. **Display Results**: Outputs the total value in both pennies and dollars to the console.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`struct stMoney`**
  - A structure to hold the quantities of different denominations (pennies, nickels, dimes, quarters, and dollars).

- **`stMoney Read()`**
  - Prompts the user to enter quantities of each denomination and returns a `stMoney` structure containing the values.

- **`float GetPennies(stMoney Lflisat)`**
  - Takes a `stMoney` structure as input and calculates the total value in pennies.

---

## ▶️ Execution Example

```plaintext
Please Enter The Pennies : 
15
Please Enter The Nickels : 
10
Please Enter The Dimes : 
5
Please Enter The Quarters : 
2
Please Enter The Dollars : 
1
Total Pennies = 265 Pennies .
Total Dollars = 2.65 Dollars .
