#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
   for(int i=1;i<=n;i++){ 
    for (int j=1;j<=n-i;j++){
            cout<<" ";
            }
        
        int nn=2*i-1;
        for(int j=1;j<=nn;j++){
            if (j==1||i==n||j==nn){
                cout<<i;
        }
        else{
            cout<<" ";
        }

        }
        cout<<endl;
    }
return 0;
}