#include<iostream>
using namespace std; 

int main(){
    int n = 3; // You can change this value to create a larger or smaller square

    int num = 1 ; 
    for(int i = 0 ; i<n ; i++){
         
        for(int j = 0 ; j<n ; j++){
            cout << num << " "; // Print the column number
                  num++; 

        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of the program
}