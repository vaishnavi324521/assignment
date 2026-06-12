//program to print character pyramid:
//            A
//          A B A
//        A B C B A 
//      A B C D C B A
//    A B C D E D C B A


#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  "; 
        }

        
        char ch = 'A';
        for (int j = 0; j < i + 1; j++) {
            cout << ch << " ";
            ch++;
        }

        
        ch -= 2; 
        for (int j = i; j > 0; j--) {
            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }
    return 0;
}

    