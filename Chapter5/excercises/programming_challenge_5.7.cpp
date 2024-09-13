//Pennies for Pay
#include <iostream>
#include <iomanip>
/*
int main(){
    unsigned days;
    //prompt
    std::cout << "Number of days: ";
    std::cin >> days;

    std::cout << "\nDays\t\t\tSalary" << std::endl;
    std::cout << "-------------------------------";
    std::cout << std::endl;
    std::cout << std::setprecision(2) << std::fixed;
    
    if(days >= 1){
        double salary = 0.0, rate = 0.01;

        for(int i = 1; i < days; i++){
            salary += rate;
            std::cout << i << "\t\t\t$" << rate << std::endl;
            rate *= 2;

           
        } std::cout << "\nTotal amount is: \t$" << salary << std::endl;
    }

}*/

int main(){
    int a = 75;

    for (int i = 1; i >= 5; i++){
        a = a + i;
        a = a - i;
    }
    
    a = 3 + a;
    std::cout << a << std::endl;
}