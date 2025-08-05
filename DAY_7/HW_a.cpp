// WAF to calculate the sum and product of all no in array

#include<iostream>
using namespace std; 

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);

    int sum = 0 ; 
    int prod = 1  ;
    for(int i = 0 ; i<size ; i++ ){
        sum += arr[i];
        prod *= arr[i];

    }
    cout<< "The product of all no in the given array is : "<<prod<<endl;
    cout<<"The sum of all no in the given array is : "<<sum; 
    return 0 ; 
}