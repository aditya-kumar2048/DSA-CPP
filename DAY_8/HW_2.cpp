// reverse code

#include<iostream>
#include<vector>
using namespace std; 

void reverse(vector<int>vec , int size){
    int start = 0 , end = size-1 ; int temp;

    while(start < end){
        swap(vec.at(start) , vec.at(end));
            // swap(vec[start] , vec[end]);

        start++;
        end--; 
    }
    for(int val : vec){
        cout<<val<<" ";
    }

cout<<endl; 
    }



int main(){
    vector<int>vec= {1,2,3,4,5,6,7};

    int size = vec.size();
    reverse(vec , size);
    return 0 ;
}