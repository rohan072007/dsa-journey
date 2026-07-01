//Count even and odd numbers.

//Input: 2 3 4 5 6
//Output:
//Even = 3
//Odd = 2
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements";
        cin>>arr[i];
    }
    int even=0 ,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
                }
        }
    
    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd<<endl;
    return 0;
}
