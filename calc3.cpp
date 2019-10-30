/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: project 1D
uses cin to print the sum, subtraction and square of the numbers in txt document
*/

#include <iostream>
using namespace std;
int main() {
int numbers = 0; 
int sum = 0;
int prevnum = 0;
char op;
char prevop = ';';

cin >> sum;
numbers = sum;
	
	while (cin >> op) {
		// Checks if the next operator is ^ 
		if (op == '^') {
			// If the previous operator was a ; then it adds the current number squared
			if (prevop == ';' ) {
				sum = (numbers * numbers);
			}
			// If the previous operator was a + then it subtracts the current number and then adds the number squared
			else if (prevop == '+') {
				sum = sum - numbers + (numbers * numbers);
			}
			// If the previous operator was a - then it adds the current number and subtracts the number squared
			else if (prevop == '-') {
				sum = sum + numbers - (numbers * numbers);
			}
		} 
		// If the current operator is a ; then it outputs the current sum, and resets 
		
		else if (op == ';'){
			cout << sum << endl;
			cin >> sum;
			numbers = sum;
			prevop = '+';
		}
		else {
			cin >> numbers;
			// If the current operator is a + then it adds numbers to sum
			if(op == '+') {
				sum += numbers;
				prevop = op;
			}
			// If the current operator is a - then it subtracts numbers from sum
			else if(op == '-') {
				sum -= numbers;
				prevop = op;
			}
		} 
	}
}