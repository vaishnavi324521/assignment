//print sum of digits of a number.
#include <iostream>
using namespace std;
int main(){
int n,sum=0,r;  // r is for remainder value.
cout<<"enter your number="<<endl;
cin>>n;
while(n>0){
 r=n%10;
 sum=sum+r;
 n=n/10;
}
cout<<"sum of digits is="<<sum<<endl;
return 0;
}