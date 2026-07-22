#include <bits/stdc++.h>
using namespace std;
void print(){
    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int,pair<int,int>> b={2,{23,42}};
    cout<<b.second.second;
    cout<<endl;
    pair<int,int> arr[]={{2,3},{1,3},{7,5}};
    for(int i=0;i<5;i++){
        cout<<arr[2].first;

    }
}

int main(){
    print();


    
    return 0;
}