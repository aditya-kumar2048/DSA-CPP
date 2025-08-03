// Figure out how to find if a number is power of 2 without loop

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
bool IsPowerOfTwo(int n) {
    if (n <= 0) return false;

    while (n % 2 == 0) {
        n = n / 2;
    }

    return n == 1;
}


   

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num))
        cout << num << " is a power of 2." << endl;
    else
        cout << num << " is NOT a power of 2." << endl;

    // using loops 
     int num1;
    cout << "Enter a number: ";
    cin >> num1;

    if (IsPowerOfTwo(num1))
        cout << num1 << " is a power of 2." << endl;
    else
        cout << num1 << " is NOT a power of 2." << endl;

    return 0;
}