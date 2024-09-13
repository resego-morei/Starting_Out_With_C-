//Membership Fees Increase
#include <iostream>
#include <cmath>

int main(){
    unsigned  number_years = 6, i;
    double  membership = 2500.00,percentage_increase = 0.04f;

    std::cout << "Year\t\t\tMembership Fee" << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    for(i = 1; i <= number_years; i++)
        std::cout << i << "\t\t\t$" << (membership * pow(i, percentage_increase)) << std::endl;
    
    return 0;
}