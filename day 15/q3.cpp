// program to Rotate array right.

#include <iostream>
using namespace std;

int main() {
    int n, d;
    cout << "Enter size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter elements = ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter number of rotations = ";
    cin >> d;
    d = d % n; // handle cases larger than n

    cout << "Array after right rotation = ";
    for (int i = n - d; i < n; i++) cout << arr[i] << " ";
    for (int i = 0; i < n - d; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
