//Count positive, negative, and zero elements.
#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,6,26,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int possitive=0,negative =0, zero=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            possitive++;
        }
        else if(arr[i]<0){
            negative++;

        }
        else{
            zero++;
        }
    }
    cout<<"Positive elements: "<<possitive<<endl;
    cout<<"Negative elements: "<<negative<<endl;
    cout<<"Zero elements: "<<zero<<endl;
    return 0;
}