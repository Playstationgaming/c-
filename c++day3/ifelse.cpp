#include <iostream>
using namespace std;
int main (){
    int in;
    cin>>in;
    if (in>50) {
        cout<<"no is greater than 50"<<endl;
    }
    else if (in==50) {
        cout<<" no is equals to 50"<<endl;//else if can be use multiple times//
    }
    else{
        cout<<" no is less than 50"<<endl;
    }
    return 0;
}