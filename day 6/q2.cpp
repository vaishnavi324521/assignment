// program to convert binary to decimal.
#include <iostream>
using namespace std;
int main(){
    int binNum,ans=0,pow=1;
    cout<<"enter your binary number = \n";
    cin>>binNum;
    while(binNum>0){
        int rem=binNum%10;
        ans=ans+(rem*pow);
        binNum=binNum/10;
        pow*=2;
    } 
    cout<<"the decimal number is = "<<ans<<endl;
    return 0;
}