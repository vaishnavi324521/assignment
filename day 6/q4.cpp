//program to find x^n without pow().
//doing so by using the property of loop.

#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter base x: ";
    cin >> x;
    cout << "Enter exponent n: ";
    cin >> n;

    long long result = 1;   // using long long for larger result.

    for (int i = 1; i <= n; i++) {
        result = result * x;   
    }

    cout << x << "^" << n << " = " << result << endl;
    return 0;
}
