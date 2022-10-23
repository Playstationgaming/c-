#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value 1 ";
    cin>>a;
    cout<<"Enter value 2 ";
    cin>>b;
    int c;
    c=a<50 && a<b? 1:0;//1 and 0 should be same order even if t/f or just print cout<< a==b? 0:1; or boolflag then condition?  flag=true:flag=false; then cout<<flag//
    cout<<c;
    return 0;
}