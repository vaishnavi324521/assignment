// program to check whether a number is prime.
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter your number";
    cin>>n;
    bool isprime=true;
    if(n<=1){
        isprime=false;
    }else{
        for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    }
        if(isprime==true){
            cout<<"number is prime"<<endl;
        }else{
            cout<<"number is non-prime";
        }
        return 0;
    }