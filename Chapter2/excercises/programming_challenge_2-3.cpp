//Sale Tax
#include <iostream>

int main(){
    int total_sale = 95;
    float state_sales_tax = total_sale * 0.04, county_sales_tax = total_sale * 0.02
        , total_sale_tax = state_sales_tax + county_sales_tax;

    std::cout << "The state sale tax is: $";
    std::cout << state_sales_tax;
    std::cout << std::endl;
    std::cout << "The county sale tax is: $";
    std::cout << county_sales_tax;
    std::cout << std::endl;
    std::cout << "The total sale tax is: $";
    std::cout << total_sale_tax;
    std::cout << std::endl;

    return 0;
}