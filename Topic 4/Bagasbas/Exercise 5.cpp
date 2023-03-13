/* A program that reads the following information 
and prints a payroll statement*/
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

// A function to capitalize first letter of a single string
std::string title(std::string userName){
    char firstChar = userName.at(0);
    std::string erasedName = userName.erase(0, 1);
    firstChar = toupper(firstChar);
    std::string titledUserName = firstChar + erasedName;
    return titledUserName;
}

int main(){
    // Prompt user for information for the payroll
    // Prompt user for name
    std::string userName;
    std::cout << "\nEnter Employee's name: "; std::getline(std::cin, userName);

    // Prompt user for number of hours worked in a week
    double hoursWorked = 0.0;
    std::cout << "Enter number of hours worked in a week: "; std::cin >> hoursWorked;

    // Hourly pay rate
    double hourlyPayRate = 0.0;
    std::cout << "Enter hourly pay rate: "; std::cin >> hourlyPayRate;

    // Federal tax witholding rate
    double federalTaxRate = 0.0;
    std::cout << "Enter federal tax withgolding rate: "; std::cin >> federalTaxRate;

    // State tax witholding rate
    double stateTaxRate = 0.0;
    std::cout << "Enter state tax withgolding rate: "; std::cin >> stateTaxRate;

    // Calculate and display total payroll
    std::string title(std::string userName);
    std::cout << "\nEmployee name: " << title(userName) << std::endl;
    // Display hours worked
    std::cout << "Hours worked: " << std::fixed << std::setprecision(1) << hoursWorked << std::endl;
    // Display pay rate
    std::cout << "Pay rate: $" << std::fixed << std::setprecision(2) << hourlyPayRate << std::endl;
    // Display and Calculate Gross Pay
    double grossPay = 0.0;
    grossPay = hourlyPayRate * hoursWorked;
    std::cout << "Gross pay: $" << std::fixed << std::setprecision(2) << grossPay << std::endl;

    // Calculate and Display deductions

    // Federal Withholding
    std::cout << "Deductions:" << std::endl;
    double federalWithholding = grossPay * federalTaxRate;
    std::cout << "\tFederal witholding (" << federalTaxRate << "): " << federalWithholding << std::endl;

    // Sate witholding
    double stateWithholding = grossPay * stateTaxRate;
    std::cout <<"\tState Withholdon (" << stateTaxRate << "): " << stateWithholding << std::endl;

    // Total Deduction
    double totalDeductions = federalWithholding + stateWithholding;
    std::cout << "\tTotal Deductions: $" << std::fixed << std::setprecision(2) << totalDeductions << std::endl;

    // Net Pay
    double netPay = grossPay - totalDeductions;
    std::cout << "Net Pay: $" << std::fixed << std::setprecision(2) << netPay << std::endl;
}


