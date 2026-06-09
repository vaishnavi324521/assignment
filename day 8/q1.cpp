//program to print half pyramid.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines to print the half pyramid =";//on putting n=4 we will get the desired answer.
    cin>>n;

    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}