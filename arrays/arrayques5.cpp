//Find the smallest element
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
    int smallest = arr[0];
    for(int i=0;i<n;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    cout<<"smallest elements : "<<smallest;
       return 0;
}