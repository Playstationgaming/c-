#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    int o;
    cout<<"enter number of coloumn ";
    cin>>o;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=o;j++){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}