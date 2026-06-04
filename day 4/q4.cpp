#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int temp = num;
        int digits = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        int sum = 0;
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= digit;   
            }
            sum += power;
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
