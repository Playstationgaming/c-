#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number of rows here ";
    cin>>n;
    int o;
    cout<<"enter number of coloumb here ";
    cin>>o;
    for ( int i=1;i<=n;i++){
        for(int j=1;j<=o;j++){
            if (i==1 || i==n || j== 1||j==o){
               cout<<j; 
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
return 0;
}