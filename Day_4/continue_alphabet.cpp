#include<iostream>
using namespace std; 

int main(){
    int n = 4;
    char ch = 'A'; // Initialize character variable

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cout << ch << " "; // Print the current character
            ch++; // Increment character variable   
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // End of the program

}