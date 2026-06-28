#include <iostream>
using namespace std;
int main(){
    int reversed=0;
    int digits,original;
    cin>>original;
    int copy_of_original=original;
   
    while(original>0){
        digits = original%10;
        reversed =reversed*10+digits;
        original = original/10;
       
    }
    cout<<reversed<<endl;
    if(copy_of_original==reversed){
        cout<<"its palidrome";
    }else{
        cout<<"no a palidrome";
    }
    return 0;
}