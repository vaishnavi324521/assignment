// program to find sum and average of array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];   
    int sum = 0;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];   
    }

    float avg = (float)sum / n;

    cout << "Sum of array = " << sum << endl;
    cout << "Average of array = " << avg << endl;

    return 0;
}
