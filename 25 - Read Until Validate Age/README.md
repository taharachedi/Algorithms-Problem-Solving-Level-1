# 🔺Problem 25: Age Validation Program with Input Retry

> **Ensure users enter a valid age within a specific range** using this efficient C++ program.

## 🧩 Project Overview
This program prompts users to input their age and continues to request input until a valid age (between 18 and 45) is provided. Perfect for practicing input validation and loops in C++!

---

## 🌟 Features
- **📥 User-Friendly Input:** Guides users to enter their age with clear instructions.
- **🔄 Input Retry Mechanism:** If an invalid age is entered, the program prompts the user to try again until a valid input is received.
- **🖨️ Clear Output:** Displays the valid age once it is confirmed.

---

## ⚙️ How It Works
1. **Prompt for Age**: The program prompts the user to enter their age.
2. **Validation Check**: It checks if the entered age is within the range of 18 to 45.
3. **Retry Until Valid**: If the age is invalid, the program continues to ask for input until a valid age is entered.
4. **Display Result**: The confirmed valid age is printed.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`ReadAge()`**
  - Prompts the user to input their age and returns the entered value.
- **`ValidationNumInRange(short Num, short From, short To)`**
  - Checks if the age is within the specified range.
- **`ReadUntil(short From, short To)`**
  - Continuously prompts for age input until a valid age is provided.
- **`Print(short Age)`**
  - Outputs the confirmed valid age to the console.

---

## ▶️ Execution Example

```plaintext
Please Enter Ur Age Between 18 and 45 : 
16
Please Enter Ur Age Between 18 and 45 : 
30
Ur Age is : 30
