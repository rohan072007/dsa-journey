//missing number in array
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int expected_sum=0,actual_sum=0;
    expected_sum=(n+1)*(n+2)/2;
    for(int i =0;i<n;i++){
        actual_sum +=arr[i];
    }
   cout<<expected_sum-actual_sum;
    
}