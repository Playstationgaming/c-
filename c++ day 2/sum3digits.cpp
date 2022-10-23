//sum of all the digit of a number //
#include <iostream>
using namespace std;
int main (){
    int a=123;
    int first=a/100;
    a%=100;
    int second=a/10;
    a%=10;
    int third=a/1;
    cout<<first+second+third;
    return 0;
}