# 💼 Problem 34: Commission Calculator

> **A simple C++ program to calculate commission based on total sales.**

## 🌟 Project Overview
This program calculates the commission based on the total sales entered by the user. The commission percentage varies based on the sales thresholds defined in the program.

---

## 📦 Features
- **📥 User Input**: Allows the user to enter the total sales amount.
- **✅ Commission Calculation**: Calculates the commission percentage based on predefined sales brackets.
- **🖨️ Output Display**: Shows both the commission percentage and the total commission earned.

---

## ⚙️ How It Works
1. **Input Total Sales**: The program prompts the user to input the total sales amount.
2. **Calculate Commission Percentage**: It determines the applicable commission percentage based on total sales:
   - **1%** for sales >= $1,000,000
   - **2%** for sales >= $500,000
   - **3%** for sales >= $100,000
   - **5%** for sales >= $50,000
   - **0%** for sales < $50,000
3. **Calculate Total Commission**: The program calculates the total commission based on the percentage determined in the previous step.
4. **Display Results**: Outputs the commission percentage and the total commission to the console.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`Read_TotalSales()`**
  - Prompts the user to enter the total sales amount and returns the value.

- **`GetPercentage(int Total_Sales)`**
  - Determines the commission percentage based on the total sales amount.

- **`Calcul_TotalComission(int Total_Sales)`**
  - Calculates the total commission earned by multiplying the total sales by the applicable percentage.

---

## ▶️ Execution Example

```plaintext
Please Enter The Total Sales !
750000
 Commision Percentage = 0.02
 Total Comission is = 15000
