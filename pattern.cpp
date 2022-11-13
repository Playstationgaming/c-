//#include<iostream>//
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cout<<"enter no of rows yo wana print";
//     cin>>n;
//     int o;
//     cout<<"enter no of coloum";
//     cin>>o;
//     for(i;i<=o;i++){
//         cout<<"*";
//     }
// return 0;
// }this will print only one time we wana print 3 rows//
#include<iostream>
using namespace std;
int main(){
    int column;
    cout<<"enter number of column";
    cin>>column;
    int rows;
    cout<<"enter number of rows ";
    cin>>rows;
    //int i=1;//
    //int j=1;//writtin it this way doesnt work//
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=column;j++){
        cout<<"*";
        }
        cout<<endl;
    }

return 0;
}
