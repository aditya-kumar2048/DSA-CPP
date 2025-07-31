#include<iostream>
using namespace std ; 

int main(){
    char ch = 'Q'; // initialize a character variable

    if(ch>='A'&& ch<='Z'){
        cout<<"The character is uppercase"<<endl; // check if character is uppercase

    }
    else if(ch>='a' && ch<='z'){
        cout << "The character is Lowercase"<<endl; // check if character is lowercase

    }
    else{
        cout << "The character is neither uppercase nor Lowercase"<<endl; // if character is neither
    }

    //method 2

    if(ch>=65 && ch<=90){
        cout << "The character is uppercase"<<endl; // check if character is uppercase using ASCII values

    }
    else if(ch>=97 && ch<=122){
        cout << "The character is Lowercase"<<endl; // check if character is lowercase using ASCII values

    }
    else{
        cout << "The character is neither uppercase nor Lowercase"<<endl; // if character is neither
    }
    return 0; // return 0 to indicate successful execution
}