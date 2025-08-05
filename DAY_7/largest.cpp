#include<iostream>
using namespace std; 

int main(){
    int num[] = { 5,78,41,13,-5};
    int size = 5; 

    int largest = INT8_MIN; 
    for(int i = 0; i<size ; i++){
        largest = max(largest , num[i]);
            if(largest < num[i]){
                largest = num[i];
            }
    }
    cout<<largest; 
    return 0 ; 
}