/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: lab 1B
asks user to input three integers and prints the smallest one
*/

#include <iostream>
using namespace std;

int main(){
	int num1= 0;
	int num2=0;
	int num3= 0;
	cout<< "Please enter an integer number "<<endl; //asks user to input a number
	cin>>num1;
	cout<< "Please enter another integer "<< endl;
	cin>> num2;
	cout<< "Please enter one more integer "<< endl;
	cin>> num3;
	if ((num1) < (num2) && (num1) < (num3)){ //checks to see which number is the smallest
		cout<< "The smaller of the three is: "<< num1;
		}
	else if ((num2) < (num1) && (num2) < (num3)){
		cout<<"The smaller of the three is: "<< num2;
		}
	else{
		cout<< "The smaller of the three is: "<< num3;
		}
}
