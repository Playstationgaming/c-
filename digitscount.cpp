#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int i=0;
    while(n>0){
        
        n=n/10;

        i++;

    }
    cout<<i<<endl;

return 0;
}