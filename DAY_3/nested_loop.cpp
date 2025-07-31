#include<iostream>
using namespace std;

int main(){
    for(int i = 0 ; i<5 ; i++){// denotes no.of rows
        for(int j = 0 ; j<i ; j++){// denotes no of columns
            cout<< "*" ;
        }
            cout<<endl;
    }
    return 0 ; 
}