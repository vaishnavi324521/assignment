//write a program to generate fibonacci series.
#include <iostream>
using namespace std;
int main(){
    int num,first=0,second=1,next;
    cout<<"enter the number of terms you want to print ="<<endl;
    cin>>num;
      cout<< "fibonacci series:";
    for(int i=0;i<num;i++){
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
return 0;
}