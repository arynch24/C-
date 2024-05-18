#include <bits/stdc++.h>
using namespace std;

class car{
    
    public:
    string name;
    int cost, seats;
    string colour;

};
int main()
{
    car *suv= new car;
    (*suv).name="Mercedes-Benz GLA";
    (*suv).cost=5815000;
    (*suv).seats=4;
    suv->colour="white";//this is also same as (*suv).   

    cout<<suv->name<<"\n";
    cout<<suv->cost<<"\n";
    cout<<suv->seats<<"\n";
    cout<<suv->colour<<"\n";
}