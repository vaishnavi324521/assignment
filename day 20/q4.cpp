// Write a program to Find column-wise sum.

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int a[r][c];

    cout << "Enter matrix: ";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) cin >> a[i][j];

    cout << "Column-wise sums:\n";
    for(int j=0; j<c; j++) {
        int sum = 0;
        for(int i=0; i<r; i++) sum += a[i][j];
        cout << "Column " << j+1 << " sum = " << sum << endl;
    }
    return 0;
}
