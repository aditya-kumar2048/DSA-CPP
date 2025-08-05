// WAF to swap the max & min no of an array

#include<iostream>
using namespace std; 

void swapMaxMin(int arr[] , int sz){
    int maxIndex = 0 , minIndex = 0;
    for(int i = 0 ; i<sz ; i++){
        if(arr[i]>arr[maxIndex]){
            maxIndex = i; 
        }
        if(arr[i]<minIndex){
            minIndex = i ;
        }
            }

        // swapping the numbers

        int temp = arr[minIndex];
        arr[minIndex] = arr[maxIndex];
        arr[maxIndex] = temp;

}
int main(){
    int arr[5] = {1,2,3,4,5};
    
    swapMaxMin(arr , 5);
    cout<<"After swapping max no by min no the array become : ";
    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ; 
}