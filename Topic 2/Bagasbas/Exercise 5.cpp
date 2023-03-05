/* A program that reads in investment amount, annual
interest rate, and number of years, and displays the
future investment value*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Prompt user to enter investment amount
    double investmentAmount = 0.0;
    cout << "Enter investment amount: "; cin >> investmentAmount;

    // Prompt user to enter annual interest rate
    double annualInterestRate = 0.0;
    cout << "Enter annual interest rate in percentage: "; cin >> annualInterestRate;
    annualInterestRate /= 100;

    // Prompt user to enter number of years
    int numberOfYears = 0;
    cout << "Enter number of years: "; cin >> numberOfYears;

    // Calculate monthly interest rate
    double monthlyInterestRate = annualInterestRate / 12;
    
    // Calculate the future investment value
    double futureInvestmentValue = investmentAmount * pow(1 + monthlyInterestRate, numberOfYears * 12);

    cout << "Accumulated value is " << "$" << futureInvestmentValue << endl;
}   