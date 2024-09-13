//Calories Burned
#include <iostream>

using namespace std;

int main(){
    double Calories = 3.6;
    
    //number of programs
    unsigned num = 6;

    //table content
    cout<<"Calories\tBurned per Minute"<<endl;
    cout << "---------------------------------"<<endl;

    for(int i = 1; i <= num; i++)
        cout << (i * 5) << "\t \t" << ( (i * 5) * Calories) << endl;
    
    return 0;
}