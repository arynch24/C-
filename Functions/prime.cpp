#include <iostream>
using namespace std;
int prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    if (prime(n) == 1)
    {
        cout << "prime number." << endl;
    }
    else if (prime(n) == 0)
    {
        cout << "not a prime number." << endl;
    }
}
