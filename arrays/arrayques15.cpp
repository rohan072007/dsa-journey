//minimun subarray sum
#include <iostream>
#include <climits>
using namespace std;
int main(){
    //brute force approach
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int min_sum1=INT_MAX;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            min_sum1=min(min_sum1,sum);
        }
    }
    cout<<"Minimum subarray sum (brute force): "<<min_sum1<<endl;
    //optimized approach
    int min_sum2=INT_MAX;
    int current=0;
    for(int i=0;i<n;i++){
        current=current+arr[i];
        if(current<min_sum2){
            min_sum2=current;
        }
        if(current>0){
            current=0;
        }

    }
    cout<<"Minimum subarray sum (optimized): "<<min_sum2<<endl;
    return 0;
}