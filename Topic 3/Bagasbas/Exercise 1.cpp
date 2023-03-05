/* A program that solves and displays the the two roots
of a quadratic equation */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout <<"\nA program that solves the two roots of a quadratic equation " <<
    "ax^2 + bx + c = 0.\n"<< endl;
    
    // Promp user for input
    double a, b, c = 0.0;
    cout << "Enter a, b, and c: "; cin >> a >> b >> c;

    // Calculate for the discriminant
    double discriminant = (pow(b, 2)) - (4 * (a * c));
    
    // Calculate for the roots
    double root1 = (-b + (pow(pow(b, 2) - (4 * (a * c)), 0.5))) / 2 * a;
    double root2 = (-b - (pow(pow(b, 2) - (4 * (a * c)), 0.5))) / 2 * a;
    
    // Display the roots depending on the discriminant
    if (discriminant > 0.0){
        cout << "The roots are " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0){
        cout << "The root is " << root1 << endl;
    } else {
        cout << "The equation has no real roots";
    }
    return 0;
}