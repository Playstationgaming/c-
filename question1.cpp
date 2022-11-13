#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int b=n;
    int y;
    int num;
    int pro=0;
    int i=0;
    while(n>0){
        y=n%10;
        n/=10;
       
        num=y*y*y;
        pro+=num;
        i++;

    }
   
  if (pro==b){
    cout<<b<<endl;
      }
  else{
    cout<<"false";
  }    


        
    
return 0;
}