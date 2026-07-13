//Write a function to find the longest common prefix string amongst an array of strings.

//pefix, return an empty string "".
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string print(string arr[], string answer,int n ){
    for(int i=0; i<arr[0].size(); i++){
        for(int j=0; j<n; j++){
            if(i >= arr[j].size() || arr[j][i] != arr[0][i]){
                return answer;
            }
        }
        answer = answer + arr[0][i];
    }
}
int main(){
    string arr[]={"internet","interconnection","interferrro","intqercourse"};
    int n = sizeof(arr)/sizeof(arr[0]);
    string answer="";
    cout<<print(arr, answer,n);    
    return 0;
}
