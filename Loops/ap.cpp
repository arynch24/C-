#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cout<<1+(i-1)*2<<" ";
    }
}