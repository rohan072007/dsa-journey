#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter ur marks : ";
    cin>>marks;
    if(marks>90){
        cout<<"A grade";
    }
    else if((marks>80) && (marks<89)){
      cout<< " B grade ";    }
    else if((marks>70) && (marks<79)){
        cout<<" c grade";

    }else{
        cout<<" fail";
    }

    return 0;

}