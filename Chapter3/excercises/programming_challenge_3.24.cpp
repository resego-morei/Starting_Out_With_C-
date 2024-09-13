//Word Game.

#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;

    cout<<"What is your name: ";
    getline(cin, name);

    int age;

    cout<<"What is your age: ";
    cin >> age;

    string city;

    cout<<"What city are you from: ";
    //cin.sync();
    getline(cin, city);

    string college;

    cout<<"What college do you attend: ";
    getline(cin, college);

    string profession;

    cout<<"What is your profession: ";
    getline(cin, profession);

    string animal;

    cout<<"What is your animal type: ";
    getline(cin, animal);

    string pet;

    cout<<"What is your pet name: ";
    getline(cin, pet);

    cout<<"There once was a person named "<< name<< " who lived in " << city<< ". At the age of " << age;
    cout <<", " << name<< " went to college at "<< college<< ". ";
    cout<< name << " graduated and went to work as a "<<profession<<". ";
    cout<<"Then, " << name<< " adopted a(n) "<< animal<< " named "<< pet;
    cout<<". They both lived happily ever after!"<<endl;



}