#include<iostream>
using namespace std; 

int main(){
    int a = 4 ; 
    for (int i = 0 ; i<=a ; i++){
        for(int j =0 ; j<i; j++ ){
            cout <<" "; 
        }
            for(int k = i ; k<a ;k++){
                cout<<i+1;
            }

        
        cout << endl ;

    }
    return 0; 
}