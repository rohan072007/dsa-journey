#include <iostream>
using namespace std;
int main(){
    int i=1,n;
    double fac =1;
    cin>>n;
    while(i<=n){
        fac = fac*i;
        i++;
    }
    cout<<fac;
    return 0;
}