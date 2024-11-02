# 📝 Problem 3: Check Odd or Even Number

## 📜 Description
This C++ program determines whether a given number is odd or even. It consists of three main functions:
- **🔢 `Read_Number`** to read a number from the user,
- **🧐 `Check_Number`** to determine if the number is odd or even,
- **🖨️ `Print_Number`** to print the result.

## 💡 Code Explanation
- **📥 Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical functions.
- **📊 Enum `enNumber_Type`**: Defines an enumeration to represent the number type as either `Odd` or `Even`.
- **🔍 Function `Read_Number`**: Prompts the user to enter a number and returns it.
- **🧮 Function `Check_Number`**: Takes an integer as input and determines if it is odd or even using the modulo operator. It returns an `enNumber_Type` enum value indicating the result.
- **🖨️ Function `Print_Number`**: Takes an `enNumber_Type` enum value and prints whether the number is "Even" or "Odd".
- **🔄 Function `main`**: Orchestrates the flow by calling `Read_Number` to get the number, `Check_Number` to check if it's odd or even, and `Print_Number` to display the result.

## ▶️ How to Run


It will prompt you to enter your Number. After entering it, the program will display whether the number is "Even" or "Odd".

## 💬 Example
If you enter `7` when prompted, the output will be:
```
Your number is Odd
```

If you enter `4` when prompted, the output will be:
```
Your number is Even
```
## ✅ Requirements
- C++ compiler 💻
- Basic understanding of functions and string handling in C++ 📚
