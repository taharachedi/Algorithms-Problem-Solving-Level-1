# 🎓 Problem 33: Grade Converter

> **A simple C++ program to convert numerical grades to letter grades** based on specified grading criteria.

## 🌟 Project Overview
This program allows users to enter a numerical grade between a specified range (0 to 100). It then converts this grade to a corresponding letter grade according to predefined grading standards.

---

## 📦 Features
- **📥 User Input**: Accepts a numerical grade within a specified range (0-100).
- **✅ Input Validation**: Ensures that the entered grade is within the valid range.
- **🔤 Grade Conversion**: Converts the numerical grade to a letter grade based on standard grading scales.
- **🖨️ Output Display**: Clearly shows the resulting letter grade to the user.

---

## ⚙️ How It Works
1. **Input Grade**: The program prompts the user to enter a grade between the specified range (0 to 100).
2. **Input Validation**: It ensures the entered grade is valid; if not, it prompts the user again until a valid grade is provided.
3. **Grade Conversion**:
   - Converts the numerical grade to a letter grade:
     - **A**: 90 and above
     - **B**: 80 to 89
     - **C**: 70 to 79
     - **D**: 60 to 69
     - **E**: 50 to 59
     - **F**: Below 50
4. **Display Result**: Outputs the corresponding letter grade to the console.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`ReadGradeInRange(int From, int To)`**
  - Prompts the user to enter a grade within the specified range and validates the input.

- **`GetGrade(int Grade)`**
  - Converts a numerical grade to its corresponding letter grade based on specified criteria.

---

## ▶️ Execution Example

```plaintext
Please Enter A Grade Between 0 and 100 !
85
The Grade is : B
