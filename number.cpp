/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: lab 5C
a function that calculates the next prime number
*/

#include <iostream>
using namespace std;

 bool isDivisibleBy(int n, int d){
    bool status;
    if (d==0){//tests if denominator is 0
        status=false;

    }
    else if (n%d==0){// tests if n is divisible by d
        status=true;
    }
    else{//if it is not divisible sets status to false
        status=false;
    }
    return status;
}

bool isPrime(int num){
    bool prime = true;
    int i;
    if (num<2){
        prime=false;
    }
    for (i=2; i<=(num-1); i++){
            if (num%i==0){
                prime=false;
            }
    }
    return prime;

}

int nextPrime(int n){
    int next;
    if (n<0){// if neg next smallest number is 2
        next= 2;
    }
    else if((isPrime(n)==false ) && (n%2==0) || (n==1)){//checks if number is not prime and if it is even
        next= n+1;
        while (isPrime(next)==false){
            next=next+2;
        }

    }
    else if((isPrime(n)==false) && (n%2!=0)){//tests non prime odd numbers
        next= n+2;
        while (isPrime(next)==false){
            next=next+2;
        }
    }
    else if (isPrime(n)==true && (n==1)){//tests for 1, special case
        next=n+1;
        while (isPrime(next)==false){
            next= next+2;
        }
    }
    else if((isPrime(n)==true) && (n==2)){//tests for 2 special case
        next=n+1;
    }
    else if (isPrime(n)==true){
        next=n+2;
        while (isPrime(next)==false){
            next= next+2;
        }
    }

     return next;
}

int main(){
    int n;
    cout<< "Enter a number: "<<endl;
    cin>> n;
    cout<<"The next prime number is: "<< nextPrime(n)<<endl;

}