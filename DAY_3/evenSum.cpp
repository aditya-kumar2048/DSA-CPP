#include<iostream>
using namespace std; 
int main(){
    int a; 
    cout << "Enter a number: "; // ask user to enter a number
    cin >> a; // read the input number

    int sum = 0 ;  
     for(int i = 1 ; i<= a ;i++){
        if(i%2==0){
            sum +=i;  
        }
     }
     cout<< "The sum of even numbers from 1 to " << a << " is: " << sum << endl; // print the sum

     // Using while loop

     int sum1 = 0; // initialize sum1 to 0
     int j = 1; // start from the first number
     while(j<=a){
        if(j%2==0){
            sum1 +=j; // add the even number to sum1

        }
        j++; // increment j to check the next number
     }
     cout << "The sum of even numbers from 1 to " << a << " using While loop is: " << sum1 << endl; // print the sum
     return 0; // return 0 to indicate successful execution
}