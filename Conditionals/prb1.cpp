#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter length:";
    cin>>l;
    cout<<"Enter Breadth:";
    cin>>b;
    int ar,pr; 
    ar=l*b;
    pr=2*(l+b);
    cout<<"Area of rect:"<<ar<<endl;
    cout<<"Perimeter of rect:"<<pr<<endl;
    if(ar>pr)
    cout<<"Area is greater than perimeter.";
    else
    cout<<"not greater";

}