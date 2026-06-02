//program to find product of digits.
#include <iostream>
using namespace std;
int main (){
    int n,r,product=1;
    cout<<"enter your number ="<<endl;
    cin>>n;
    while(n>0){
        r=n%10;
        product=product*r;
        n=n/10;
    }
    cout<<"product of digits is = "<< product << endl;
    return 0;
}