#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0;i<(2*n-1);i++){
        for(int j=0;j<2*n-1;j++){
            int top =i;
            int left =j;
            int right = (2*n-2)-i;
            int bottom=(2*n-2)-j;
            cout<<(n-min(min(top,right),min(left,bottom)));
        }
        cout<<endl;
    }
}
int main(){

int n=4;
print(n);

    
    return 0;
}