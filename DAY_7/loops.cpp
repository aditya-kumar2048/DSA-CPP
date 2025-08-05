#include<iostream>
using namespace std; 

int main(){
    int marks[5];
    for(int i = 0 ; i<5; i++){
        cout<<"Enter your marks_"<<i+1<< " : "; 
        cin>> marks[i];
           
    }
            cout<< "The 5 marks are :- "; 

    for(int i = 0 ; i<5 ; i++){
        cout<<marks[i] << " ";
    }
    return 0; 
}