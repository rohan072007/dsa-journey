#include <iostream>
using namespace std;
int main(){
    int sp,cp,profit,loss;
    float profitper,lossper;
    cout<<"enter sp :";
    cin>>sp;
    cout<<"enter cp :";
    cin>>cp;
    if(sp>cp){
        profit = sp-cp;
        profitper=(profit*100.0)/cp;
        cout<<"profit is: "<<profit<<" percentage is: "<<profitper;
    }
    else if(sp<cp){
        loss = cp-sp;
        lossper=(loss*100.0)/cp;
        cout<<" loss is: "<<loss<<" percentage is: "<<lossper;
    }
    else{
        cout<<"no profit no loss";
    }
    return 0;
}