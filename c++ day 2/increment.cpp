#include <iostream>
using namespace std;
int main () {
    int a=4;
    int b=a++;
    cout<<b;
    cout<<a;
    b=++a;
    cout<<a;
    cout<<b;//when a++ increment is their then b value is as it  is but a value changes and in case of ++a increment first value of a is increment along with value of b//
     
    return 0;
}