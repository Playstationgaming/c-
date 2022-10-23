//write a program to print sum of frist and the last second digit of number//
#include <iostream>
using namespace std;
int main (){
    int num=12345;
    int first=num/10000;
    num%=10000;
    int second=num/1000;
    num%=1000;
    int third=num/100;
    num%=100;
    int forth=num/10;
    num%=10;
    int five=num/1;
    cout<<first+forth;//we use property that both ans and num should be float to get answer in float and %modulaus froper of dividing and geting remainder 4digit,etc//

    
    return 0;
}