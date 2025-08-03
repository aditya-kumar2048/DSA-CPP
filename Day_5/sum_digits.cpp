#include<iostream>
using namespace std; 

int sumOfDigits(int a ){
    int temp = a ; 
    int sum = 0; 
    while (temp!=0){
        int rem = temp%10; 
        sum +=rem; 
        temp = temp/10; 
    }
    return sum ; 
}
int main(){
    int a = 154; 
    cout<< "The sum of digit of "<< a << " is : "<< sumOfDigits(a)<<  endl; 

    return 0 ;
}