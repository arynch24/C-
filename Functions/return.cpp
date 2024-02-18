//// return
//keyword jisase loop ka khatama ho jatta hai
//kind of like break
#include <iostream>
using namespace std;

//int is return data type
//sum is function name
int sum (int a,int b) //formal parameters
{
    return a+b;
}
int main()
{
    //pass by value
    cout<<sum(7,90);//actual parameters
}