#include<iostream>
using namespace std; 

int a = 19 ; // Global scope

int main(){
    
    if(6 > 0){
        int n = 94; // local scope

    }
//    cout<< n;// local scope
    cout<< a<< endl ;
    cout<<sizeof(long long int)<<endl ;
    return 0; 
}