#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter rows:";
    cin>>m;
    cout<<"Enter column:";
    cin>>n;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}