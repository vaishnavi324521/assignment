//program to check armstrong number.
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter any number = "<<endl;
    cin>>n;
    int temp=n;
    while(n!=0){
        int rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
     }
     if(temp==sum){
        cout<<"it is a armstrong number"<<sum;
     }else{
   cout<<"it is not a armstrong number"<<sum<<endl;
        }
     return 0;
}