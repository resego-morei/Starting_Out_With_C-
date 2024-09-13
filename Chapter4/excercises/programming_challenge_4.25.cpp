//Mobile Service Provider

#include <iostream>

using namespace std;

int main(){

    char choice;

    //prompt
    cout<<"What is your is your Package: ";
    cin >> choice;

    //the switch statement of the user.
    
        if(choice == 'A'){
            double minute_A;

            //prompt
            cout<<"How many minutes used: ";
            cin>> minute_A;

            double total_min = minute_A - 450;
            double total_amount = 39.99;

            if (total_min < 0)
                cout <<"The total amount is $"<<total_amount<<endl;

            else{
                double amount_due = total_amount + total_min*0.45; 
                cout <<"The total amount is $"<<amount_due<<endl;
            }
        }
            
          
        else if(choice == 'B'){
            double minute_B;

            //prompt
            cout<<"How many minutes used: ";
            cin>> minute_B;

            double total_min_used = minute_B - 900;
            double total_amo = 59.99;

            if (total_min_used < 0)
                cout <<"The total amount is $"<<total_amo<<endl;

            else{
                double pay_due = total_amo + total_min_used*0.4; 
                cout <<"The total amount is $"<<pay_due<<endl;
            }

        }
            
           
        else if(choice == 'C'){
            double a_total = 69.99;
            cout<<"The amount due is $"<< a_total<<endl;

        }
            
         
        else
            cout<<"Invalid input. Please only enter input A, B and C."<<endl;


    return 0;
}