#include<iostream>
using namespace std; 

int main(){
    int a = 4;
    // cout << "Enter Length : ";
    // cin>>a; 

    //top
    for(int i = 0; i<a ; i++){
        for(int j = 0 ; j<=i; j++){
            cout << "*";
        }
        for(int k =0 ; k<a-i-1 ; k++){
            cout<<" "; 
        }
        for(int l = 0; l<a-i-1; l++){
            cout<<" "; 
        }
        for(int m = 0 ; m<=i ; m++){
            cout<<"*"; 
        }
        cout<<endl; 
    }
    

    // bottom
    for(int i= 0; i<a; i++){
        for(int j = 0 ; j<a-i ; j++){
            cout<<"*"; 
        }
        for(int k = 0 ; k<i; k++){
            cout<<" "; 
        }
        for(int l = 0 ; l<i ; l++){
            cout<<" " ; 
        }
        for(int m = 0 ; m<a-i ; m++){
            cout<<"*"; 
        }
        cout<<endl;
    }
    return 0 ; 
}