// Write a program to Find missing number in array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter elements (1 to n with one missing) = ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int total = (n + 1) * (n + 2) / 2; // sum of 1..n+1
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    cout << "Missing number = " << total - sum << endl;
    return 0;
}
