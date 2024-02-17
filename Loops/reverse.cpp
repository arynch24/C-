#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, ld, r = 0; // ld-last digit, r -reverse num
    cout << "Enter n:";
    cin >> n;
    int x = n;

    // lulu tarika

    // while (n > 0)
    // {
    //     ld = n % 10;
    //     n /= 10;
    //     cout << ld;
    // }

    // expert mind

    while (n > 0)
    {
        ld = n % 10;
        r *= 10;
        r += ld;
        n /= 10;
    }
    cout << "reverse is:"<<r<<endl;
    cout << "sum of n and r:" << x + r;
}