#include <iostream>
using namespace std;
int main(){
    int a=4;
    cout<<sizeof(a)<<endl;
    string name="h";
    cout<<sizeof(string)<<endl;
    cout<<int('a')<<endl;
    int y=(4,5,6,5);/*always takes the last digit if takem in this way*/
    cout<<y<<endl;
    float rate = 5.66;
    cout<<int (rate)<<endl;//it will print 5//
    bool flag;
    a==y? flag=true:flag=false;
    cout<<flag<<endl;// define bool flag give value true of false and apply condition a==b then question mark (?) (flag=true and flag=false) in this order only then print flag//
    cout<<++a<<endl;
    cout<<y++<<endl;//if a++ is written then a will print then it will increament and if ++a is written then it wil frist increment then will print for it a=4 ++a will print 5//
    //same in minus --a and a--//
    //BODMAS is applied precidence ke according it will work//
    return 0;
}