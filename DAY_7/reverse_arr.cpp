#include<iostream>
using namespace std;

// int swap(int start , int end){
//     int temp = end; 
//     end = start ; 
//     start = temp ; 
//     return start , temp ; 
// }

void reverseArr(int arr[], int sz){
    int start = 0 , end = sz-1; 

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--; 
    }

}
int main(){
     int arr[] = {1,2,3,4,5,6};
     int size = 5;
     // reversing 

     reverseArr(arr , size);

     for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl; 
    return 0  ; 
}