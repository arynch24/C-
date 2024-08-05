#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;

    st.push(7);
    st.push(7);
    st.push(7);
    st.push(7);
    st.push(7);
    st.push(7);
    st.push(7);
    st.push(9);

    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;

    // for(auto i : st)
    // {
    //     cout<<i<<" ";
    // }

    while (st.empty() == false)
    {
        int t = st.top();
        cout << t << " ";
        st.pop();  
    }
}