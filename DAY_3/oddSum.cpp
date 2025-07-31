#include<iostream>
using namespace std; 
int main(){
    int n ; 
    cout<< "Enter a number: "; // ask user to enter a number
    cin >> n; // read the input number

    int sum = 0; // initialize sum to 0
    int i  = 1; // start from the first odd number
    while(i<=n){
        if(i%2 != 0){
            sum +=i ; // add the odd number to sum
        }
        i++; // increment i to check the next number
    }
    cout << "The sum of odd numbers from 1 to " << n << " using While loop is: " << sum << endl; // print the sum

    // For loop
    int sum1 = 0; // initialize sum1 to 0
    for(int j = 1 ; j<=n ; j++){
        if(j%2!=0){
            sum1 += j; // add the odd number to sum1
        }
    }
    cout<< "The sum of odd numbers from 1 to " << n << " using For loop is: " << sum1 << endl; // print the sum
    return 0; // return 0 to indicate successful execution
}