#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number ";
    cin>>a;
    int b;
    cout<<"enter a number ";
    cin>>b;
    //very imp//
    int pro=1;
    for (int i=1;i<=b;i++){
        pro*=a;
    }
    cout<<pro<<endl;
return 0;
}