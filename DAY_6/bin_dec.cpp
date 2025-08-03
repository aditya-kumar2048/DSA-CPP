#include<iostream>
using namespace std;

int binToDec(int binNum){
    int sum = 0 , pow = 1 ; // pow = 1 -- 2to power 0 = 1
    while(binNum> 0){//10101
        int rem = binNum % 10; //1 , 0, 1,,,, sum = 2
        sum = sum + (rem*pow); // 0+(1*2*1) =2|| 2+(0*2*2)= 2 || 2+(1*2*4) = 10 || 10 + (0*2*8) =10 || 10 + (1*2*16) = 42
        pow *=2;//pow = 1,2,4,8,16
        binNum /= 10; 
    }
    return sum; 
}
int main(){
    int binNum = 1100101;
    cout<<binToDec(binNum)<< endl;
    
    return 0; 
}