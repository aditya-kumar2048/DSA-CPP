#include<iostream>
using namespace std; 

int minNum(int a, int b ){// parameter
        if(a>b){
            return b;// cout<<b; 
        }
        else{
            return a ; // cout<<a;
        }

}
int main(){
   cout<< "min of given numbers = "<< minNum(5,6);// arguments
    return 0 ;  
}