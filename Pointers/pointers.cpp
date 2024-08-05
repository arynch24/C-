#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    num=5;

    cout<<"Value of num: "<<num<<"\n";

    //address of operator - &

    cout<<"Address of num: "<<&num<<"\n";

    int *ptr=&num;


    cout<<"Value at addr. pointed by ptr: "<<*ptr<<"\n";
    cout<<"Address pointed by ptr: "<<ptr<<"\n";

    cout<<"Address of pointer ptr: "<<&ptr<<"\n";

    (*ptr)++;
    cout<<*ptr<<"\n";
    
    num++;
    cout<<num<<"\n";

    //copying a pointer

    int *p=&num;

    int *q =p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    //important concept

    int i=3;
    int *t =&i;

    *t=*t+3;
    cout<<*t<<endl;
    
    cout<<"before t: "<<t<<endl;
    t=t+1;

    cout<<"after t: "<<t<<endl;

    cout<<*t<<endl;
}