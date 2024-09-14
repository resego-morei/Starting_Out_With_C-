//Ususally the future and present value of money is calculated for the investment and loan purposes at the bank.
//Henceforth. This expansion is the real world application of the financial calculator and how the banks calculate the value of the money you put in the bank.
/*
    calculate loan repayments
    calculate future value of an investment
    calculate investment required to reach a future value
    calculate the number of years to reach a future value
    calculate the number of years to repay a loan
    calculate the interest rate required to reach a future value
    compare two loans based of interest rate
    compare two investments based on interest rate
*/

#include <iostream>
#include <cmath>
using namespace std;

double loanRepayment(double, double, int);
double futureValue(double, double, int);
double requiredInvestment(double, double, int);
int yearsToReachFutureValue(double, double, double);
int yearsToRepayLoan(double, double, double);
double requiredInterestRate(double, double, int);
void compareLoans(double, double, double, double, int);
void compareInvestments(double, double, double, double, int);
double monthlyInterestPayment(double, double);
void printDisplay();

int main() {
    int choice;

    do {
        printDisplay();
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            double loanAmount, annualRate;
            int years;
            cout << "Enter loan amount: ";
            cin >> loanAmount;
            cout << "Enter annual interest rate (as a decimal): ";
            cin >> annualRate;
            cout << "Enter the number of years for the loan: ";
            cin >> years;
            double monthlyPayment = loanRepayment(loanAmount, annualRate, years);
            cout << "Your monthly loan repayment is: R" << monthlyPayment << endl;
        } else if (choice == 2) {
            double presentValue, annualRate;
            int years;
            cout << "Enter present value of the investment: ";
            cin >> presentValue;
            cout << "Enter annual interest rate (as a decimal): ";
            cin >> annualRate;
            cout << "Enter the number of years: ";
            cin >> years;
            double futureVal = futureValue(presentValue, annualRate, years);
            cout << "The future value of the investment is: R" << futureVal << endl;
        } else if (choice == 3) {
            double futureVal, annualRate;
            int years;
            cout << "Enter the future value you want to achieve: ";
            cin >> futureVal;
            cout << "Enter annual interest rate (as a decimal): ";
            cin >> annualRate;
            cout << "Enter the number of years: ";
            cin >> years;
            double requiredInvestmentVal = requiredInvestment(futureVal, annualRate, years);
            cout << "You need to invest R" << requiredInvestmentVal << " today." << endl;
        } else if (choice == 4) {
            double presentValue, futureVal, annualRate;
            cout << "Enter the present value of the investment: ";
            cin >> presentValue;
            cout << "Enter the future value you want to achieve: ";
            cin >> futureVal;
            cout << "Enter annual interest rate (as a decimal): ";
            cin >> annualRate;
            int years = yearsToReachFutureValue(presentValue, futureVal, annualRate);
            cout << "It will take " << years << " years to reach your future value." << endl;
        } else if (choice == 5) {
            double loanAmount, monthlyRepayment, annualRate;
            cout << "Enter loan amount: ";
            cin >> loanAmount;
            cout << "Enter monthly repayment amount: ";
            cin >> monthlyRepayment;
            cout << "Enter annual interest rate (as a decimal): ";
            cin >> annualRate;
            int years = yearsToRepayLoan(loanAmount, monthlyRepayment, annualRate);
            cout << "It will take " << years << " years to repay the loan." << endl;
        } else if (choice == 6) {
            double presentValue, futureVal;
            int years;
            cout << "Enter present value: ";
            cin >> presentValue;
            cout << "Enter future value: ";
            cin >> futureVal;
            cout << "Enter the number of years: ";
            cin >> years;
            double rate = requiredInterestRate(presentValue, futureVal, years);
            cout << "The required interest rate to reach the future value is: " << rate * 100 << "%" << endl;
        } else if (choice == 7) {
            double loan1Amount, loan1Rate, loan2Amount, loan2Rate;
            int years;
            cout << "Enter loan 1 amount: ";
            cin >> loan1Amount;
            cout << "Enter loan 1 interest rate (as a decimal): ";
            cin >> loan1Rate;
            cout << "Enter loan 2 amount: ";
            cin >> loan2Amount;
            cout << "Enter loan 2 interest rate (as a decimal): ";
            cin >> loan2Rate;
            cout << "Enter the number of years: ";
            cin >> years;
            compareLoans(loan1Amount, loan1Rate, loan2Amount, loan2Rate, years);
        } else if (choice == 8) {
            double investment1, rate1, investment2, rate2;
            int years;
            cout << "Enter investment 1 amount: ";
            cin >> investment1;
            cout << "Enter investment 1 interest rate (as a decimal): ";
            cin >> rate1;
            cout << "Enter investment 2 amount: ";
            cin >> investment2;
            cout << "Enter investment 2 interest rate (as a decimal): ";
            cin >> rate2;
            cout << "Enter the number of years: ";
            cin >> years;
            compareInvestments(investment1, rate1, investment2, rate2, years);
        } else if (choice == 9) { 
            double investmentAmount, annualRate;
            cout << "Enter investment amount: ";
            cin >> investmentAmount;
            cout << "Enter annual interest rate (as a decimal): ";
            cin >> annualRate;
            double interestPayment = monthlyInterestPayment(investmentAmount, annualRate);
            cout << "The monthly interest payment is: R" << interestPayment << endl;
        }

    } while (choice != 0);

    return 0;
}

