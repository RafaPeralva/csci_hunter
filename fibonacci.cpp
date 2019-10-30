/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: lab 2D
calculates fibonacci's number
*/
#include <iostream>
using namespace std;

int main(){
	int i;
	// make an array
	int fib[60];
	// first two terms are given
	fib[0] = 0;
	fib[1] = 1;
	cout<< "0"<<endl;
	cout<< "1"<< endl;
	for (i=2; i<60; i++){
		fib[i] = fib[i-1] + fib[i-2];
		cout<< fib[i]<< endl;
	}

}