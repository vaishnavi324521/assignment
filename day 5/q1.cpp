//program to check perfect number.
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter your number="<<endl;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"is a perfect number."<<endl;
    }else{
        cout<<"is not a perfect number";
    }
    return 0;
}