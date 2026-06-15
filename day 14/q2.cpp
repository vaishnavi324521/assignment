// Write a program to Frequency of an element.

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter elements = ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to find frequency = ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) count++;
    }

    cout << "Frequency of " << x << " is " << count << endl;
    return 0;
}
