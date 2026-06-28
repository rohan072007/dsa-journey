#include <iostream>
using namespace std;
int main(){
     int a,b,c;
     cout<<"enter value :";
     cin>>a>>b>>c;
     if((a+b > c) && (a+c >b) && (b+c >a)){
        cout<<"triangle can be formed";
     }
     else{
        cout<<"no triangle possible";
     }
    return 0;
}