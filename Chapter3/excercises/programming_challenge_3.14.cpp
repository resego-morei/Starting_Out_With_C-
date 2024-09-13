//Monthly Sales Tax
#include <iostream>
#include <iomanip>
#include <string>

int main(){
    //ask for the month
    std::string month;
    std::cout << "What is the month: ";
    std::getline(std::cin, month);

    int year;
    std::cout << "What is the year: ";
    std::cin >> year;

    double amount;
    std::cout << "What is the total amount collected at the cash register: $";
    std::cin >> amount;

    double sales = (amount/1.06f), county_sales_tax = sales * 0.02f, state_sales_tax = sales * 0.04f, total_sales_tax = sales * 0.06f;


    std::cout << "Month: " << month << "\t\t\t" << year;
    std::cout << std::endl;

 
    std::cout << "-----------------------------------" << std::endl;

    std::cout << std::setprecision(2) << std::fixed << std::right;
    std::cout << "Total Collected: \t" << std::setw(5) << "$" << amount;
    std::cout << std::endl;

    std::cout << "Sales: \t\t\t" << std::setw(5) << "$" << sales;
    std::cout << std::endl;

    std::cout << "County Sales Tax: \t" << std::setw(5) << "$" << county_sales_tax;
    std::cout << std::endl;

    std::cout << "State Sales Tax: \t" << std::setw(5) << "$" << state_sales_tax;
    std::cout << std::endl;

    std::cout << "Total Sales Tax: \t" << std::setw(5) << "$" << total_sales_tax;
    std::cout << std::endl;

    return 0;
}
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float STATE_SALES_TAX  = 0.04,
                COUNTY_SALES_TAX = 0.02,
                SALES_TAX        = 0.06;

    float S,    // product sales
          T,    // total income (product sales + sales tax)
          total_state_tax,
          total_county_tax,
          total_sales_tax;

    string month;

    int year;

    // Ask user for month, year, and total collected (sales plus sales tax)
    cout << endl;
    cout << "Enter the month to receive the report for: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Total amount collected for the month of " << month << ": ";
    cin >> T;

    // Calculate Sales, County Sales Tax, State Sales Tax, and Total Sales Tax
    S = T / 1.06;
    total_state_tax = S * STATE_SALES_TAX;
    total_county_tax = S * COUNTY_SALES_TAX;
    total_sales_tax  = S * SALES_TAX;

    // Display Calculations
    cout << setprecision(2) << fixed << right << endl;
    cout << "---------------------------------" << endl;
    cout << "Month: " << month << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Collected:    $" << setw(10) << T << endl;
    cout << "Sales:              $" << setw(10) << S << endl;
    cout << "County Sales Tax:   $" << setw(10) << total_county_tax << endl;
    cout << "State Sales Tax:    $" << setw(10) << total_state_tax << endl;
    cout << "Total Tales Tax:    $" << setw(10) << total_sales_tax << endl;
    cout << "---------------------------------" << endl;
    cout << endl;

    // Terminate Program
    return 0;
}*/