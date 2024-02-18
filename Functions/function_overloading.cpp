

#include <iostream>
using namespace std;
int Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

float Swap(float &x, float &y)//function overloading
//same function but of two different data types will be considered different
//as their argument are of different datatype.
{
    float temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    Swap(a, b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    float f1, f2;
    f1 = 1.33;
    f2 = 2.77;
    Swap(f1, f2);
    cout << "f1:" << f1 << endl;
    cout << "f2:" << f2 << endl;
}