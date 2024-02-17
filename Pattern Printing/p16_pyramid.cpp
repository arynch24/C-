#include <iostream>
using namespace std;
int main()
{
    int n;
    int mid = (n + 1) / 2;

    cout << "Enter number:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "* ";

        cout << endl;
    }
}