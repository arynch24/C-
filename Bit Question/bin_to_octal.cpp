#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bnum, dec = 0, mul=1,mul2 = 1, i = 0, oct = 0, rem;
    cout << "Enter binary number:";
    cin >> bnum;

    while (bnum > 0)
    {
        rem = bnum % 10;
        bnum /= 10;

        dec += rem * mul;
        mul *= 2;
        // if (rem == 1)
        // {
        //     dec += pow(2, i);
        // }
        // i += 1;
    }
    cout << "Decimal number is:" << dec << endl;

    while (dec > 0)
    {
        rem = dec % 8;
        dec /= 8;
        oct += rem * mul2;
        mul2 *= 10;
    }

    cout << "Octal number is:" << oct << endl;
}