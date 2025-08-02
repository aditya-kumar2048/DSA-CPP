#include<iostream>
using namespace std; 

int main(){
    int a = 4 ;  
    char ch = 'A';
    for(int i = 0  ; i<a ; i++){
        for(int j = 0 ; j<i ;j++){
            cout<<" ";
        }
            for(int k = i ; k <a ; k++){
                cout << ch; 
            }
            ch++;
        cout<<endl; 

    }
    return 0 ; 
}