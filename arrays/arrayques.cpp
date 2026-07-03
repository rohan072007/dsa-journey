//Find all duplicate elements.
#include <iostream>
using namespace std;
int main(){
    int  arr[]={1,2,3,4,2,6,1,4,1,4,1,5,4,7,2,6,8,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int duplicate[]={};
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                
                }
        }
        
    }
    return 0;
}