#include<iostream>
using namespace std;
int main(){
    int i=0;
    int n;
    cout<<"input ";
    cin>>n;
int y;
    while(n>0){
        y=n%10;
        i=i*10+y;
        n/=10;
       // i++;//will not be their it is automatic//
        //imp//
         
    }
    cout<<i;
return 0;
}