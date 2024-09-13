//Body Mass Index

#include <iostream>
#include<cmath> 

using namespace std;

int main(){
    double height;
    //prompt the user to enter their height
    cout<<"What is your height: ";
    cin>> height;

    double weight;
    //prompt the user to enter their weight
    cout <<"How much do you weight: ";
    cin >> weight;

    //declaration and calculation of BMI
    double height_squared = pow(height, 2);
    double BMI = weight * (703 / height_squared);

    //decision making of the BMI
    if(BMI < 18.5)
        cout<<"You are underweight."<<endl;
    
    else if(BMI >= 18.5 && BMI <= 25)
        cout<<"You are healthy. Your Body is optimal."<<endl;
    else if(BMI > 25)
        cout<<"You are overweight."<<endl;
    else
        cout<<"You have entered wrong input.";

    return 0;
}