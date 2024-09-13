//Sale Bar Chart

#include <iostream>

using namespace std;

int main(){

    for (int x = 1; x <= 5; x++){
        //declaration
        unsigned sales;

        //prompt 
        cout << "Enter today's sales for store " << x << ": ";
        cin >> sales;

        //declarations
        float num_star = sales / 100;
        char star = '*';

    
        for (int i = 0; i < num_star; i++ )
            cout << star;
        cout << endl;
    }

    return 0;
}