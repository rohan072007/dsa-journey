#include <iostream>
using namespace std;
int main(){
    int n,i=1,count=0;
    cin>>n;
    while(i<=n){
        if(n%i==0){
            
            count++;
        }else{
            
        }
        i++;
    }
    if(count==2){
        cout<<"prime number";
    }else{
        cout<<"not a prime";
    }
    return 0;
}