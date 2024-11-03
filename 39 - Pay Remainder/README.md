# 💵 Problem 39: Bill Remainder Calculator

> **A C++ program that calculates the remaining amount after a cash payment towards a total bill.**

## 🌟 Project Overview
This program prompts the user to enter the total bill amount and the cash paid. It calculates the remainder and displays the result. The program ensures that valid positive amounts are entered for both the total bill and cash paid.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter valid positive amounts for the total bill and cash paid.
- **💰 Remainder Calculation**: Computes the difference between the cash paid and the total bill.
- **🖨️ Output Display**: Outputs the total bill, cash paid, and the remainder.

---

## ⚙️ How It Works
1. **Input Validation**: The program ensures that both the total bill and cash paid are positive numbers.
2. **Remainder Calculation**: Calculates the remainder by subtracting the total bill from the cash paid.
3. **Display Result**: Outputs the total bill, cash paid, and the remaining amount.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`float Read_Num(string Msg)`**
  - Prompts the user with a message until a valid positive number is entered.

- **`float Print_Remainder(float Total_Bill, float Cash_Paid)`**
  - Calculates and returns the remainder after the cash payment.

---

## ▶️ Execution Example

```plaintext
Please Enter Your Total Bill 
150.50
Please Enter Your Cash Paid 
200.00
Total Bill = 150.5
Cash Paid = 200
*********************************
Remainder =  49.5
