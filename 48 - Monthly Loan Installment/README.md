# 💰 Problem 48: Monthly Installment Calculator

> **A simple C++ program that calculates the monthly installment for a loan based on user input for loan amount and duration in months.**

## 🌟 Project Overview
This program prompts the user to input their loan amount and the number of months for repayment. It then calculates and outputs the monthly installment required to pay off the loan.

---

## 📦 Features
- **📊 Monthly Payment Calculation**: Computes the monthly installment required based on user-defined parameters.
- **📥 Input Validation**: Ensures that both the loan amount and the duration in months are positive values.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`Read_Number(string Msg)`**: This function prompts the user for input until a valid (positive) number is provided.
   - **`Monthly_Installment(float Loan_Amount, float Month)`**: This function calculates the monthly installment by dividing the loan amount by the number of months.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, where it gathers user inputs for the loan amount and the number of months.
   - It then calls the `Monthly_Installment()` function to compute the monthly installment and displays the result.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`float Read_Number(string Msg)`**
  - Continuously prompts the user for input until a positive number is entered.

- **`float Monthly_Installment(float Loan_Amount, float Month)`**
  - Calculates the monthly installment required to repay the loan.

- **`int main()`**
  - Collects loan and repayment information from the user, invokes the calculation, and prints the result.

---

## ▶️ Execution Example

```plaintext
Please Enter Ur Loan Amount : 6000
How Many Month ?
12

Monthly Installment = 500
