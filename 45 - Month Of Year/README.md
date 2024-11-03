# 📅 Problem 45: Month of the Year Converter

> **A C++ program that converts a user-defined number (1-12) into the corresponding month of the year.**

## 🌟 Project Overview
This program allows users to input a number between 1 and 12, which it then converts into the corresponding month name. It ensures that the input is valid and provides feedback based on the user's input.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter a number between 1 and 12, representing a month.
- **🗓️ Month Conversion**: Converts the input number into the corresponding month name (e.g., 1 for January, 12 for December).
- **🖨️ Output Display**: Displays the name of the corresponding month in a user-friendly format.

---

## ⚙️ How It Works
1. **Input Validation**: The program checks that the input number is within the range of 1 to 12.
2. **Conversion Logic**:
   - The user inputs a number which is then converted into an enumerated type representing months of the year.
   - A switch statement is used to map the input number to the corresponding month name.
3. **Output**: The program displays the name of the month based on the input number.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg, int From, int To)`**
  - Prompts the user with a message until a valid integer (within the specified range) is entered.

- **`enMonth Read_Month()`**
  - Calls `Read_Num` to read an integer and casts it to the `enMonth` enumeration type.

- **`string Get_Month(enMonth Month)`**
  - Returns the name of the month corresponding to the `enMonth` enumeration passed as an argument using a switch statement.

---

## ▶️ Execution Example

```plaintext
Please Enter A Month Number : 
4
Month = April.
