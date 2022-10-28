#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
//int i=1;//
for(;i<=n;i++ ){//for for loop starting expression if not defined then also it works //
    sum+=i;//we can put condtion also inside the loop without it it will print tilll infinity//
}//we can put stopping or last (updating) condtion inside the loop also if not then loop works till infinty//
cout<<sum<<endl;

    return 0;
}