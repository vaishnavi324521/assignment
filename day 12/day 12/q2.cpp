// Program to check Armstrong number using casting
#include <iostream>
#include <cmath>   // for pow()
using namespace std;

bool isArmstrong(int n) {
    int num = n;
    int sum = 0;
    int digits = 0, temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n; 
    while (temp > 0) {
        int r = temp % 10;
        sum += static_cast<int>(round(pow(r, digits)));
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int givNum;
    cout << "Enter your number = ";
    cin >> givNum;

    if (isArmstrong(givNum)) {
        cout << givNum << " is an Armstrong number";
    } else {
        cout << givNum << " is not an Armstrong number";
    }

    return 0;
}
