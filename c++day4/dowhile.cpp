#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the value ";
    cin>>n;
    
    int sum=0;
   do{
    int num;
    cout<<"enter input:";
    cin>>num;
    sum+=num;
    n--;
   }while(n>0);

   cout<<sum<<endl;
   

    return 0;
}