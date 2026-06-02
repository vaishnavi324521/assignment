// program to check whether a number is palindrome.
#include <iostream>
using namespace std;
int main (){
    int n,num,r,revNumber=0;
    cout<<"enter your number = "<<endl;
    cin>>n;
    num=n;
    while(n>0){
        r=n%10;
        revNumber=(revNumber*10)+r;
        n=n/10;
    }
    if(num==revNumber){
        cout<<"the given number is palindrome"<<endl;
    }else{
        cout<<"the given number is not a palindrome"<<endl;
    }
    return 0;
}