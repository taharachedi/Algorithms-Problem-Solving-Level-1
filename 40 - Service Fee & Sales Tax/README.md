# 💵 Problem 40: Total Bill Calculator

> **A C++ program that calculates the total bill amount after applying a service fee and sales tax to the entered bill value.**

## 🌟 Project Overview
This program prompts the user to enter a bill value and then calculates the total bill amount by applying a service fee and sales tax. The service fee is a fixed percentage of the bill, followed by an additional sales tax.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter a valid positive bill value.
- **💰 Total Bill Calculation**: Computes the total bill after applying a service fee (10%) and sales tax (16%).
- **🖨️ Output Display**: Outputs the original bill value and the total bill after calculations.

---

## ⚙️ How It Works
1. **Input Validation**: The program ensures that the bill value entered is a positive number.
2. **Bill Calculation**: The total bill is calculated as follows:
   - The bill value is first increased by 10% for the service fee.
   - The resulting amount is then increased by 16% for sales tax.
3. **Display Result**: Outputs the original bill value and the total bill amount after the calculations.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`float Read_BillValue(string Msg)`**
  - Prompts the user with a message until a valid positive bill value is entered.

- **`float Calcul_TotalBill(float Total_BillValue)`**
  - Calculates and returns the total bill after applying a service fee and sales tax.

---

## ▶️ Execution Example

```plaintext
Please Enter Your Bill Value: 
100
Bill Value = 100
Total Bill After Service Fee and Sales Tax = 126.0
