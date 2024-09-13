//Geometry Calculator

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //programs menu

    cout<<"Geometry Calculator" <<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<< "3. Calculate the Area of a Triangle"<<endl;
    cout<< "4. Quit"<<endl;

    //declare user's choice
    unsigned short int option;
    cout<<"What is your choice: ";
    cin>> option;

    switch(option){
        case 1: 
            double radius;
            //prompt the user to enter the radius of the circle.
            cout<<"What is the radius of the circle: "<<endl;
            cin>>radius;
            
            double circle_area;
            circle_area = 3.14159 * pow(radius,2);
            cout<<"The Area of the circle is: "<<circle_area<<endl;

            break;

        case 2:
            double length, width;

            //prompt the user to enter the length and width.
            cout<<"What is the length of the rectangle: ";
            cin>> length;

            cout<<"What is the width of the rectangle: ";
            cin>> width;

            double rect_area;
            rect_area = length*width;

            cout<<"The Area of the rectangle is: "<<rect_area<<endl;

            break;

        case 3:
            double base, height;

            //prompt the user to enter the base and height of triangle.
            cout<<"What is the base of the triangle: ";
            cin >> base;

            cout <<"What is the height of the triangle: ";
            cin >> height;

            double tri_area;
            tri_area = base * height * 0.5;

            cout<<"The Area of the triangle is: "<< tri_area <<endl;

            break;

        case 4:
            cout<<"User choice to quit."<<endl;

            break;

        default:
            cout<<"You have entered numbers out of bound. Please input within range."<<endl;
            break;
    }

    return 0;
}