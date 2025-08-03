// nCr formula : n!/r!(n-r)!

#include<iostream>
using namespace std; 

int fact(int x ){
    int fact = 1 ;
    for(int i = 1; i<=x ; i++ ){
        fact *=i ; 
    }
    return fact; 
}
int nCr(int n , int r ){
    int factorial_n = fact(n); 
    int factorial_r = fact(r); 
    int factorial_nmr = fact(n-r);

    int nCr = factorial_n /(factorial_r * factorial_nmr);
    return nCr; 
}
int main(){
    int n = 8, r = 2 ; 
    cout<< nCr(n , r)<< endl ; 
  
    int nCr = fact(n) / ( fact(r)*fact(n-r)) ;
    cout << nCr<<  endl ; 
    return 0 ; 
}