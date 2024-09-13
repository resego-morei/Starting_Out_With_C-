//Energy Drink Consumption
#include <iostream>

using namespace std;

int main(){
    const int customers = 16500;
    const double percent_survayed = 0.15;
    const double percent_prefer_citrus = 0.58;

    int customers_purchased = customers*percent_survayed;
    int customers_prefer_citrus = customers_purchased*percent_prefer_citrus;

    cout<<"number of customers in the survey who purchase one or more energy drinks per week is "<<customers_purchased<<endl;
    cout<<"number of customers in the survey who prefer citrus-flavored energy drinks is "<< customers_prefer_citrus<<endl;
}