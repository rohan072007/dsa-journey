//Print all elements
//Take an array of n integers and print each element.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" enter number of slements";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++ ) {
        cout<<"enter elements of the aaray";
        cin>>arr[i];

    }  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}