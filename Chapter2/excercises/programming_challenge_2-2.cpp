//sales prediction
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const float percent = 0.58f; //0.58f -> force a literal to be stored as a float. letter F or f is appended to the end of decimal number
    long double total_sales = 8600000*percent;
    
    cout << "$ ";
    cout << fixed; //always display floating point numbvers in the decimal format. displays numbers upto 6 decimal points. 
    cout << setprecision(2); // speciifys decimal points. specifys number of decimal pointss to print in cout. function defined in iomanip header file. stands for -> I/O manipulations 
    cout << total_sales;
    cout << endl;

    return 0;

}
