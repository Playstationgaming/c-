// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a value ";
//     cin>>n;
   
//     int firstnumber= n/10000;
//     n%=10000;
//     int secondnumber=n/1000;
//     n%=1000;
//     int thirdnumber=n/100;
//     n%=100;
//     int forthnumber=n/10;
//     n%=10;
//     int firthnumber =n/1;
// int sum;
//  cout<<firthnumber+forthnumber+thirdnumber+secondnumber+firstnumber;

// return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int num;
    int sum=0;
    int i=0;
    while(n>0){
        num=n%10;
        n/=10;
        sum+=num;
        
    }
    cout<<sum<<endl;

return 0;
}
