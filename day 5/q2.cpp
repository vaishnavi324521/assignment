//program to check a strong number.
#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp=num;
    while(num > 0) {
        int digit = num % 10;       
        sum += factorial(digit);     
        num /= 10;                  
    }

    if(sum == temp)
        cout << temp << " is a Strong Number." << endl;
    else
        cout << temp << " is NOT a Strong Number." << endl;

    return 0;
}
