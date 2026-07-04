//Maximum product subarray
#include <iostream>
#include <climits>
using namespace std;
int main(){
    //brute force approach
    int arr[]  = {2,3,-2,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max_product=INT_MIN;
    int current_max=1;
    for(int i=0;i<n;i++){
        current_max=1;
        for(int j=i;j<n;j++){
            current_max *=arr[j];
            max_product=max(max_product,current_max);
        }
    }
    cout<<"max :"<<max_product<<endl;
    //optimized approach
    int max_product2=INT_MIN;
    int current_max2=1;
    int current_min2=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(current_max2,current_min2);
        
        }
        current_max2 = max(arr[i],current_max2*arr[i]);
        current_min2 = min(arr[i],current_min2*arr[i]);
        max_product2=max(max_product2,current_max2);
    }
    cout<<"max :"<<max_product2<<endl;
return 0;
}
