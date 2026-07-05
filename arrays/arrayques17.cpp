//best time to buy and sell stock by price in array
#include <iostream>
#include <climits>
using namespace std;
int main(){
    //brute force approach
    int arr[]={2,5,7,1,8,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    int maxprofit=INT_MIN,sell,buy;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int profit = arr[j]-arr[i];
           if(profit > maxprofit){
            maxprofit=profit;
            buy=arr[i];
            sell=arr[j];
        }
        }
    }
    cout<<maxprofit<<endl<<"buy at: "<<buy<<endl<<"sell at: "<<sell<<endl;
    return 0;
    //optimised approach
    int buy1=0,sell1=0;
    int maxprofit1=0;
    int minprofit1=INT_MAX;
    for(int i=0;i<n;i++){
        if(minprofit1 >arr[i]){
            minprofit1=arr[i];
        }
        int profit = minprofit1 -arr[i]; 
        if(maxprofit1 < profit){
            maxprofit1=profit;
        }
    }
    cout<<maxprofit1<<endl<<"buy at: "<<minprofit1<<endl<<"sell at: "<<(minprofit1 + maxprofit1)<<endl;
}
