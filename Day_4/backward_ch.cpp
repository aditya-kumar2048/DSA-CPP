#include<iostream>
using namespace std; 

int main(){
    int a = 4; 
    
    for(int i = 0 ; i<a ; i++){
            char ch = 'A'+i;

        for(int j = 0 ; j<=i; j++){
            cout<<(char)(ch-j); 
            
        }
        cout<<endl; 
    }
    return 0; 
}