// program to Move zeroes to end.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter elements = ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = 0; // count of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while (count < n) {
        arr[count++] = 0;
    }

    cout << "Array after moving zeroes = ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

