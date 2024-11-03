# 🟡 Problem 38: Prime Number Checker

> **A C++ program that determines whether a given positive number is prime or not.**

## 🌟 Project Overview
This program prompts the user to enter a positive integer and checks whether that number is a prime number. It utilizes an enumeration to represent the prime and not prime states, ensuring a clear distinction in outputs.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter a positive integer.
- **🔍 Prime Checking**: Implements a function to determine if the number is prime.
- **🖨️ Output Display**: Outputs whether the number is prime or not.

---

## ⚙️ How It Works
1. **Input Validation**: The program repeatedly prompts the user until a positive integer is provided.
2. **Prime Checking**: It checks if the number is divisible by any integer from 2 to half of the number.
3. **Display Result**: Outputs "Prime Number!" if the number is prime, and "Not Prime Number!" otherwise.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int ReadNumber(string Msg)`**
  - Prompts the user with a message until a valid positive integer is entered.

- **`enPrimeNotPrime check_Prime(int Num)`**
  - Checks if the given number is prime and returns an enumeration value indicating the result.

- **`void Print(int Num)`**
  - Displays whether the input number is prime or not.

---

## ▶️ Execution Example

```plaintext
Please Enter A positive Number !
7
Prime Number !
