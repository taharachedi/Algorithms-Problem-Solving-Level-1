# 📝 Problem 4: Hire a Driver Case 1

## 📜 Description
This C++ program determines if an individual is eligible for hiring based on their age and whether they have a driver's license. The program includes three main functions:
- **📊 `ReadInfo`** to collect the individual's age and driver's license status,
- **✅ `isAccepted`** to evaluate if the individual meets the criteria for hiring,
- **🖨️ `PrintResult`** to display the hiring decision.

## 💡 Code Explanation

- **📥 Headers**: The program includes `<iostream>` for input/output operations.
- **📑 Struct `stInfo`**: Defines a structure to hold the individual's age and driver's license status.
- **🔍 Function `ReadInfo`**: Prompts the user to enter their age and whether they have a driver's license. It returns an `stInfo` structure with the gathered data.
- **📋 Function `isAccepted`**: Takes an `stInfo` structure as input and determines if the individual is eligible for hiring based on the criteria (age >= 21 and having a driver's license). It returns a `bool` indicating the decision.
- **🖨️ Function `PrintResult`**: Takes a `bool` indicating the hiring decision and prints "Hired" if the individual is accepted, or "Rejected" if they are not.
- **🔄 Function `main`**: Manages the flow by calling `ReadInfo` to gather the information, `isAccepted` to determine eligibility, and `PrintResult` to display the result.

## ▶️ How to Run


It will prompt you to enter your age and whether you have a driver's license. Based on your input, it will display either "Hired" or "Rejected".

## 💬 Example
If you enter `25` for age and `1` (Yes) for having a driver's license, the output will be:
```
Hired
```
If you enter `19` for age and `0` (No) for not having a driver's license, the output will be:
```
Rejected
```
## ✅ Requirements
- C++ compiler 💻
- Basic understanding of functions and string handling in C++📚
