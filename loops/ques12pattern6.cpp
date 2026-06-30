//invert pyramid pattern
#include <iostream>
using namespace std;
int main() {
    int n=5;
    for(int i= n;i>=1;i--){
        for(int j=1;j<=1;j++){
            cout<<"*";
        }
        for(int k=1;k<=n-1;k++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    }
