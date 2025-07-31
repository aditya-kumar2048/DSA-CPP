#include<iostream>
using namespace std ; 

int main(){
    int age ;
    
    cout << "Enter your age : "; // ask age 
    cin>> age ; 


    if(age >=18){ // check eligible age 
        cout << "you are eligible to vote"<<endl ; 

    }
    else{
        cout << "you are not eligible to vote" << endl ;
    } 
    return 0 ; 
}