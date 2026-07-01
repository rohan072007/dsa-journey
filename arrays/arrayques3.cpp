//Calculate the average of array elements.
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
    float avg=sum/n;
    cout<<"sum of aarrray"<<sum<<endl;
    cout<<"average of array elements"<<avg;
    return 0;
}