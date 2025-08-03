// WAF to write the nth fibbonaci no.----> 0,1,1,2,3,5,8,

#include<iostream>
using namespace std; 

int fibb(int n ){
    int a = 0 , b = 1,c;
    for(int i = 0  ; i<n-2 ; i++){
       
        c = a + b ; 
        a = b; 
        b = c ;
    }
    cout<< c; 
    return 0 ; 
}

int main(){
    int n ;
    cout<<"Enter n : ";
    cin>>n; 

    fibb(n);
    return 0 ; 
}