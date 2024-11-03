# ⏳ Problem 41: Hours to Days and Weeks Converter

> **A C++ program that converts a given number of hours into equivalent days and weeks.**

## 🌟 Project Overview
This program allows users to input a number of hours and then calculates the equivalent number of days and weeks. The program ensures that the inputted number of hours is positive and displays the results in a clear format.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter a valid positive number of hours.
- **⏰ Conversion Functions**: Converts hours to days and days to weeks, as well as providing an alternative calculation method for weeks directly from hours.
- **🖨️ Output Display**: Outputs the number of hours, equivalent days, and weeks.

---

## ⚙️ How It Works
1. **Input Validation**: The program checks that the number of hours entered is a positive integer.
2. **Conversions**:
   - Hours are converted to days using the formula: `Days = Hours / 24`.
   - Days are converted to weeks using the formula: `Weeks = Days / 7`.
   - An additional method converts hours directly to weeks using the formula: `Weeks = Hours / 24 / 7`.
3. **Display Results**: Outputs the original number of hours and the calculated days and weeks.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Hours(string Msg)`**
  - Prompts the user with a message until a valid positive number of hours is entered.

- **`float Hours_To_Days(float Number_Hours)`**
  - Converts hours to days.

- **`float Days_To_Weeks(float Number_Days)`**
  - Converts days to weeks.

- **`float Hours_To_Weeks(float Number_Hours)`**
  - Converts hours directly to weeks.

---

## ▶️ Execution Example

```plaintext
Please Enter The Number of Hours: 
48
The Number Of Hours = 48
---------------------------------------

The Number Of Days  = 2
The Number Of Weeks = 0.285714
Weeks In diff Way   = 0.571429
