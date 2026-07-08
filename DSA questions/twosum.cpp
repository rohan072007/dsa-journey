// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int target =26;
    int sum;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(sum==target){
                cout<<i<<" "<<j<<" value : "<<target;
            }
        }
        
    }


}
