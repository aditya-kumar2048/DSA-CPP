#include<iostream>
using namespace std;

int main(){

    int a = 5; // initialize a variable a

    int i = 1; // initialize a variable i to 1
    cout << "Printing numbers from 1 to " << a << ": "; //
    while(i<=a){
        cout<<i << " "; // print the value of i
        i++; // increment i by 1
    }
    return 0; // return 0 to indicate successful execution

}