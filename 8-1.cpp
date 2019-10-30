/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: hw 8.1
opens a file, stores Hello, World, closes the file and then reads the message into a string
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("hello.txt");
    myfile<< "Hello, World!";
    myfile.close();
    
    ifstream myfile2;
    myfile2.open("hello.txt");
    string message;
    getline (myfile2, message);
    cout<<message<<endl;
    myfile2.close();
    
    return 0;
    
}