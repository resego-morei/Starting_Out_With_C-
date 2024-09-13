//Pattern Display

#include <iostream>

using namespace std;

int main(){
    
    //declaration
    unsigned row;

    //prompt 
    cout << "Enter the number of rows: ";
    cin >> row;

    char symbol = '+';

    cout << "Pattern A" << endl;
    //first triangle
    for(int x = 1; x <= row; x++){
        for (int y = 1; y <= x; y++)
            cout << symbol;
        cout << endl;
    }

    cout << endl << "Pattern B"<< endl;

    //second triangle 
    for(int i = row; i >= 1; i--){
        for (int k = i ; k > 0; k--)
            cout << symbol;
        cout << endl;
    }


    return 0;


}