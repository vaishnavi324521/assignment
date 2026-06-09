//program to print:
//12345
//1234
//123
//12
//1
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines =";
    cin>>n;
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=n-i;j>0;j--){
            cout<<a;
            a+=1;
        }
        cout<<endl;
    }
    return 0;
}