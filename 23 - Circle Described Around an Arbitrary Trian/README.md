# 🔺 Circle Area Described Around an Arbitrary Triangle

> **Calculate the area of a circle circumscribed around any triangle** using this efficient C++ program.

## 🧩 Project Overview
This program calculates the **area of a circle circumscribed around an arbitrary triangle** based on the side lengths you provide for the triangle. Perfect for geometry enthusiasts and developers looking to deepen their understanding of triangle properties and circle calculations!

---

## 🌟 Features
- **📥 User-Friendly Input:** Guides you to enter the three side lengths (`a`, `b`, `c`) of your triangle.
- **📐 Accurate Calculations:** Uses Heron's formula to determine the area of the circle circumscribing the triangle.
- **📊 Clear Output:** Displays the calculated area of the circle directly, ensuring an easy-to-read result.

---

## ⚙️ How It Works
1. **Prompt for Side Lengths**: The program asks for the lengths of the three triangle sides.
2. **Calculation**: Using the semi-perimeter `P` and Heron's formula, the area of the circle that circumscribes the triangle is calculated.
3. **Display**: The result is displayed in a clean, readable format.

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`ReadSideArbitraryTriangle(float& a, float& b, float& c)`**
  - Prompts the user to input the triangle's side lengths.
- **`CalculArea(float a, float b, float c)`**
  - Calculates the area of the circle circumscribing the triangle using Heron's formula.
- **`Print(float Area)`**
  - Outputs the calculated area to the console in a descriptive message.

---

## 🚀 Quick Start Guide

1. **Compilation**: Ensure you have a C++ compiler installed.
2. **Run the Program**: 
   ```shell
   g++ -o triangle_circle_area triangle_circle_area.cpp
   ./triangle_circle_area
