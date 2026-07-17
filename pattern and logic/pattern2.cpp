#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void print2(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print3(int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void print4(int n)
{

    for (int i = 1; i < n; i++)
    {
        for(int j=1;j<n-i+1;j++){
            cout<<"* ";
        }
        cout << endl;
    }
}
void print5(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout << endl;
    }
}
void print6(int n)
{

    for (int i = 0; i < n; i++)
    {
        //spaces
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        //stars
         for(int k=1;k<=2*i+1;k++){
            cout<<"*";
        }
        //spaces
         for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout << endl;
    }
}
void print7(int n)
{

    for (int i = 0; i < n; i++)
    {
        //spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //stars
         for(int k=1;k<=2*n-(2*i +1);k++){
            cout<<"*";
        }
        //spaces
         for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout << endl;
    }
}
void print8(int n)
{

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(int j=i;j<n-1;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
}
void print9(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start =1;
        }else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void print10(int n){
    for(int i=1;i<n;i++){
        int space= 2*n-2*i;
        //numbers
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        
        //spaces
        for(int j=1;j<=space;j++){
            cout<<"_";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<i;
        }
        cout<<endl;
    

}
}
void print11(int n){
    int count = 1;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<count;
           count++;
       }
       cout<<endl;
}
}
void print12(int n){
    
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
           
        }
        cout<<endl;
    }
}
void print13(int n){
    
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
           
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        
        cout<<endl;
    }
}

void print15(int n){
    int a=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(a)<<" ";
           
        }
        a++;
        cout<<endl;
    }
}
void print16(int n){
    
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        //letters
        int aplha=65;
        int breakpoint = (2*i+1)/2;
           for(int j=1;j<=(2*i)+1;j++){
            cout<<(char)aplha;
            if (j<=breakpoint) aplha++;
            else aplha--;
        }
        
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n = 5;
    print8(n);
    

    return 0;
}