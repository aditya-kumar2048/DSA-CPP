#include<iostream> 
using namespace std;

int main(){
    int a= 9; 
    int sum = 0 ; 
    for(int i = 0 ; i<= a; i++){
        sum = sum + i; // add i to sum
        if(i==5){
            break ; 
        }
    }
    cout << "The sum of first " << a << " natural numbers is: " << sum << endl; // print the sum
    return 0; // return 0 to indicate successful execution
}