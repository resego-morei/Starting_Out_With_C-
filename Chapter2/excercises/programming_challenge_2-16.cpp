//Diamond Pattern
#include<iostream>
#include<iomanip>

//setw() -> used to set the ios library field width based on width specified as parameter to this method.
//syntax -> setw(int n) - n is integer argument corresponding to which the field width is to be set. 
int main(){
    std::cout << std::setw(6);
    std::cout << "*";
    std::cout << std::endl;

    std::cout << std::setw(7);
    std::cout << "***";
    std::cout << std::endl;

    std::cout << std::setw(8);
    std::cout << "*****";
    std::cout << std::endl;

    std::cout << std::setw(9);
    std::cout << "*******";
    std::cout << std::endl;

    std::cout << std::setw(8);
    std::cout << "*****";
    std::cout << std::endl;

    std::cout << std::setw(7);
    std::cout << "***";
    std::cout << std::endl;

    std::cout << std::setw(6);
    std::cout << "*";
    std::cout << std::endl;

    return 0;
}