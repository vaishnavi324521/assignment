// Recursive function to calculate factorial 
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)   
        return 1;
    else
        return n * factorial(n - 1); 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of a negative number doesn't exist." << endl;
    } else {
        cout << num << "! = " << factorial(num) << endl;
    }

    return 0;
}
