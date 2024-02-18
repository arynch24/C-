#include <iostream>
using namespace std;

int fact(int n)
{
    int f=1;
    for (int i = 1; i <=n; i++)
        f *=i;
    return f;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int perm(int n,int r)
{
    return fact(n)/fact(n-r);
}
int main()
{
    cout << comb(6,4)<<endl;
    cout<<perm(6,4);
}

