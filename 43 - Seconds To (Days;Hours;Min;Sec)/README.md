# ⏱️ Problem 43: Total Seconds to Duration Converter

> **A C++ program that converts a user-defined total number of seconds into a more understandable format of days, hours, minutes, and seconds.**

## 🌟 Project Overview
This program allows users to input a total number of seconds, which it then converts into a more human-readable format of days, hours, minutes, and seconds. It ensures that the inputted value is a positive integer, providing an accurate representation of the time duration.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter a valid positive integer representing the total seconds.
- **⏰ Conversion Logic**: Converts the total seconds into days, hours, minutes, and seconds.
- **🖨️ Output Display**: Outputs the converted duration in the format of days, hours, minutes, and seconds.

---

## ⚙️ How It Works
1. **Input Validation**: The program checks that the input value for seconds is a positive integer.
2. **Conversions**:
   - **Days** are calculated using the formula: `Total Days = Total Seconds / (24 * 3600)`.
   - **Hours** are calculated using the remaining seconds after days have been accounted for.
   - **Minutes** are derived from the remaining seconds after hours have been accounted for.
   - **Seconds** are derived from any remaining seconds after days, hours, and minutes have been calculated.
3. **Output**: The program displays the total duration in the format `Days : Hours : Minutes : Seconds`.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Seconds(string Msg)`**
  - Prompts the user with a message until a valid positive integer (total seconds) is entered.

- **`stDuration Calcul(int Seconds)`**
  - Converts the inputted total seconds into a structured format containing the number of days, hours, minutes, and seconds.

- **`void Print(stDuration Duration)`**
  - Displays the formatted duration based on the calculated days, hours, minutes, and seconds.

---

## ▶️ Execution Example

```plaintext
Please Enter The Total Seconds : 
100000
1 : 3 : 46 : 40
