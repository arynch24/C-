#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int flag=0;
    for (int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        flag=1;
        break;
        }
    }
    if(n==1)
    cout<<"Neither prime nor composite";
    else if(flag==1)
    cout<<"composite number";
    else 
    cout<<"prime noumber";
}
//continue - after this statement the code lines will not execute
//and next loop will run