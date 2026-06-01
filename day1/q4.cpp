//program to count digits in a number.
#include <iostream>
using namespace std;
int main(){
long long n; //using long long as datatype for n so that it can calculate numbers with digits even higher than 10 or so.we can also use int datatype.
int count=0;
cout<<"enter your number";
cin>>n;
if(n==0){
    cout<<"the number of digit for zero is = 1"<<endl;
}else{
while(n>0){
    n=n/10;
    count++;
}
}
cout<<"number of digits in given number is="<<count<<endl;
return 0;
}