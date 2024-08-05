#include <bits/stdc++.h>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(8);
    maxi.push(1);
    maxi.push(3);
    maxi.push(9);
    maxi.push(2);

    int n = maxi.size();
    for (int i; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout<<endl; 

    mini.push(8);
    mini.push(1);
    mini.push(3);
    mini.push(9);
    mini.push(2);

    int m = mini.size();

    for (int i; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
}