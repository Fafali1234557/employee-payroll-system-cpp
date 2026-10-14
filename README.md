# 💼 Employee Payroll System — C++

A beginner-friendly, **console-based C++ payroll calculator** that generates an employee payslip using a rank-based salary, a few example deductions, and overtime hours.

I originally built this project to practise **C++ fundamentals**. This improved version keeps the same core logic while making the calculations easier to read and the output more professional.

> **Learning project only:** All salary figures, Ghana cedi amounts, SSNIT (7.5%), income tax (4%), welfare (GHS 100), and overtime rates are **illustrative examples**, not official or current Ghana payroll rules. Don't use this program to process real salaries.

## ✨ Features

- Supports three employee ranks: **PA**, **CEO**, and **Clerk**
- Calculates **monthly salary** from the example annual salary
- Calculates **example SSNIT, income tax, and welfare deductions**
- Calculates overtime for hours worked **above 40 in one week**
- Prints a readable **gross-pay and net-pay breakdown** in GHS
- Checks for an invalid rank, blank employee name, or invalid hours
- Shows amounts consistently to **two decimal places**

## 🛠️ Skills practised

C++ input/output, variables, strings, `if / else if / else`, arithmetic, constants, basic input validation, and `iomanip` formatting.

## ▶️ How to run

All project files are in the repository root. You only need a C++ compiler; there are **no external packages**.

### VS Code or a terminal (with g++)

```bash
g++ -std=c++11 main.cpp -o payroll
```

Windows PowerShell:

```powershell
.\payroll.exe
```

Linux/macOS:

```bash
./payroll
```

You can also open `main.cpp` in Code::Blocks, Dev-C++, or Visual Studio and run it there.

## 🧾 Example payslip

Input: Rank **PA**, name **Fafali**, and **45** hours worked this week.

```text
============= EMPLOYEE PAYSLIP =============
Employee Name   : Fafali
Rank            : PA
Hours This Week : 45
Overtime Hours  : 5
--------------------------------------------
Annual Salary   : GHS 20000.00
Monthly Salary  : GHS 1666.67
Overtime Pay    : GHS 500.00
Gross Pay       : GHS 2166.67
--------------------------------------------
SSNIT (7.5%)    : GHS 125.00
Income Tax (4%) : GHS 66.67
Welfare         : GHS 100.00
Total Deductions: GHS 291.67
--------------------------------------------
NET SALARY      : GHS 1875.00
============================================
Note: Demo calculations only, not an official payslip.
```

## 🧮 Simplified formula

```text
Monthly Salary  = Annual Salary / 12
Overtime Hours  = max(0, Hours This Week - 40)
Overtime Pay    = Overtime Hours * GHS 100
Gross Pay       = Monthly Salary + Overtime Pay
Total Deductions = (Monthly Salary * 7.5%) + (Monthly Salary * 4%) + GHS 100
Net Salary      = Gross Pay - Total Deductions
```

This demonstration adds **one entered week's overtime** to the monthly salary. In a real payroll system, time periods and deduction rules must be handled consistently and according to applicable law.

## 📂 Project structure

```text
employee-payroll-system-cpp/
├── main.cpp
├── README.md
└── .gitignore
```

## 🔭 Ideas for a future version

- Process several employees instead of one
- Separate the payroll calculations into functions
- Load salary and deduction rates from configurable settings
- Save a payslip to a file
- Add tests for every rank and pay scenario

## 👨🏽‍💻 Author

**Saviour Fafali** — BSc Computer Science student, KNUST, Ghana.

GitHub: [@Fafali1234557](https://github.com/Fafali1234557)

Part of my ongoing journey learning C++, Python, web development, and mobile app development.
