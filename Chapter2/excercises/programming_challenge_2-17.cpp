//stock commission
#include <iostream>

using namespace std;

int main(){
    const float commission = 0.02f;
    int shares = 750;
    const double share_price = 35.00;


    auto amount_paid = shares*share_price;
    auto commission_amount = commission*amount_paid;

    auto total = amount_paid + commission_amount;

    cout<<"Amount Paid: $"<< amount_paid <<endl;
    cout << "Amount of the commission: $"<< commission_amount<<endl;
    cout <<"Total Money Paid: $"<< total<<endl;

    return 0;
    

}