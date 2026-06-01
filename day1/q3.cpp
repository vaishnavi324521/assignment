//program to find factorial of a number.
#include <iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter your number="<<endl;
    cin>>n;
    if(n<0)
        cout<<"can't find factorial of the negative number";
        else if(n<=1)
        cout<<n<<"!="<<fact;
   else{
for(int i=n;i>=2;i--){
    fact=fact*i;
}
cout<<n<<"!="<<fact; 
}
return 0;
}
