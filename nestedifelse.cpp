#include<iostream>
using namespace std;
int main (){
    int marks;
    cin>>marks;
    if (marks>33){
        if (marks<80){
            cout<<"Better luck next time";
        }
        else{
            cout<<"you are passed";
        }
       
    }
    //else if can be use with condition and bracket are compalsary()//
    else{
        cout<<"YOU ARE FAILED";
    }
    return 0;
    }