#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: "; // ask user to enter a number
    cin >> n; // read the input number

   int isPrime =0 ; 
    for(int i = 2 ; i<n; i++){
    // for(int i = 2 ; i*i<n; i++){
        if(n%i!=0){
            isPrime = 1; // if n is not divisible by i, then it is a prime number
                }
        else{
            isPrime = 0; // if n is divisible by i, then it is not a prime number
            break; // exit the loop as we found a divisor
        }   
    }
    if(isPrime == 1){
        cout<<n << " is a prime number"<<endl; // print if n is a prime number
    }
    else{
        cout<<n << " is not a prime number"<<endl; // print if n is not a prime number
    }
    return 0; // return 0 to indicate successful execution
}