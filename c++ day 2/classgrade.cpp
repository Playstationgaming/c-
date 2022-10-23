//45 students b=25 g=45-25=20 if 80%student recive A grade and 17 are boys then find girls//
#include <iostream>
using namespace std;
int main (){
    int total=45,boygradeA=17,gradeA,ggradeA;
    gradeA=(total*80)/100;
    ggradeA=gradeA-boygradeA;
    cout<<ggradeA;
    
    return 0;
}