# 📚 Problem 8: Mark Evaluation System

## 📜 Description
This C++ program evaluates a student's mark and determines if they have passed or failed based on a predefined threshold (50 marks). It uses an enumeration to represent the pass and fail states.

The program includes the following features:
- 🔹 `Read`: Captures the mark entered by the user.
- 🔹 `checkMark`: Evaluates the mark and returns whether the student has passed or failed.
- 🔹 `Print`: Displays the result of the evaluation.

## 💡 Code Explanation

- **📥 Function `Read`**:
  - Prompts the user to enter their mark. It uses `cin` to capture the input and returns it as a float.

- **✅ Function `checkMark`**:
  - Takes a float mark as input and checks if it is greater than or equal to 50. It returns an enumerated type indicating whether the student has passed or failed.

- **🖥️ Function `Print`**:
  - Calls `checkMark` to evaluate the mark and prints "PASS" or "Failed" based on the result.

- **📅 Function `main`**:
  - Calls `Read` to gather user input and then calls `Print` to display the evaluation result.

## ▶️ Execution Example
If you enter the following mark:
- Mark: `65`

The program will display:
```plaintext
PASS
