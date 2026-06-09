//program to print:
//1
//22
//333
//4444
//55555
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines to print the pattern =";//on putting n=5 we will get the desired answer.
    cin>>n;

    for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<i+1;
    }
    cout<<endl;
    }
    return 0;

}