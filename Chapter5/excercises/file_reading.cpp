//programm practice with C++: Read files line by line
#include <iostream>
#include <fstream>
#include <iomanip>
/*
int main(int argc, char const *argv[]){
    std::ifstream f(argv[1]);
    std::string line;

    unsigned int num_line = 1;

    while(getline(f, line)){
        std::cout << num_line << ": " << line << std::endl;
        num_line++;
    }

    return 0;
}

//Reading from a File: https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm

int main(){
    char data[100];

    //open a file in wreite mode
    std::ofstream open_file;
    open_file.open("file.txt");

    std::cout << "Writing to the file" << std::endl;
    std::cout << "Enter your name: ";
    std::cin.getline(data, 100);

    //write inputted data into the file

    open_file << data << std::endl;

    std::cout << "Enter your age: ";
    std::cin >> data;
    std::cin.ignore();

    open_file << data << std::endl;

    open_file.close();
}

//File Handling in C++ Example: https://simplesnippets.tech/file-handling-in-cpp/

#include <fstream>
#include <iostream>

int main(){
    char data[100];

    std::ofstream outfile;
    outfile.open("afile.txt");

    std::cout << "Writing to the file";
    std::cout << std::endl;

    std::cout << "Enter your name: ";
    std::cin.getline(data, 100);

    outfile << data << std::endl;

    outfile.close();

    std::ifstream infile;
    infile.open("afile.txt");

    std::cout << "Reading from the file: ";
    std::cout << std::endl;

    //The pointer stores the first part before the space
    infile >> data;
    std::cout << data;

    //The pointer after storing the first part. It then moves on to store the second part of the characters.
    infile >> data;
    std::cout << " " << data << std::endl;

    infile.close();

    return 0;
}*/

//C++ Programming Tutorial 60 - Writing to Files with ofstream: https://www.youtube.com/watch?v=XJhIJ6J5obY&ab_channel=CalebCurry
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    std::ofstream file;
    file.open("hello.txt");
    //shorter text -> std::ofstream file("hello.txt");
    string name;

    cout<<"What is your name: ";
    getline(cin, name);

    int age;

    cout<<"What is your age: ";
    cin >> age;

    string city;

    cout<<"What city are you from: ";
    cin.sync();
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

    file<<"There once was a person named "<< name<< " who lived in " << city<< ". At the age of " << age;
    file <<", " << name<< " went to college at "<< college<< ". ";
    file<< name << " graduated and went to work as a "<<profession<<". ";
    file<<"Then, " << name<< " adopted a(n) "<< animal<< " named "<< pet;
    file<<". They both lived happily ever after!"<<endl;


    
    file.close();

    return 0;
}