/* A program that checks whether the first number is
divisible by the second or not */
#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    cout << "Enter two integers: "; cin >> num1 >> num2;

    // Check if the first number is divisible by the second
    num1 % num2 == 0? cout << num1 << " is divisible by " << num2 << endl : cout << num1 << " is not divisible by " << num2 << endl; 
    return 0;
}