#include<iostream>
using namespace std;
int main()
{
    int s,b;
    cout<<"Enter buying price:"<<endl;
    cin>>b;
    cout<<"Enter selling price:"<<endl;
    cin>>s;
    if (b==s)
    cout<<"No profit No loss";
    else if(b>s)
    cout<<"You are in loss of:"<<b-s<<endl;
    else
    cout<<"You are in profit of:"<<s-b<<endl;

    return 0;
}