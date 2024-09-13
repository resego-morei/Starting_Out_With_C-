//miles per Gallons -> program that calculates a car's gas mileage.
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //declaration of integer gallons.
    double gallons;
    //number of gallons of gas the car can hold
    cout << "How much gallons of gas can the car hold: ";
    cin >> gallons;

    //declaration of interger miles
    double miles;

    //number of miles it can be driven on a full tank
    cout << "What is the number of miles can be driven on a full tank: ";
    cin >> miles;

    //number of miles that may be driven per gallon of gas
    auto miles_driven = miles/gallons;

    cout << "The miles that may be driven per gallon of gas is ";
    cout << setprecision(3);
    cout << miles_driven;
    cout << " miles.";
    cout << endl;

    return 0; 
}