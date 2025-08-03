//WAF to reverse an Integer n.

#include<iostream>
using namespace std;

int main(){
    int a = 1234; 
    int temp = a ;
    int newNo = 0; 
    while (temp>0){
        int rem = temp% 10; 
        newNo = newNo * 10 + rem; 
        temp /=10; 
    }
    cout<< "the reverse of " <<a << " is : "<< newNo;
    return 0 ;
}