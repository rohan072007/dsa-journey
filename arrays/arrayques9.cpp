//Find the frequency of each element.
// Input:
// 1 2 2 3 3 3

// Output:
// 1 -> 1
// 2 -> 2
// 3 -> 3
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
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=0;}
        }
        if(arr[i]!=0){
            cout<<arr[i]<<" -> "<<count<<endl;
        }
    }
    return 0;
}