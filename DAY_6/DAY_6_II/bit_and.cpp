#include<iostream>
using namespace std; 

int main(){
    int a = 4, b = 8; 
                        //|a = 4  0100
                        //|b = 8  1000     
                        //|      -------    
                        //|       0000 (and rule)
    cout<< (a & b) ; 
    return 0 ; 
}