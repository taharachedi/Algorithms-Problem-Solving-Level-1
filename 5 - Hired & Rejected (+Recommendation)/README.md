# 🧑‍💼 Problem 5: Job Application Acceptance Checker

## 📝 Description
This C++ program checks the acceptance criteria for a job applicant based on their age, driver's license status, and recommendation. It prompts the user for their information and determines whether they are hired or rejected based on the specified conditions.

The program includes the following features:
- 🔹 `Read_Info`: Prompts the user to enter their age, whether they have a driver's license, and if they have a recommendation.
- 🔹 `isAccepted`: Determines if the applicant meets the acceptance criteria based on their information.
- 🔹 `PrintInfo`: Displays whether the applicant is hired or rejected based on the evaluation.

## 💡 Code Explanation

- **📥 Function `Read_Info`**:
  - Prompts the user to enter their age, whether they have a driver's license, and if they have a recommendation. It stores this information in a structure `stInfo` and returns it.

- **✅ Function `isAccepted`**:
  - Checks the acceptance criteria:
    - If the applicant has a recommendation, they are automatically accepted.
    - If not, they must be over 21 years old and possess a valid driver's license to be accepted.

- **🖥️ Function `PrintInfo`**:
  - Calls `isAccepted` to check the applicant's status and prints either "Hired" or "Rejected" based on the result.

- **📅 Function `main`**:
  - Calls `Read_Info` to gather user input and then calls `PrintInfo` to evaluate and display the result.
  - Sets the console color using `system("color 6F")` and pauses the console before exiting with `system("pause>0")`.

## ▶️ Execution Example
If you enter the following information:
- Age: `22`
- Driver License: `1` (True)
- Recommendation: `0` (False)

The program will display:
```plaintext
Hired
