#include <iostream>
using namespace std;
int max(int n1,int n2){
    //5>=6
    if(n1>=n2){
        return n1;
    }
  
        return n2;
    
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
   int maximum=max(num1,num2);
   cout<<maximum;
}