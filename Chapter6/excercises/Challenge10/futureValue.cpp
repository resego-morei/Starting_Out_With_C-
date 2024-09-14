#include <iostream>
#include <cmath>
using namespace std;

double futureValue(double, double, int);
void display(int, double);

int main() {
    double presentValue, monthlyInterestRate;
    int months;

    cout << "Enter the present value of the account: ";
    cin >> presentValue;

    cout << "Enter the monthly interest rate (as a decimal, e.g. 0.01 for 1%): ";
    cin >> monthlyInterestRate;

    cout << "Enter the number of months the money will be left in the account: ";
    cin >> months;

    double futureVal = futureValue(presentValue, monthlyInterestRate, months);

    display(months, futureVal);

    return 0;
}


double futureValue(double presentValue, double monthlyInterestRate, int months) {
    return presentValue * pow(1 + monthlyInterestRate, months);
}

void display(int months, double futureVal) {
    cout << "The future value of the account after " << months << " months will be R" << futureVal << endl;
}