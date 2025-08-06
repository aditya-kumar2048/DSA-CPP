// Linear search using vector
#include<iostream>
#include<vector>

using namespace std; 

int linearSer(vector<int>vec ,int target){
    int index = 0 ; 
    for(int val : vec){
        if(val == target){
            cout<<"Target Found at " ;
            return index; 
        }
        index++; 
    }
    cout<<"The given target is not in the list";
    return -1 ; 
}


int main(){
    vector<int>vec = {4,7,8,9,5,6,2};

    int target ; 
    cout<<"Enter the number which u want to search : ";
    cin>>target; 

    int index = linearSer(vec, target);

    if(index != -1){
        cout<<index << " index"<<endl; 
    }
    
    return 0 ; 

}