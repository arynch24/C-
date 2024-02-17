#include<iostream>
using namespace std;
int main()
{
    int n,sum =0,digit;
    cout<<"Enter n:";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    cout<<sum;

}