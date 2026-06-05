//program to find largest prime factor.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largest = -1;
    while (n % 2 == 0) {
        largest = 2;
        n = n / 2;
    }

    for (int i = 3; i <= n; i++) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    cout << "Largest prime factor is: " << largest << endl;
    return 0;
}
