#include<iostream>
using namespace std;
int main (){
    int i=8;
    while (true){
        if (i%10==0){
            cout<<i<<endl;
            break;
        }    
        
        i++;
    }
    int j=8;
    for (j;;j++){
        if (j%10==0) {
            cout<<j<<endl;
            break;
        }
    }
    return 0;
}