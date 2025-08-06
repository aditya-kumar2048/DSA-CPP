#include<iostream>
#include<vector>

using namespace std; 

int main(){
    vector<int>vec = {1,2,3,4,5};
    vector<int>vec2;
    //size
    cout<<"size for vec = "   <<vec.size()<<endl;
    cout<<"size for vec2 = "   <<vec2.size()<<endl;

    // push back
    vec2.push_back(25);
    vec2.push_back(15);
    vec2.push_back(13); 
    // pop back
    vec2.pop_back();//13

    // front
    cout<<"The front value of the vector is "<<vec2 .front()<<endl;
    // back
    cout<<"The back / last value of the vector is "<<vec2.back()<<endl;
    //size
    cout<<"after push back size = " << vec2.size()<<endl;
    // for each loop
    for(int val : vec2){
        cout<<val<<endl;
    }
    //at
    cout<<vec.at(3)<<endl;
    cout<<vec.at(7);

    return 0 ; 
}