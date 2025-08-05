#include<iostream>
using namespace std; 

int linearSer(int arr[] , int size, int target){
    for(int i = 0 ; i<size ; i++ ){
        if(arr[i] == target){
            return i;
        }
    }      
    cout<<"Invalid no.";
    return 0 ;
}
int main(){
    int num[5] = {4,5,6,7,8};
    int size = 5;
    int target = 8;
    cout<<"The Target is placed at "<<linearSer(num , size , target)<< " index.";

}   