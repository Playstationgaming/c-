#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"value 1 ";
    cin>>a;
    cout<<"value 2 ";
    cin>>b;
    bool flag;
    a==b? flag=true:flag=false;//if we change the order of 0 and 1 or true/false . order of answer will also change will give wrong output so write in sequence//
    cout<<flag<< endl;//we can use define an integer c we can equate to the contional ? : statement and can print value of c 1:0 in order which rep true and false//

    return 0;
}