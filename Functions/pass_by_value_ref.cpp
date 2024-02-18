#include <iostream>
using namespace std;
//for pass by reference 
//actual variable with its container goes in function
//no other new variables /containers is not created 


int swap(int& x, int& y) //ye same a and b value ko hi point kar rha hai. means address same hai x and a ka;

{
    int temp=x;
    x=y;
    y=temp;
}

// int swap(int a, int b)  // ye naye a and b variable hai.
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }


int main()
{
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    swap(a,b);

    //pass by value - 
    //actual variable container dosent go in function only its values goes
    //and stored in new variable/container in a function
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}