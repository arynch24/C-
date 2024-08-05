#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string>qu;

    qu.push("Aryan");
    qu.push("Durgesh");
    qu.push("Nikhil");
    qu.push("Manoj");
    qu.push("Manjeet");
    qu.push("Abhishek");

    qu.pop();

    // cout<<qu.top()<<endl;
    cout<<qu.empty()<<endl;
    cout<<qu.size()<<endl;

    while (!qu.empty()) {

        // getting front element of queue
        cout << qu.front() << " ";
       
        // removing front element of queue
        qu.pop();
    }
}