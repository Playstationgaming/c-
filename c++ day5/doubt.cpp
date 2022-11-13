#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number ";
    cin>>n;
    int alpha=65;
    int num=0;
   
       
   
    for (int i=1;i<=n-1;i++){
        for (int j=0;j<=i;j++){
            cout<<" ";
        }
        for (int j=(n-i)*2-1;j>0;j--){//working in j>0 not in j<=1
            
            cout<<char(alpha+num++);
        }
        num=0;
        cout<<endl;
        

        
    }

return 0;
}