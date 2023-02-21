/* A program that prompts user to enter a weight
in pounds and height in inches and displays the BMI */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Declare variables 
    double weight = 0.0;
    double height = 0.0;
    double wkg = 0.45359237;
    double hmeters = 0.0254;
    double bmi = 0.0;

    // Prompt user to enter weight and height in pounds and inches
    cout << "Enter weight strictly in pounds: "; cin >> weight;
    cout << "Enter height strictly in inches: "; cin >> height;

    // Convert weight and height to metric system
    weight = weight * wkg;
    height = height * hmeters;

    // Calculate BMI
    height = pow(height, 2);
    bmi = weight / height;

    // Display results
    cout << "BMI is: " << bmi << endl;
}