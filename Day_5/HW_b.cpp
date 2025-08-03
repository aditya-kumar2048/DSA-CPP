// WAF to write all prime no b/w 2 to N.
#include<iostream>
using namespace std; 

int allPrime(int N){
    for(int i = 2 ; i<=N ; i++){ 
            bool isPrime = true ; 

         for(int j = 2; j*j<=i ; j++){
            if(i%j == 0){
                isPrime = false; 
                break;  
            }
           

         }
         if(isPrime){
            cout<<i<<" " ; 
         }
         
    }
    return 0; 
}

int main(){
    int N ; 
    cout<< "Enter the Value of N : "; 
    cin>> N; 

    allPrime(N);
    return 0; 
}