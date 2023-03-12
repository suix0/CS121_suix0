/* A program that prompts the user to enter the latitude and 
longitute of two points on earth in degrees and displays its 
great circle distance. */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Prompt user for latitude and longitute of point 1
    double x1, y1, x2, y2, distance = 0.0;
    cout << "Enter point 1 latitude in degrees: "; cin >> x1;
    cout << "Enter point 1 longitute in degrees: "; cin >> y1;

    // Now prompt user for point 2
    cout << "\nEnter point 2 latitude in degrees: "; cin >> x2;
    cout << "Enter point 2 longitute in degrees: "; cin >> y2;

    // Calculate for distance
    const double PI = 3.14159265358979323846;
    const double RADIUS = 6371; 
    x1 = x1 * PI / 180;
    y1 = y1 * PI / 180;
    x2 = x2 * PI / 180;
    y2 = y2 * PI / 180;
    
    distance = RADIUS * acos(((sin(x1)) * (sin(x2))) + ((cos(x1)) * (cos(x2)) * (cos(y1 - y2))));
    cout << "The distance between the two point is " << distance << " km" << endl;
    return 0;
}