#include<iostream>
using namespace std; 

int main(){
    int n ; 
    cout <<"Enter Your number n: "; 
    cin>> n; 

    int i = 0 ; 
    int sum = 0 ; 
    while(i<=n)
    {
        sum = sum + i ; 
        i++; // increment i by 1
    }
    cout << "The sum of first " << n << " natural numbers using while loop is: " << sum << endl; // print the sum

    // Using for loop
    int sum1 = 0 ; 

    for(int j = 0 ; j<=n ; j++){
        sum1 = sum1 + j ; // add j to sum1
    }
    cout << "The sum of first " << n << " natural numbers using for loop is: " << sum1 << endl; // print the sum
    return 0  ;     

}