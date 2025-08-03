//WAF to check if a no is prime or not

#include<iostream>
using namespace std;

int checkPrime(int a){
    int isPrime = 0 ; 
    for(int i = 2 ; i<a ; i++){
        if(a%i!=0){//  prime
            isPrime = 1 ; 
        }
        else{// not prime
            isPrime = 0; 
            break;
        }

    }
    if(isPrime==1){
        cout<< "The given no "<< a<< " is  prime .";
    }
    else{
        cout <<"The given no "<< a << " is NOT prime.";
    }
    return 0 ; 

}

int main(){
    int a ; 
    cout << "Enter no : ";
    cin>> a ; 

    checkPrime(a);
    return 0 ; 
}