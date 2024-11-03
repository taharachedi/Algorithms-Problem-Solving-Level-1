# ⚡Problem 32: Power Calculator

> **Calculate the power of a number raised to an integer exponent** using this simple C++ program.

## 🌟 Project Overview
This program prompts the user to input a base number and an exponent, and it computes the result of raising the base to the power of the exponent using an iterative approach.

---

## 📦 Features
- **📥 User Input**: Accepts a base number and an exponent from the user.
- **🔄 Power Calculation**: Computes the power of the base number raised to the given exponent.
- **🖨️ Clear Output**: Displays the calculated result in a user-friendly format.

---

## ⚙️ How It Works
1. **Input Base Number**: The program prompts the user to enter the base number.
2. **Input Exponent**: The program prompts the user to enter the exponent.
3. **Power Calculation**:
   - If the exponent \( M \) is 0, the result is 1 (as any number raised to the power of 0 is 1).
   - If \( M \) is greater than 0, the program multiplies the base number by itself \( M \) times.
4. **Display Result**: The result of the calculation is printed to the console.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`ReadNumber()`**
  - Prompts the user to enter a base number and returns the input value.
  
- **`ReadPower()`**
  - Prompts the user to enter an exponent and returns the input value.

- **`Print(int Num, int M)`**
  - Calculates the power of the base number \( Num \) raised to the exponent \( M \) using a loop. It handles the case where \( M \) is 0 by returning 1.

---

## ▶️ Execution Example

```plaintext
Please Enter The Number :
2
Please Enter M :
3
Result = 8
