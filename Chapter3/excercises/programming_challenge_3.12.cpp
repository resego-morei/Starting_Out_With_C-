//Celsius to Fahrenheit

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //Declaration of the Celsius integer.
    double Celsius;

    //Prompt to ask the user to input the temperature.
    cout<<"What is the current Temperature in Celsius: ";
    cin >> Celsius;

    //The declaration of Quotient multiplied with the Celsius.
    const double quotient = 9/5;


    //The conversion to Fahrenheit
    double Fahrenheit = (quotient*Celsius) + 32;


    cout<<setprecision(2)<<fixed<<endl;
    cout <<"The temp input in Celsius is "<< Celsius<< " and the conversion to Fahrenheit is "<< Fahrenheit<< "."<<endl;

    return 0;


}