/* A program that prompts user to enter the side 
of a hexagon and displays its area */

#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    double side = 0.0;
    std::cout << "Enter the side of the hexagon: "; std::cin >> side;

    // Calculate for the area
    const double PI =  3.14159265358979323846;
    double area = (6 * (pow(side, 2))) / (4 * (tan(PI / 6)));
    std::cout << "The area of the hexagon is " << std::fixed << std::setprecision(2) << area << std::endl;
    return 0;
}