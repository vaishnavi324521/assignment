// program to check prime number using functions.
#include <iostream>
#include <cmath>  
using namespace std;

bool isprime(int n) {
    if (n < 2) return false;   
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;     
        }
    }
    return true;      }         

int main() {
    int num;
    cout << "enter your number = ";
    cin >> num;

    if (isprime(num)){
        cout << num << " is prime";
    } else{
        cout << num << " is not prime";
        }
    return 0;
}
