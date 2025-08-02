#include<iostream>
using namespace std; 

int main(){
    int a = 4; 

    for(int i = 0 ; i<a ; i++){
        for(int k = a ; k>i  ; k--){
            cout<<" ";
        
        }
        for(int l = 0; l<i+1; l++){
            cout<<l+1; 
        }

        for(int j = i ; j>0 ; j--){
            cout<<j; 
        }
    
        cout<<endl;
    }
    return 0 ; 
}