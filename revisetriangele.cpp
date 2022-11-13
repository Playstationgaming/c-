#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of row*coloum ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
//this will print inverse triangale
    }
return 0;
}