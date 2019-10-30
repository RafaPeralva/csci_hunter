/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: lab 4A
asks user for width and heigh and then prints a square
*/

#include <iostream>
using namespace std;

int main(){
    int w;
    int h;
    int i;
    int j;
    cout<<"Input width: "<<endl;
    cin>>w;
    cout<<"Input height: "<< endl;
    cin>>h;
    cout<<"Square"<<endl;
    for (i=0; i<h; i++){//gets the height
        for (j=0; j<w; j++){//prints the * width times and then moves on to next line h times
            cout<<"*";
        }
        cout<<endl;
    }




}