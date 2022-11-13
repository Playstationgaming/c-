#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter rows";
    cin>>rows;
    int column;
    cout<<"enter number of column";
    cin>>column;
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=column;j++){
            if (i==1||i==rows||j==1||j==column){
                cout<<"*";
            }
            else{
                cout<<" ";//here i=1 meaans row 1//
            }
        }
        cout<<endl;

    }
return 0;
}