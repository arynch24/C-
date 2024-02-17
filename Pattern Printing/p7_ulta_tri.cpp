#include<iostream>
using namespace std;
int main()
{
    int n;
   
    cout<<"Enter number:";
    cin>>n;
    // int m=n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i+1;j++)
        {
            cout<<"*"<<" ";
        }
        // m=m-1;
        cout<<endl;
    }
}