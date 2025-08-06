#include<iostream>
#include<vector>
using namespace std; 

int main(){
    vector<int>vec = {1,2,3,4};

    for(int val : vec){// for each loop
        cout<< val <<endl; 
    }

    vector<char>vac = {'a', 'b', 'c'};
    for(char i : vac ){
        cout<< i<< endl; 
    }
    return 0; 
}