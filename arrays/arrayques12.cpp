//Move all zeros to the end.
#include <iostream> 
using namespace std;
int main(){
   int arr[]= {5,0,1,2,3,0,1,4,0,7,1,0,4};
   int n= sizeof(arr)/sizeof(arr[0]);
   int count =0;
   for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count++]=arr[i];
        }
   }
   while(count<n){
    arr[count++]=0;
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}
