#include<iostream>
using namespace std;
int main()
{
    int a, b,c;
    cout<<"Input sides:";
    cin>>a,b,c;
    if((a+b)>c and (b+c)>a && (c+a)>b)
    cout<<"Its a triangle";
    else
    cout<<"Its not a triangle";
}