//Find the largest element
//Input: 5 8 2 10 7
//Output: 10
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elememts of arrays";
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<"largest elements : "<<largest;
       return 0;
}