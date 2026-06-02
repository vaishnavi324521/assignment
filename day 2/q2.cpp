//program to reverse a number.
#include <iostream>
using namespace std;
int main (){
    int n , r , revNumber = 0;
    cout<<"enter your number"<<endl;
    cin>>n;  
    while(n>0){
        r=n%10;
        n=n/10;
        revNumber=(revNumber*10)+r;
    }
    cout<<"the reverse of number is = "<<revNumber;
    return 0;
}