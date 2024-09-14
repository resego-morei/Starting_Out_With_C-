#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate the retail price
double calculateRetail(double, double);

int main() {
    double wholesaleCost, markupPercentage;
    
    // Input validation for wholesale cost
    while (true) {
        cout << "Enter the item's wholesale cost (in Rands): R";
        cin >> wholesaleCost;
        
        if (wholesaleCost < 0) {
            cout << "Wholesale cost cannot be negative. Please try again.\n";
        } else {
            break;
        }
    }
    
    // Input validation for markup percentage
    while (true) {
        cout << "Enter the markup percentage: ";
        cin >> markupPercentage;
        
        if (markupPercentage < 0) {
            cout << "Markup percentage cannot be negative. Please try again.\n";
        } else {
            break;
        }
    }
    
    // Calculate and display the retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    
    // Displaying the retail price formatted to two decimal places, in Rands
    cout << fixed << setprecision(2);
    cout << "The item's retail price is: R" << retailPrice << endl;
    
    return 0;
}

double calculateRetail(double wholesaleCost, double markupPercentage) {
    return wholesaleCost + (wholesaleCost * (markupPercentage / 100));
}