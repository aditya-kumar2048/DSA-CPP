#include<iostream>
using namespace std; 

int main(){
    int a = 4 ; 
    
    for(int i = 0 ; i<a ; i++){//outer loop ---> rows 
        for(int j  = 0; j<=i ; j++){// inner loop ---> column
            cout << i+1 <<" ";
        }
        cout << endl ;
    }
    return 0 ; 
}