//program to print pattern:
//1
//1 2
//1 2 3
//1 2 3 4
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines to print the pattern =";//on putting n=4 we will get the desired answer.
    cin>>n;
    for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<j+1<<" ";
    }
    cout<<endl;
    }
    return 0;

}