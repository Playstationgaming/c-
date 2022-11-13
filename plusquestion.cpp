#include<iostream>
using namespace std;
int main(){
    for (int i=1;i<=4;i++){
        for (int j=1;j<=5;j++){
            if((i==1 || i==2 )&& j==3){
                cout<<"*";}
            else if (i==4){
                cout<<"*";
            }
            else{
                cout<<" ";

            }
            }
        
        cout<<endl;
    }//makeit for lower triangle 
    
return 0;
}
