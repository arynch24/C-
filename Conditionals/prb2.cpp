#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter a number:";
    cin>>n;
    if ((n%5==0 or n%3==0) && n%15!=0)
    cout<<"Its correct.";
    else
    cout<<"Its incorrect." ;
}