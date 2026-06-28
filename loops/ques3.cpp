#include <iostream>
using namespace std;
int main(){
    int i=1,n;
    int digit,reversed=0;
    cin>>n;
    while(n>0){
        digit = n%10;
        reversed = reversed*10 + digit;
        n = n/10;
        i++;
    }
    cout<<reversed;
    return 0;
}