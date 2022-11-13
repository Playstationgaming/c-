#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows here ";
    cin>>rows;
    int column;
    cout<<"enter number of column ";
    cin>>column;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=column;j++){
            // if ((j)%2==0||(i%2)==0){//its wrong because row no 2 is even but it will print 2 in entire collumn//
            //     cout<<"1";
            // }
            // else{
            //     cout<<"2";
            // }
            if ((j+i)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;

    }

}