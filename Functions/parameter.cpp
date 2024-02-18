#include <iostream>
using namespace std;
//a=10 default parameter
//if nothing is given than it take a=10
void sum (int a=10,int b=90) //formal parameters
{
    cout<<a+b<<endl;
}
int main()
{
    //pass by value
    sum(7,90);//actual parameters
    
    //pass by value
    int x=10,y=120;
    sum(x,y);//actual parameters

    //a and b not given
    sum();
}