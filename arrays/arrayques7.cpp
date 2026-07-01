//reverse a array
#include <iostream>
using namespace std;
int main(){
    int arr[5]={100,242,521,5321,131};
    int size = sizeof(arr)/sizeof(arr[0]);
        for(int i=size-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    return 0;
}