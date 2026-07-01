//Find the sum of all elements
//Input: 1 2 3 4 5
//Output: 15
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"sum of aarrray"<<sum;
    return 0;
}