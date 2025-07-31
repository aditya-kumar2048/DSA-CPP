//Print factorial of a no N
#include<iostream>

using namespace std; 

int main(){
    int N ; 
    cout << "Enter the no. : ";
    cin >> N; 

    // using for loop  
    int fact = 1 ; 
    for(int i = 1 ; i <=N ; i++ ){
        fact *=i ; 
    }
    cout<< "the factorial of number 1 to "<< N << " using for loop is : " << fact<< endl ; 

    // using while loop 

    int fact1 = 1  ; 
    int i = 1 ; 
    while(i<=N){
        fact1 *= i; 
        i++;
    }
    cout<< "The factorial of no 1 to "<< N << " using while loop is : "<< fact1 << endl ; 

    // using do while loop

    int fact2 = 1; 
    int j = 1; 
    do{
        fact2 *= j ; 
        j++; 
    }while(j<=N);
    cout<< "The factorial of no 1 to "<< N << "using do while loop is : "<< fact2 << endl ; 
    return 0 ; 
}