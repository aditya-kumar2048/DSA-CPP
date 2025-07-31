#include<iostream>
using namespace std;

int main(){
    int a ; // initialize a variable
    cout << "Enter a number: "; // ask user to enter a number
    cin >> a; // read the input number

    for(int i = 1 ; i<=a ; i++){
        cout << i << " "; // print the value of i
        // this loop will print numbers from 1 to a
    }

    return 0; // return 0 to indicate successful execution
}