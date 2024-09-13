//Ocean Levels
#include <iostream>
#include <iomanip>

int main(){
    unsigned year = 1;
    double rise = 0, total_rise;

    std::cout << "Year";
    std::cout << "\t\t";
    std::cout << "Ocean Level Rise";
    std::cout << std::endl;

    std::cout << "--------------------------------";
    std::cout << std::endl;


    for(year = 1; year < 26; year++, rise += 1.5){
        total_rise = rise + 1.5;
        std::cout << "| " << year << "\t" << "|" << "\t" << total_rise << "\t\t|" << std::endl;    
    }

    std::cout << "--------------------------------";
    std::cout << std::endl;
    return 0;
}