#include <iostream>
using namespace std;
int main (){
    int b=27;
    if (b>33) {
        cout<<"pass";
    }
    else{
        cout<<"fail";
    }

   //b=27 be the input from the user ternary oprator can be used in the place of if else//;
    cout<<(b>33)? "pass":"fail";//if writen this way it will print 0 or 1 only in any cas so f wanna print pass fail so print cout before pass//
    b>33?cout<<"pass":cout<<"fail";
    return 0;
}