void printDisplay(){
    cout << "\n--- Financial Calculator ---" << endl;
    cout << "1. Calculate loan repayments" << endl;
    cout << "2. Calculate future value of an investment" << endl;
    cout << "3. Calculate investment required to reach a future value" << endl;
    cout << "4. Calculate the number of years to reach a future value" << endl;
    cout << "5. Calculate the number of years to repay a loan" << endl;
    cout << "6. Calculate the interest rate required to reach a future value" << endl;
    cout << "7. Compare two loans based of interest rate" << endl;
    cout << "8. Compare two investments based on interest rate" << endl;
    cout << "9. Calculate monthly interest payment for an investment" << endl;
    cout << "0. Exit" << endl;
}

double loanRepayment(double loanAmount, double annualRate, int years) {
    double monthlyRate = annualRate / 12;
    int months = years * 12;
    return (loanAmount * monthlyRate) / (1 - pow(1 + monthlyRate, -months));
}

double futureValue(double presentValue, double annualRate, int years) {
    return presentValue * pow(1 + annualRate, years);
}

double requiredInvestment(double futureValue, double annualRate, int years) {
    return futureValue / pow(1 + annualRate, years);
}

int yearsToReachFutureValue(double presentValue, double futureValue, double annualRate) {
    return log(futureValue / presentValue) / log(1 + annualRate);
}

int yearsToRepayLoan(double loanAmount, double monthlyRepayment, double annualRate) {
    double monthlyRate = annualRate / 12;
    return (-log(1 - (loanAmount * monthlyRate) / monthlyRepayment) / log(1 + monthlyRate)) / 12;
}

double requiredInterestRate(double presentValue, double futureValue, int years) {
    return pow(futureValue / presentValue, 1.0 / years) - 1;
}

void compareLoans(double loan1Amount, double loan1Rate, double loan2Amount, double loan2Rate, int years) {
    double loan1Repayment = loanRepayment(loan1Amount, loan1Rate, years);
    double loan2Repayment = loanRepayment(loan2Amount, loan2Rate, years);
    cout << "Loan 1 monthly repayment: R" << loan1Repayment << endl;
    cout << "Loan 2 monthly repayment: R" << loan2Repayment << endl;

    if (loan1Repayment < loan2Repayment) {
        cout << "Loan 1 is better with lower monthly repayment." << endl;
    } else if (loan2Repayment < loan1Repayment) {
        cout << "Loan 2 is better with lower monthly repayment." << endl;
    } else {
        cout << "Both loans have the same monthly repayment." << endl;
    }
}

void compareInvestments(double investment1, double rate1, double investment2, double rate2, int years) {
    double futureVal1 = futureValue(investment1, rate1, years);
    double futureVal2 = futureValue(investment2, rate2, years);
    cout << "Investment 1 future value: R" << futureVal1 << endl;
    cout << "Investment 2 future value: R" << futureVal2 << endl;

    if (futureVal1 > futureVal2) {
        cout << "Investment 1 has a higher future value." << endl;
    } else if (futureVal2 > futureVal1) {
        cout << "Investment 2 has a higher future value." << endl;
    } else {
        cout << "Both investments have the same future value." << endl;
    }
}

double monthlyInterestPayment(double investmentAmount, double annualRate) {
    double monthlyRate = annualRate / 12;
    return investmentAmount * monthlyRate;
}