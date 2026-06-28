#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter values : ";
    cin>>a>>b>>c;
    if((a>b && a>c) || (a<b && a<c)){
        cout <<"a :"<<a;
    }
    else if((b<a && b<c) || (b>a && b>c)){
        cout<<"b :"<<b;
    }
    else{
        cout<<"c :"<<c;
    }
    return 0;
}