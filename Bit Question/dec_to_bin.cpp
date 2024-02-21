#include <iostream>
using namespace std;
int main()
{
    int num, rem, ans = 0,mul=1; //r-rem
    cout << "Enter number:";
    cin >> num;

    while (num > 0)
    {
        //reminder
        rem=num%2;
        //quotient
        num/=2;
        //answer
        ans+=rem*mul;
        //multiply
        mul*=10;
    }
    cout << "binary is:"<<ans<<endl;
}