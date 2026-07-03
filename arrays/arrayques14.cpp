//Maximum subarray sum
#include <iostream>
#include <climits>
using namespace std;
int main(){
    //brute force approach
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            max_sum=max(max_sum,sum);
        }
    }
    cout<<"Maximum subarray sum (brute force): "<<max_sum<<endl;
    //optimized approach
    int maxi=INT_MIN;
    int current=0;
    
    for(int i=0;i<n;i++){
        current= current+arr[i];
        if(current>maxi){
            maxi=current;

        }
        if(current<0){
            current=0;
        }
    }
    cout<<"Maximum subarray sum (optimized): "<<maxi<<endl;
}