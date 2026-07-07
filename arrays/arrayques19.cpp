//Container with most water
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxarea(int arr[],int n){
    int left=0;
    int right =n-1;
    int maxarea=0;
    while(left<right){
        int current_height =min(arr[left],arr[right]);
        int currenr_width =right-left;
        int current_area =current_height*currenr_width;

        maxarea =max(maxarea,current_area);
        if(arr[left]<arr[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return maxarea;
}
int main(){
   int arr[]={1,8,6,2,5,4,8,4,2,8,9,1,3,7,9,12,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxarea(arr,n);
}