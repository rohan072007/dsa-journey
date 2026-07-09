#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void doaddition(int num){
    num += 5;
    cout<<"value "<<num<<endl;
    num += 5;
    cout<<"value "<<num<<endl;
    num += 5;
    cout<<"value "<<num<<endl;
}
void name(string r){
    r[0]='s';
    cout<<r<<endl;
}
int main(){
    int num=10;
    doaddition(num);

    cout<<num<<" original value that is saveed somewhere in the memory the original value remained the same"<<endl;
    string r ="rohan";
    name(r);
    cout<<r;
    return 0;
}