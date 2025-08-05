#include<iostream>
using namespace std; 

int main(){
         int marks[5];
         cout<< "Enter Your Marks : ";
         for(int i = 0 ; i<5 ; i++){
            cin >>marks[i];
        }
        int smallestNo = INT8_MAX;
        int smallest = INT8_MAX;

        for(int i = 0 ; i<5 ; i++){
            if(smallestNo > marks[i]){
                smallestNo = marks[i];
            }
            smallest = min(marks[i] , smallest); // method 2
        }
        cout<<"The smallest marks in all marks is : "<< smallestNo;
        return 0  ; 
}