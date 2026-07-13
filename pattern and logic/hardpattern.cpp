#include <iostream>
using namespace std;
void print(int n)
{
    int initial = 0;
    int final = 10-2;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < initial; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        initial += 2;
        cout<<endl;
    }
        for(int i=0;i<n;i++){
            for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<=final;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        final -= 2;
        cout<<endl;
        }
        
    
}
int main()
{
    int n = 5;
    print(n);
    

        return 0;
}