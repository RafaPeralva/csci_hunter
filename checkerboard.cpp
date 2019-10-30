/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: lab 4B
asks user for width and heigh and then prints a checkerboard
*/

#include <iostream>
using namespace std;

int main()
{
  int w;
  int h;
  int len=0;
  string space = "";
  cout<<"Enter a width: "<<endl;  //enters a number
  cin>> w;
  cout<<"Enter height: "<< endl;
  cin>>h;
  char star='*';

  for (int i=0; i<h; i++)
    {
    if (w%2==0){
        if (i%2==0){

            for(int a=0; a<w/2; a++){
                cout<<star;
                cout<<" ";
            }
        }
        else{
            for (int a=0; a<w/2; a++){
                cout<<" "; 
                cout<<star;
            
            }
        }
        cout<<endl;
    }
    else{
        if (i%2==0){

            for(int a=0; a<(w/2)+1; a++){
                cout<<star;
                cout<<" ";
                
            }
        }
        else{
            for (int a=0; a<(w/2); a++){
            cout<<" ";
            cout<<star;
            
            }
            
        }
        cout<<endl;
    }

    }


    //cout<<space;
    //w-=2;
    cout<<endl;  //sets up for a new line
    //len++;
    //space+=" ";
    //i--;
  }

