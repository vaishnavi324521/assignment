// program to find maximum of two numbers using functions.
#include <iostream>
using namespace std;
#include <algorithm>
int maxs(int a,int b){
    int maximum = max(a,b);
    return maximum;
}
int main(){

    int a,b;
    cout<<"enter your first number = "<< endl;
    cin>>a;
    cout<<"enter your second number = ";
    cin>>b;
    cout<< "the maximum of two numbers is " << maxs(a,b);
    return 0;
}