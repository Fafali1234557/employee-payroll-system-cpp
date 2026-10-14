#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Demo values for this learning project (not official payroll rates).
    const double SSNIT_RATE = 0.075;
    const double TAX_RATE = 0.04;
    const double WELFARE_FEE = 100.00;
    const double OVERTIME_RATE = 100.00;
    const int REGULAR_WEEKLY_HOURS = 40;

    string rank;
    string name;
    int hoursWorked;
    double annualSalary = 0;

    cout << "========== EMPLOYEE PAYROLL SYSTEM ==========" << endl;
    cout << "Enter employee rank (PA, CEO, Clerk): ";
    getline(cin, rank);

    if (rank == "PA" || rank == "pa")
    {
        rank = "PA";
        annualSalary = 20000;
    }
    else if (rank == "CEO" || rank == "ceo")
    {
        rank = "CEO";
        annualSalary = 100000;
    }
    else if (rank == "Clerk" || rank == "clerk")
    {
        rank = "Clerk";
        annualSalary = 60000;
    }
    else
    {
        cout << "Invalid rank. Please enter PA, CEO, or Clerk." << endl;
        return 1;
    }

    cout << "Enter employee name: ";
    getline(cin, name);
    if (name.empty())
    {
        cout << "Employee name cannot be empty." << endl;
        return 1;
    }

    cout << "Enter hours worked this week (0-168): ";
    if (!(cin >> hoursWorked) || hoursWorked < 0 || hoursWorked > 168)
    {
        cout << "Invalid hours. Please enter a number from 0 to 168." << endl;
        return 1;
    }

    double monthlySalary = annualSalary / 12;
    double ssnit = monthlySalary * SSNIT_RATE;
    double incomeTax = monthlySalary * TAX_RATE;
    double deductions = ssnit + incomeTax + WELFARE_FEE;

    int overtimeHours = 0;
    double overtimePay = 0;
    if (hoursWorked > REGULAR_WEEKLY_HOURS)
    {
        overtimeHours = hoursWorked - REGULAR_WEEKLY_HOURS;
        overtimePay = overtimeHours * OVERTIME_RATE;
    }

    // A simplified monthly payslip that includes overtime for the entered week.
    double grossPay = monthlySalary + overtimePay;
    double netSalary = grossPay - deductions;

    cout << fixed << setprecision(2);
    cout << "\n============= EMPLOYEE PAYSLIP =============" << endl;
    cout << "Employee Name   : " << name << endl;
    cout << "Rank            : " << rank << endl;
    cout << "Hours This Week : " << hoursWorked << endl;
    cout << "Overtime Hours  : " << overtimeHours << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Annual Salary   : GHS " << annualSalary << endl;
    cout << "Monthly Salary  : GHS " << monthlySalary << endl;
    cout << "Overtime Pay    : GHS " << overtimePay << endl;
    cout << "Gross Pay       : GHS " << grossPay << endl;
    cout << "--------------------------------------------" << endl;
    cout << "SSNIT (7.5%)    : GHS " << ssnit << endl;
    cout << "Income Tax (4%) : GHS " << incomeTax << endl;
    cout << "Welfare         : GHS " << WELFARE_FEE << endl;
    cout << "Total Deductions: GHS " << deductions << endl;
    cout << "--------------------------------------------" << endl;
    cout << "NET SALARY      : GHS " << netSalary << endl;
    cout << "============================================" << endl;
    cout << "Note: Demo calculations only, not an official payslip." << endl;

    return 0;
}
