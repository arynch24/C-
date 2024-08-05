#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d={1,2,3,5};

    d.push_back(1);
    d.push_front(7);

    for(int i :d)
    cout<<i <<" ";
    cout<<endl;
    int size =d.size();

    cout<<d.at(2)<<endl;
    
    cout<<d.empty()<<endl;

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.erase(d.begin()+2,d.begin()+4);
      for(int i :d)
    cout<<i <<" ";
}