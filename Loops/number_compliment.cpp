#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int rem, mult = 1, ans = 0;
    if (n == 0)
        return 1;

    while (n > 0)
    {
        //here we get every bit number from the last of a complete (bitwise number).
        rem = n % 2;
        //xor of rem to convert from o to 1 and vice versa.
        rem = rem ^ 1;
        
        //divide the bumber by 2 to get next quotient
        n /= 2;
        //final complemet number converting it on the spot to number.
        ans += rem * mult;
        //mul ke jagah can do pow(2,i)
        //i+=1; initially i=0;
        mult *= 2;
    }

    cout<<"compliment number"<< ans;
}