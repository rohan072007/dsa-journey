#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int n){
    int star = n-3;
    int space= n-2;
    for(int i =1;i<=n;i++){
        if(i==1 || i==4){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<endl;
            continue;
        }
        //star
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
         //star
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j== n-1){
                cout<<"*";            
            }else{
                cout<<" ";
            }
        }
        cout<<endl;

        }
}
int main(){ 
 int n=6;
 print1(n);


    
    return 0;
}