#include<iostream>
using namespace std;
int main()
{
    int n;
   
    cout<<"Enter number:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            
            char x=(char)(j+64);
            cout<<x<<" ";
        }
        cout<<endl;
    }
}