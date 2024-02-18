#include <iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for (int i=1;i<=n;i++)
        f*=i;
    return f;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int mid=n/2;
    //all values are [i C J]
    //i - row ; c- column
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for (int j=0;j<=i;j++)
        {
            cout<<comb(i,j)<<"   ";
        }
        cout<<endl;
    }  

}

