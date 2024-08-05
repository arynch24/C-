#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> mp;

    mp[1] = "Aryan";
    mp[12] = "Chauhan";
    mp[13] = "hai";
    mp[21] = "mera";
    mp[2] = "naam";

    mp.insert({5, "ullu"});

    for (auto m : mp)
    {
        cout << m.first << " " << m.second << endl;
    }

    cout << endl;

    mp.erase(2);
    mp.erase(5);
    for (auto m : mp)
    {
        cout << m.first << " " << m.second << endl;
    }

    cout << endl;

    auto it = mp.find(12);

    for (auto i = it; i != mp.end(); i++)
    {
        cout << (*i).first << endl;
    }

    if(mp.find(21)!=mp.end())
    {
        cout<<"addddddddd";
    }
}