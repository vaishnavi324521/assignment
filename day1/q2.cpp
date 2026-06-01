//program to print muliplication table of given number.
#include <iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"enter your number="<<endl;
    cin>>n;
    for(int i=1; i<=10 ; i++){
        cout << n << "*" << i << "=" << (n*i) <<endl;
    }
    return 0;
}