/* A program that reads an integer between 0 and 1000
and adds all the digits in the integer */

#include <iostream>
using namespace std;

int main(){
    // Create a variable and ask user for value to sum its digits
    int num1 = 0;
    int bucket = 0;
    int bucket2 = 0;
    int bucket3 = 0;
    int bucket4 = 0;
    int sum = 0;
    cout << "Enter a number between 0 and 1000: "; cin >> num1;

    // Check to see if the number entered is valid
    if (num1 >= 0 && num1 <= 1000){
        // If the number entered is valid, calculate sum
        // Lezgo hardcode i am still noob looper T_T
        // Will optimize code when i am master looper xd
        bucket = num1 % 10;
        bucket2 = num1 / 10;
        bucket3 = bucket2 % 10;
        bucket4 = bucket2 /10;
        sum = bucket + bucket3 + bucket4;
        cout << "The sum of the digits is: " << sum << endl;
    } else {
        cout << "Invalid input" << endl;
    }
}

