# 💰 Problem 47: Loan Payment Calculator

> **A simple C++ program that calculates the total number of months required to pay off a loan based on user input for loan amount and monthly payment.**

## 🌟 Project Overview
This program prompts the user to input their loan amount and monthly payment. It then calculates and outputs the total number of months required to fully pay off the loan.

---

## 📦 Features
- **📊 Loan Calculation**: Computes the total months needed to repay a loan based on user-defined parameters.
- **📥 Input Validation**: Ensures that the loan amount and monthly payment are positive values.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`Read_Num(string Msg)`**: This function prompts the user for input until a valid (positive) number is provided.
   - **`Total_Month(float Loan_Amount, float Monthly_Payment)`**: This function calculates the total number of months needed to pay off the loan by dividing the loan amount by the monthly payment.

2. **Execution Flow**:
   - The program begins execution in the `main()` function, where it gathers user inputs for the loan amount and monthly payment.
   - It then calls the `Total_Month()` function to compute the total months and displays the result.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`float Read_Num(string Msg)`**
  - Continuously prompts the user for input until a positive number is entered.

- **`float Total_Month(float Loan_Amount, float Monthly_Payment)`**
  - Calculates the total months required to pay off the loan.

- **`int main()`**
  - Collects loan and payment information from the user, invokes the calculation, and prints the result.

---

## ▶️ Execution Example

```plaintext
Please Enter Ur Loan Amount : 5000
Please Enter Ur Monthly Payment : 200

Total Months To Pay = 25
