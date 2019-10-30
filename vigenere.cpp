/*
Author: Rafaela Peralva
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: LAB 6C
vigenere encryption
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string encryptVigenere(string plaintext, string keyword);
char shiftChar(char c, int rshift);

int main(){
    string s;
    string key;
    cout <<"Enter the text: "<<endl;
    getline(cin,s);
    cout<<"Enter keyword: "<<endl;
    getline(cin, key);
    cout <<encryptVigenere(s,key)<<endl;
}

/*char shift(char c, char a){
    int shift;
    if (isalpha(c) && isalpha(a)){
        for (int i=97; i<=122; i++){
            for (int j=0; j<26; j++){
                if (c ==i){
                    shift=j;
                    a+=shift;
                }
            }
        }
    }
    if ((c=='a' || c=='A')){
        shift =0;

    }
    
   return a;
}
*/
/*
char shiftChar(char c, char a){//shifts each character by r
    //if (isalpha(c)){
        int shift;
        int key= a-'a';
        string st= "";
        if(c>='A' && c<='Z'){
            shift= ('A'+(c-'A'+key+26)%26);
        }
        if (c>='a' && c<='z'){
            shift =('a'+(c-'a'+key+26)%26);
        }
// }
    return shift;
}
*/

char shiftChar(char c, int rshift){//shifts each character by r
        if(c>='A' && c<='Z'){
            c = ('A'+(c+rshift-'A')%26);
        }
        if (c>='a' && c<='z'){
            c =('a'+(c+rshift-'a')%26);
        }
    return c;
}


/*
string encryptVigenere(string plaintext, string keyword){
    int letnum [26];
    string nmn="";
    int len = keyword.length();
    int plen= plaintext.length();
    int l=0;
    int r=0;
    
    while(l<plen){
        for (r=1; r<=len; ++r){
            nm+=shiftChar(plaintext[l],keyword[r-1]);
            l++;
        }
        if(r==len){
            r=1;
        }
        // if (len==plen){
        //    break;
        //}
        
    }
            //shifts the char s of the plaint text by k
    return nm;
}
*/

string encryptVigenere(string plaintext, string keyword){
    string encrypted = "";
    int shift;
    int j = 0;
    for (int i = 0; i < plaintext.length(); i++){
        if (isalpha(plaintext[i])){
            shift = (int)(keyword[j])-(int)('a');
            // cout << plaintext[i] << " " << shift << endl;
            j++;
        }
        
        encrypted += shiftChar(plaintext[i], shift);
        if (j == keyword.length()){
            j = 0;
        }
    }
    return encrypted;
}


