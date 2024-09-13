//stadium seating
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //declaration of class prices
    double class_a = 15.00f, class_b = 12.00f, class_c = 9.00f;
    double tickets_sold;

    //prompt to ask how many tickets sold
    cout << "Tickets sold for Class A: ";
    cin >> tickets_sold;

    //display tickets sold for Class A
    cout << setprecision(2) << fixed;
    cout << "Tickets sold in Class A were "<< tickets_sold<<". The profit made is $"<< setw(5) <<(class_a*tickets_sold)<<endl;

    //prompt to ask how many tickets sold
    cout << "Tickets sold for Class B: ";
    cin >> tickets_sold;

    cout << setprecision(2) << fixed;
    //display tickets sold for Class B
    cout << "Tickets sold in Class B were " << tickets_sold << ". The profit made is $" << setw(5) << (class_b*tickets_sold) << endl;

    //prompt to ask how many tickets sold
    cout << "Tickets sold for Class C: ";
    cin >> tickets_sold;
    
    cout << setprecision(2) << fixed;
    //display tickets sold for Class C
    cout << "Tickets sold in Class C were "<< tickets_sold << ". The profit made is $" << setw(5) << (class_c * tickets_sold) << endl;

    return 0;

}