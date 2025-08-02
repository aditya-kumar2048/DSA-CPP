#include<iostream>
using namespace std; 

int main(){
    int a = 4; 
                char ch = 'A';

    for(int i = 0 ; i<a ; i++){

        for(int j = a; j> i+1 ; j--){
            cout<<" ";
        }
        for(int k = 0 ; k<=i ; k++){
            cout <<char(ch+k); 
        }

        for(int l = i-1 ; l>=0 ; l--){
            cout<<char(ch+l);
        }

        cout<<endl; 
    }
    return 0 ; 
}