# 🧮 Problem 36: Simple Calculator

> **A C++ program that performs basic arithmetic operations: addition, subtraction, multiplication, and division.**

## 🌟 Project Overview
This program allows users to input two numbers and select an arithmetic operation to perform on those numbers. It supports four operations: addition, subtraction, multiplication, and division.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter two numbers and an operation type.
- **✅ Arithmetic Operations**: Performs addition, subtraction, multiplication, or division based on user choice.
- **🖨️ Output Display**: Outputs the result of the operation to the console.

---

## ⚙️ How It Works
1. **Input Numbers**: The program prompts the user to enter two numbers.
2. **Select Operation**: It then asks the user to select an operation type (+, -, *, /).
3. **Perform Calculation**: The program performs the chosen arithmetic operation and returns the result.
4. **Display Result**: Outputs the result of the calculation.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`float ReadNumber(string Msg)`**
  - Prompts the user to input a number and returns it as a float.

- **`enOperation_Type Operation_Type()`**
  - Prompts the user to input an operation type and returns the corresponding enumeration value.

- **`float Calcul(float Num1, float Num2, enOperation_Type Op)`**
  - Takes two numbers and an operation type as input and performs the corresponding arithmetic operation using a switch-case statement.

---

## ▶️ Execution Example

```plaintext
Please Enter The First Number : 
10
Please Enter The Second Number : 
5
Please Enter The Operation Type : (+ , - , * , / )
+
Result  = 15
