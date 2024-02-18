#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bnum, digit, ans = 0, i= 0; // r-rem
    cout << "Enter binary number:";
    cin >> bnum;

    while (bnum > 0)
    {
        digit = bnum % 10;
        bnum /= 10;
        if (digit == 1)
        {
            ans+=pow(2,i);
        }
        i+=1;
    }
    cout << "number is:" << ans << endl;
}
