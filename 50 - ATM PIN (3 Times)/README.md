# 🔒 Problem 50: Simple PIN Login System

> **A basic C++ application that allows users to log in using a PIN. Users have a limited number of attempts to enter the correct PIN. If the correct PIN is entered, the program displays the user's balance. Otherwise, it informs the user of their remaining attempts and changes the screen color based on success or failure.**

## 🌟 Project Overview
This program prompts the user to enter a PIN. It validates the entered PIN against a predefined value and provides feedback through colored console output. Users are limited to three attempts to enter the correct PIN, after which the program blocks the card and prompts the user to contact the bank.

---

## 📦 Features
- **🔐 Secure Login**: Users must enter the correct PIN to access their balance.
- **🔴 Color Feedback**: The console background color changes to indicate success (green) or failure (red) in entering the correct PIN.
- **⚠️ Attempt Limitation**: Users have three attempts to enter the correct PIN. After three failed attempts, the card is blocked, and the user is advised to contact the bank.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`Read_Pin()`**: Prompts the user to enter their PIN and returns the inputted PIN as a string.
   - **`Login()`**: Handles the login logic, including input validation and feedback. It limits the user to three attempts, changing colors accordingly. If the correct PIN is entered, the screen color changes to green; otherwise, it turns red, and the user is informed of their remaining attempts.

2. **Execution Flow**:
   - The program begins execution in the `main()` function, where it calls the `Login()` function to authenticate the user.
   - Upon successful login, it displays the user's balance. If the user fails to enter the correct PIN within the allowed attempts, a message is displayed advising them to contact the bank.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`string Read_Pin()`**
  - Reads the user's input for the PIN.

- **`bool Login()`**
  - Manages the login process. It loops up to three times until the correct PIN is entered or the attempts run out, changing colors and providing feedback accordingly.

- **`int main()`**
  - Initiates the login process and displays the user's balance if login is successful or informs the user that their card is blocked.

---

## ▶️ Execution Example

```plaintext
Please Enter Ur PIN :
1234

Ur Balance is : 7500
