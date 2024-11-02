# 📝 Problem 7: Half Number Calculator

## 📜 Description
This C++ program prompts the user to enter a number and calculates its half. The result is then displayed in a user-friendly format.

The program includes the following features:
- 🔹 `ReadNumber`: Captures a number entered by the user.
- 🔹 `Half_Num`: Calculates half of the given number.
- 🔹 `PrintNumber`: Displays the result of the calculation.

## 💡 Code Explanation

- **📥 Function `ReadNumber`**:
  - Prompts the user to enter a number. It uses `cin` to capture the input and returns it as a float to accommodate decimal values.

- **➗ Function `Half_Num`**:
  - Takes a float as input and returns half of that number.

- **🖥️ Function `PrintNumber`**:
  - Combines the original number and its half into a string and outputs the result to the console.

- **📅 Function `main`**:
  - Calls `ReadNumber` to gather user input, then calls `PrintNumber` to display the result.
  - Changes the console color using `system("color 6F")` and pauses the console before exiting with `system("pause>0")`.

## ▶️ Execution Example
If you enter the following number:
- Number: `10`

The program will display:
```plaintext
The Half of 10.000000 is : 5.000000
