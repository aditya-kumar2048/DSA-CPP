#include<iostream>
using namespace std; 

int sumOneToN(int N){
    int sum = 0; 
    for(int i = 1 ; i<=N ; i++ ){
         sum += i; 
    }
    return sum ;
}
int main(){
    int N; 
    cout<<"Enter N : ";
    cin>>N; 
    
    cout<< "sum of 1 to "<<N<<" is : "<<sumOneToN(N);
    return 0;
}