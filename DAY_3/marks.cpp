#include<iostream>
using namespace std; 

int main(){
    int mark; 
    
    cout<<"Enter your marks: "; // ask user to enter marks
    cin>>mark;

    if(mark>90){
        cout<<"You got an A grade"<<endl; // check if marks are greater than 90
        
    }else if(mark>80 && mark<=90){
        cout<<"You got a B grade"<<endl; // check if marks are between 80 and 90
    }
    else if(mark>30&& mark <=90){
        cout<<"You got a C grade "<<endl; // check if marks are between 30 and 90

    }
    else{
        cout<<"You got D- grade"<< endl; // if marks are less than or equal to 30
    }
}