# 📝 Problem 6: Full Name Generator

## 📜 Description
This C++ program prompts the user to enter their first and last names and then generates the full name. It can display the full name in both normal and reversed order.

The program includes the following features:
- 🔹 `ReadName`: Captures the user's first and last names.
- 🔹 `GetFullName`: Combines the first and last names, optionally reversing their order.
- 🔹 `PrintFullName`: Displays the generated full name.

## 💡 Code Explanation

- **📥 Function `ReadName`**:
  - Prompts the user to enter their first name and last name. It uses `getline` to ensure that names with spaces can be captured correctly. The information is stored in a structure `stName` and returned.

- **🔄 Function `GetFullName`**:
  - Combines the first and last names into a single string. It accepts a boolean parameter `Reversed` to determine whether to display the name in normal order (FirstName LastName) or reversed order (LastName FirstName).

- **🖥️ Function `PrintFullName`**:
  - Displays the generated full name to the console.

- **📅 Function `main`**:
  - Calls `ReadName` to gather user input, then calls `GetFullName` to create the full name in reversed order, and finally calls `PrintFullName` to display the result.
  - Changes the console color using `system("color 6F")` and pauses the console before exiting with `system("pause>0")`.

## ▶️ Execution Example
If you enter the following information:
- First Name: `Taha`
- Last Name: `Rachedi`

The program will display:
```plaintext
Full Name = Taha Rachedi
