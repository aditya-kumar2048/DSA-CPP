#include<iostream>
using namespace std; 

int main(){
    int n = 4 ; 

    // Print the square pattern with numbers, stars, and characters
    
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            cout <<j<<" "; // Print the column number; 

        }
        cout << endl; // Move to the next line after each row   
    }
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            cout <<"*"<<" "; 
        }
        cout<<endl; // Move to the next line after each row
    }
    for(int i = 1 ; i<=n ; i++){
            char ch = 'A'; // Initialize character variable

        for(int j = 1 ; j<=n ; j++){
            cout <<ch<<" "; 
            ch = ch + 1; // Increment character variable
        }
        cout<<endl; // Move to the next line after each row
    }
            return 0; // End of the program

}