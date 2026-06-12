//program to find sum of two numbers using functions.

#include <iostream>
using namespace std;
int sum(int a,int b){ 
    
   int sum = a + b;
return sum;
}


int main(){
    int a,b;
    cout<<"enter your first number = "<<endl;
    cin>>a;
    cout<<"enter your second number = "<<endl;
    cin>>b;

    cout<<sum(a,b);
    return 0;

}