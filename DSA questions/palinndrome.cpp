//Given an integer x, return true if x is a palindrome, and false otherwise.
#include <iostream>
using namespace std;
int main(){
    int original,reversed=0,digits;
    cout<<"enter original : ";
    cin>>original;
    int org=original;
    while(original>0){
        digits = original%10;
        reversed=reversed*10+digits;
        original=original/10;
    }
    cout<<"reversed : "<<reversed<<endl;
    if(reversed==org){
        cout<<"palindrome";
    }else{cout<<"not a palindrome";}
    return 0;
}