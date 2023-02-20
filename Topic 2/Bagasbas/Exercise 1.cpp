/* Program that reads in the radius and lenght of a
cylinder and computes the area and volume */

#include <iostream>
using namespace std;

int main(){
    double radius, area, volume, lenght = 0.0;
    const double PI = 3.141592;

    // Ask user for the value of radius and lenght
    cout << "Radius: "; cin >> radius;
    cout << "Lenght: "; cin >> lenght;

    // Compute the area and volume 
    area = radius * radius * PI;
    volume = area * lenght;

    // Display results
    cout << "The area of the cylinder is: " << area << endl;
    cout << "The volume of the cylinder is: " << volume << endl;
    return 0;
}