// program to convert decimal to binary.
#include <iostream>
using namespace std;
int main(){
    int deciNum,ans=0,pow=1;
    cout<<"enter your number="<<endl;
    cin>>deciNum;
    while(deciNum>0){
       int rem=deciNum%2;
       ans+=(rem*pow);
       deciNum=deciNum/2;
       pow=pow*10;
    }
     cout<<"the binary number is= " << ans << endl;
     return 0;
}