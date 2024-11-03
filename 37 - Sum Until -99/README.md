# ➕ Problem 37: Sum Until Sentinel

> **A C++ program that sums a series of numbers entered by the user until they input a sentinel value of -99.**

## 🌟 Project Overview
This program allows users to input a sequence of numbers, continuously adding them to a total sum until they enter -99, which indicates that they wish to stop the input process. The program then outputs the total sum of the entered numbers.

---

## 📦 Features
- **📥 User Input**: Prompts the user to enter numbers one by one.
- **💰 Cumulative Sum**: Continuously adds each entered number to a running total.
- **🚫 Sentinel Value**: Stops input and calculation when the user enters -99.
- **🖨️ Output Display**: Outputs the total sum of the entered numbers.

---

## ⚙️ How It Works
1. **Input Numbers**: The program repeatedly prompts the user to input a number.
2. **Check for Sentinel Value**: If the user enters -99, the program terminates the input process.
3. **Sum Calculation**: All numbers entered before -99 are summed up.
4. **Display Result**: The total sum is printed to the console.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`float Read_Num(string Msg)`**
  - Prompts the user with a message and returns the entered number as a float.

- **`float Sum_Until()`**
  - Continuously reads numbers from the user and sums them until the sentinel value (-99) is entered.

---

## ▶️ Execution Example

```plaintext
Please Enter The Number 1
10
Please Enter The Number 2
20
Please Enter The Number 3
30
Please Enter The Number 4
-99
The Sum = 60
