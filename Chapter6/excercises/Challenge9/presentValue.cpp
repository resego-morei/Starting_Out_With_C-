#include <iostream>
#include <cmath>  
using namespace std;

double presentValue(double, double, int);
void display(double, double, int, double);

int main() {
    double futureValue, annualRate;
    int years, percentage = 100;

    cout << "Enter the future value you want: ";
    cin >> futureValue;

    cout << "Enter the annual interest rate (as a decimal, e.g. 0.08 for 8%): ";
    cin >> annualRate;

    cout << "Enter the number of years you plan to let the money sit: ";
    cin >> years;
    double presentVal = presentValue(futureValue, annualRate, years);
    double annualInterestRate = annualRate * percentage;

    display(presentVal, futureValue, years, annualInterestRate);

    return 0;
}

double presentValue(double futureValue, double annualRate, int years) {
    return futureValue / pow(1 + annualRate, years);
}

void display(double presentVal, double futureValue, int years, double annualInterestRate) {
    cout << "You need to deposit R" << presentVal << " today to reach R" << futureValue << " in " 
         << years << " years with an annual interest rate of " << annualInterestRate << "%." << endl;
}