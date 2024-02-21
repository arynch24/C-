#include <bits/stdc++.h>
using namespace std;
int countdigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count += 1;
    }
    return count;
}

int Armstrong(int num,int digit)
{
    int ans = 0,rem;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;

        ans += pow(rem, digit);
    }
    cout<<ans<<endl;
    if (ans == num)
        cout << "Its a armstrong number";
    else
        cout << "Its not armstrong number";
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int digit = countdigit(n);

    Armstrong(n, digit);
}