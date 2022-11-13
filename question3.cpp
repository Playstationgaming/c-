#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number ";
    cin>>n;
    int alpha=65;
    int num=0;
     for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(int j=1;j<=2*i-1;j++){
            
            cout<<char(alpha+num++);
        }
        num=0;
        cout<<endl;
        
    }
   
    for (int i=1;i<=n-1;i++){
        for (int j=1;j<=i;j++){
            cout<<" ";
        }
        for (int j=(n-i)*2-1;j>0;j--){
            
            cout<<char(alpha+num++);
        }
        num=0;
        cout<<endl;
        

        
    }

return 0;
}