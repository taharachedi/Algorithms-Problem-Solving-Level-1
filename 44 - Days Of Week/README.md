# 📅 Problem 44: Day of the Week Converter

> **A C++ program that converts a user-defined number (1-7) into the corresponding day of the week.**

## 🌟 Project Overview
This program allows users to input a number between 1 and 7, which it then converts into the corresponding day of the week. It ensures that the input is valid, providing feedback based on the user's input.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter a number between 1 and 7, representing a day of the week.
- **🗓️ Day Conversion**: Converts the input number into the corresponding day name (e.g., 1 for Sunday, 7 for Saturday).
- **🖨️ Output Display**: Displays the day of the week in a user-friendly format.

---

## ⚙️ How It Works
1. **Input Validation**: The program checks that the input number is within the range of 1 to 7.
2. **Conversion Logic**:
   - The user inputs a number which is then converted into an enumerated type representing days of the week.
   - A switch statement is used to map the input number to the corresponding day of the week.
3. **Output**: The program displays the name of the corresponding day based on the input number.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg, int From, int To)`**
  - Prompts the user with a message until a valid integer (within the specified range) is entered.

- **`enDays Read_Days()`**
  - Calls `Read_Num` to read an integer and casts it to the `enDays` enumeration type.

- **`string Get_Days(enDays Day)`**
  - Returns the name of the day corresponding to the `enDays` enumeration passed as an argument using a switch statement.

---

## ▶️ Execution Example

```plaintext
Please Enter A Day Number : 
3
Day = Tuesday.
