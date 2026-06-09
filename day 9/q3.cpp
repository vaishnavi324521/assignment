//program to print:
//A
//BB
//CCC
//DDDD
//EEEEE
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines to print the pattern =";//on putting n=4 we will get the desired answer.
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
      
    for(int j=0;j<i+1;j++){
    
        cout<<ch<<" ";
         
    }
    ch+=1;
    cout<<endl;
    }
    return 0;

}