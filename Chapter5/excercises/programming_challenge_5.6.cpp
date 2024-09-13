//Distance Traveled
#include <iostream>

using namespace std;

int main(){

    //declarations
    double speed;
    unsigned time;

    //prompt
    cout << "What is the speed of the vehicle in mph: ";
    cin >> speed;

    //Input Validation
    if(speed > 0){
        cout << "How many hours has it traveled: ";
        cin >> time;
        
        if(time >= 1){
            //table 
            cout << "Hours" << "\t\t" << "Distance Traveled" << endl;
            cout << "----------------------------------" << endl;

            for (int i = 1; i <= time; i++)
                cout << i << "\t\t|" << (speed * i) << " mph" << endl;
        }
        else 
            cout << "The time is less than 1 hour." << endl;

    }
    else
        cout << "The speed is Negative." << endl;

    return 0;
}