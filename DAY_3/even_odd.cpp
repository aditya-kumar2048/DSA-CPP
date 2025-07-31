#include<iostream>
using namespace std; 

int main(){
    int a ;
    cout << "Enter a number: "; // ask user to enter a number
    cin >> a;

    if(a%2==0){ // check if the number is even
        // if remainder when divided by 2 is 0, then it's even
        cout << "the number is even"<<endl ;

    }
    else{
        cout << "the no is odd"<< endl ;

    }
    return 0 ; 

}