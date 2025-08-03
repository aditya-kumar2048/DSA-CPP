#include<iostream>
using namespace std; 

    int sum(int a , int b ){
        a = a + 10 ;// 14 
        b = b + 10; // 15
        return a+b; 
    }
int main(){
    int a = 4  , b = 5; 
    cout<<sum (a , b);
    return 0 ; 
}