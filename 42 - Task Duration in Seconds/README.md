# ⏱️ Problem 42: Task Duration to Seconds Converter

> **A C++ program that converts a user-defined task duration (in days, hours, minutes, and seconds) into total seconds.**

## 🌟 Project Overview
This program allows users to input the duration of a task in days, hours, minutes, and seconds, then calculates the total duration in seconds. The program ensures that the inputted values are positive integers, providing an accurate total.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter valid positive integers for days, hours, minutes, and seconds.
- **⏰ Conversion Logic**: Converts the entire duration into total seconds.
- **🖨️ Output Display**: Outputs the total seconds calculated from the input duration.

---

## ⚙️ How It Works
1. **Input Validation**: The program checks that all input values (days, hours, minutes, seconds) are positive integers.
2. **Conversions**:
   - Days are converted to seconds using the formula: `Total Seconds from Days = Days * 24 * 60 * 60`.
   - Hours are converted to seconds using the formula: `Total Seconds from Hours = Hours * 60 * 60`.
   - Minutes are converted to seconds using the formula: `Total Seconds from Minutes = Minutes * 60`.
   - Seconds remain as is.
3. **Total Calculation**: The program sums all the calculated seconds from each unit to obtain the total duration in seconds.
4. **Display Results**: Outputs the total seconds calculated.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Prompts the user with a message until a valid positive integer is entered.

- **`strTaskDuration ReadTask()`**
  - Reads and stores the number of days, hours, minutes, and seconds into a `strTaskDuration` structure.

- **`int Total_Seconds(strTaskDuration Duration)`**
  - Calculates and returns the total duration in seconds based on the provided `strTaskDuration`.

---

## ▶️ Execution Example

```plaintext
Please Enter The Number Of Day : 
1
Please Enter The Number Of Hours : 
2
Please Enter The Number Of Minutes : 
30
Please Enter The Number Of seconds : 
15
Total Seconds =  123615  Seconds 
