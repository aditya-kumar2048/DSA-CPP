#include<iostream>
using namespace std; 

int main(){
    int a = 4; 
    int num = 1; 

    for(int i = 0 ; i<a ; i++){
        for(int j = 0 ; j<=i ; j++)
        {
            cout<< num <<" ";
                    num++; 

        }
        cout << endl; 

    }
    return 0 ; 
}