// program to write a function for perfect number.
#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return (sum == n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num)) {
        cout << num << " is a Perfect number." << endl;
    } else {
        cout << num << " is not a Perfect number." << endl;
    }

    return 0;
}
