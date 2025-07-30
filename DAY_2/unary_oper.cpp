#include<iostream>
using namespace std;

int main(){
    int a = 10  ; 
    int b = ++a ; // update first 
    cout << "Value of b : " << b << endl; // 11
    cout << "value of a : " << a << endl ; //11

    int c = --a ; 
    cout << "value of c : " << c << endl ; // 10
    return 0 ; 
    
}