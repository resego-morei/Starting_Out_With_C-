//Magic Dates

#include <iostream>

using namespace std;

int main(){

    long unsigned day;

    //prompt to enter the day.
    cout<<"Enter the day: ";
    cin >> day;

    long unsigned month;

    //prompt to enter the month.
    cout<<"Enter the month: ";
    cin >> month;

    long unsigned year;

    //prompt to enter the year.
    cout<<"Enter the year: ";
    cin.ignore(2);
    cin >> year;

    //declaration of the multiple of month and year. 
    auto temp = month*day;

    //test if the multiple of date and month equals the year.
    if (temp == year)
        cout<<"Date is magic."<<endl;
    else
        cout<<"Date is not magic."<<endl;
    
    return 0;

}