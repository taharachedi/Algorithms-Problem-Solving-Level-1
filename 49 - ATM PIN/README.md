# 🔒 Problem 49: Simple PIN Login System

> **A basic C++ application that allows users to log in using a PIN. If the correct PIN is entered, the program displays the user's balance. Otherwise, it prompts for the PIN again and changes the screen color based on success or failure.**

## 🌟 Project Overview
This program prompts the user to enter a PIN. It validates the entered PIN against a predefined value and provides feedback through colored console output. The user is informed of their balance upon successful login.

---

## 📦 Features
- **🔐 Secure Login**: Users must enter the correct PIN to access their balance.
- **🔴 Color Feedback**: The console background color changes to indicate success (green) or failure (red) in entering the correct PIN.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`Read_PIN()`**: Prompts the user to enter their PIN and returns the inputted PIN as a string.
   - **`Login()`**: Handles the login logic, including input validation and feedback. If the correct PIN is entered, the screen color changes to green; otherwise, it turns red and prompts the user to try again.

2. **Execution Flow**:
   - The program begins execution in the `main()` function, where it calls the `Login()` function to authenticate the user.
   - Upon successful login, it displays the user's balance.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`string Read_PIN()`**
  - Reads the user's input for the PIN.

- **`bool Login()`**
  - Manages the login process. It loops until the correct PIN is entered, changing colors accordingly.

- **`int main()`**
  - Initiates the login process and displays the user balance if login is successful.

---

## ▶️ Execution Example

```plaintext
Please Enter Ur PIN : 
1234

Ur Balance is : 7500
