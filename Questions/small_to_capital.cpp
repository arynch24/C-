
#include <iostream>
using namespace std;
char capital(char l)
{
    int x;
    char s;
    x = l - 32;

    s = (char)x;

    return s;
}
int main()
{
    char l;
    cout << "Enter a letter:";
    cin >> l;

    cout << capital(l);
}