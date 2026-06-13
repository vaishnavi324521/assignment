// program to write function for palindrome.


#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int rev = 0, r;

    while (n > 0) {
        r = n % 10;          
        rev = rev * 10 + r;   
        n = n / 10;          
    }

    return (original == rev);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
