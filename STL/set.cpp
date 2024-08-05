#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    // TC: O(log n);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(8);
    s.insert(9);

    for (auto i : s)
        cout << i << " ";

    cout << "\n";
    set<int>::iterator it =s.begin();

    it++;
    s.erase(it);

    for (auto i : s)
        cout << i << " ";

    cout << "\n";

    cout << s.count(5) << endl;
    cout << s.count(-5) << endl;

    set<int>::iterator itr =s.find(5);

    for(auto it=itr ; it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}
