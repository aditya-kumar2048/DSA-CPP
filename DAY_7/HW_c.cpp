// WAF to find all unique values in an array

#include<iostream>
using namespace std; 

void uniqueVal(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        bool isUnique = true; 
        for(int j = 0 ; j<= size; j++)    {
            if(i != j && arr[i]==arr[j]){
                isUnique = false; 
                break;
            }
        }
        if(isUnique){
            cout<<arr[i] <<" ";
        }

    }
    cout<<endl; 
}

int main(){
        int arr[] = {1,2,3,5,6,7,8,8,1,2,1};
        int size = sizeof(arr)/sizeof(int);
        uniqueVal(arr, size);
        return 0 ; 
}