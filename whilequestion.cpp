#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"pleased enter y input";
    cin>>n;
    int num,i=1;
    int sum=0;

    while(i<=n){
        cout<<"enter num";
        cin>>num;
        sum+=num;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}