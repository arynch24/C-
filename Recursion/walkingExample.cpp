#include<bits/stdc++.h>
using namespace std;

int reachHome(int src,int dest)
{
    cout<<"source: "<<src<<"   "<<"destination: "<<dest<<endl;
    //base case
    if(src==dest)
    {
        cout<<"Pahoch gaya ghar."<<endl;
        return 0;
    }

    //processing - ek step aage badh jao
    src++;

    //recursive call
    reachHome(src,dest);
}
int main()
{
    int dest=10,src=1;
    reachHome(src,dest);

    

}