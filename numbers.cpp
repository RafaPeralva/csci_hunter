/*
Author: Rafaela Peralva
Course: CSCI-136
calculates largest twin prime in range
*/
#include <iostream>
using namespace std;

 bool isDivisibleBy(int n, int d){//checks if n is divible by d
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

bool isPrime(int num){//checks if num is prime
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
int countPrimes(int a, int b){
    int primes= 0;
    int i;
    for (i=a; i<=b; i++){//counts how many times to add the numbers to the array
        if (isPrime(i)==true){
            primes+=1;
        }
    }
    return primes;

    }
bool isTwinPrime(int n){
    bool stat=true;
    if(isPrime(n)==true){
        if ((isPrime(n-2)==false) && (isPrime(n+2)==false)){
        stat=false;
    }
    }
    else {
        stat=false;
    }
    
    return stat;
}
int nextTwinPrime(int n){
    int nextt, d;
    d= nextPrime(n);
    while(isTwinPrime(d)==false){
        d+=1;
    }
    nextt=d;
    return nextt;

}
int largestTwinPrime(int a, int b){
    for (int i=b; i>=a; i--){
        if (isTwinPrime(i)==true) {
            return i;
            
        }
        
    }
    if (isTwinPrime(a)==false){
        return -1;
    }

}


int main(){
    int a, b;
    cout<< "Enter two numbers from lowest to highest: "<<endl;
    cin>> a>> b;
    cout<<"The biggest twin number is:"<< largestTwinPrime(a,b)<<endl;
}