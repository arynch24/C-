#include <iostream>
using namespace std;

//wrong approach byu me

// int countzero(int n)
// {
//     int count=0;
//     while (n > 0)
//     {
//         int ld = n % 10;
//         n /= 10;
//         if (ld == 0)
//         {
//             count += 1;
//         }
//         else
//             break;
//     }
//     return count;
// }

// int fact(int f)
// {
//     int res=1;
//     for (int i = 2; i <= f; i++)
//     {
//         res*= i;
//     }
    
//     return res;
// }


//optimised solution
int trailing_zeroes(int n)
{
    int count=0;
    while(n>=5)
    {
        count+=n/5;
        n/=5;
    }
    return count;
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;

    // cout<<countzero(fact(n))<<endl;;

    //optimised solution
    cout<<trailing_zeroes(n);
}