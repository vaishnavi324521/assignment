// Write a program to Find duplicates in array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter elements = ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Duplicate elements are = ";
    bool hasDuplicate = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                hasDuplicate = true;
                break; // avoid printing same duplicate multiple times
            }
        }
    }
    if (!hasDuplicate) cout << "None";
    cout << endl;

    return 0;
}
