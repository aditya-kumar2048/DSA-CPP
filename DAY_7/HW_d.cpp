// WAF to print intersection of 2 no.

#include<iostream>
using namespace std; 

void intersect(int arr1[], int arr2[], int size){
    cout<< "The intersecting no are: ";
    for(int i = 0  ; i<size ; i++){
       
         for(int j = 0 ; j<size ; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
            }

         }
        
    }

}
int main(){
    int arr1[5]= {1,2,3,4,5};
    int arr2[5]= {9,8,7,4,5};
    int size = 5;
    intersect(arr1, arr2, size);
    return  0; 
}