/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: lab 4E
prints a reverse triangle
*/
#include <iostream>
using namespace std;

int main()
{
  int u;
  int len=0;
  string star = "";
  cout<<"Enter a number: "<<endl;  //enters a number
  cin>> u;
  for (int i=0; i<u+1; i++)
    {
      cout<<star;
    for(int a=u; a>len; a--)
    {
      cout<<"*";  //print the star
    }
    cout<<endl;  //sets up for a new line
    len++;
    star+=" ";
    //i--;
  }
}