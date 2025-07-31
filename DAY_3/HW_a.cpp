// Sum of all no from 1 to N which are divisible by 3
#include<iostream>

using namespace std; 

int main(){
    int N; 
    cout<< "Enter the value of N : ";
    cin>>  N; 

    int sum =  0; 
    for(int i = 1 ; i<=N ; i++){
        if(i%3 == 0){
            sum += i ; 
        }
    }
    cout<< " The sum of number from 1 to "<< N<< " using for loop is : "<< sum << endl; 

    // using while loop 
    int i = 0  ; 
    int sum1 = 0 ; 
    while (i<=N)
    {
        if(i%3==0){
            sum1 +=i;
        }
        i++;
    }
    cout<< "The sum of number from 1 to "<< N << "using While loop is : "<< sum1<< endl; 

    // using do-while loop

    int j = 0 ; int sum2 = 0 ; 
    do{
        if(j%3== 0 ){
            sum2 +=j;
            
    }
    j++;
}while(j<=N);
cout<< "The sum of number from 1 to "<< N<< "using do-while loop is : "<< sum2<< endl ; 

return 0 ; 
}