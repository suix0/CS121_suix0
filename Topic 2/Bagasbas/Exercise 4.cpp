/* A program that prompts the user to enter the driving
distance to drive, fuel efficieny of the car in miles per galon,
and the price per galon, and displays the cost of the trip*/

#include <iostream>
using namespace std;

int main(){
    // Prompt user to enter driving distance
    double drivingDistance = 0.0;
    cout << "Enter the driving distance: "; cin >> drivingDistance;
    
    // Prompt user to enter miles per galon
    double milesPerGal = 0.0;
    cout << "Enter miles per galon: "; cin >> milesPerGal;

    // Prompt user to enter price per galon
    double pricePerGal = 0.0;
    cout << "Enter price per galon: "; cin >> pricePerGal;

    // Calculate cost of the trip
    double costOfTrip = (drivingDistance / milesPerGal) * pricePerGal;
    cout << "The cost of driving is $" << costOfTrip << endl;
    return 0;
}