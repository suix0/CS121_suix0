// A program that solves a 2x2 linear equation

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare variables
    double a, b, c, d, e, f = 0.0;
    double bucket = 0.0;

    // Display the 2x2 linear equation and prompt user for input
    cout <<"\n\tA program to compute for the x and y of a 2x2 linear equation" << endl;
    cout << "\n\t\t\t\tax + by = e\n\t\t\t\tcx + dy = f\n" << endl;
    cout << "\tEnter a, b, c, d, e, f: "; cin >> a >> b >> c >> d >> e >> f;

    // Calculate for x and y
    bucket = (a * d) - (b * c);
    double x = ((e * d) - (b * f)) / bucket; 
    double y = ((a * f) - (e * c)) / bucket;

    // Display answer
    if (bucket == 0.0){
        cout << "\n\tThe equation has no solution" << endl;
    } else {
        cout << "\n\tx is " << x << " and y is " << y << endl;
    }
    return 0;
}