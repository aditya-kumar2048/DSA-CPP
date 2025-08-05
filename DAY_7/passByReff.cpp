#include<iostream>
using namespace std ; 

void changeArr(int arr[], int size){
        cout<<"In Function\n";
        for(int i = 0 ; i<size  ;i++){
            arr[i] *=2; 
        }
        return ; 
}

int main(){
    int num[] = {6,8,9};

    changeArr(num , 3);

        cout<<"In Main fn\n";
    for(int i = 0 ; i<3 ; i++){
        cout<< num[i] << " ";
    }
    return 0; 

}

  