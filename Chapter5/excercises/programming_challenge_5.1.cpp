//Sum of Numbers.
#include <iostream>

int main(){
    unsigned stop_number, sum_int = 0, i;

    //prompt user to enter positive integer
    std::cout << "Enter positive integer: ";
    std::cin >> stop_number;
    
    if (stop_number < 0)    std::cout << "Invalid Input! o not accept a negative starting number!" << std::endl;

    else{
        for(i = 0; i <= stop_number; i++)
            sum_int = sum_int + i;
    }

    std::cout << "The sum of the integer is: ";
    std::cout << sum_int;
    std::cout << std::endl;

    return 0;
}