#include <bits/stdc++.h>
using namespace std;

class car{
    //by default its private you can't access outside of the class
    //to access it make it public
    //public and private are access modifier
    
    public:
    string name;
    int cost, seats;
    string colour;

};
int main()
{
    car suv;
    suv.name="Mercedes-Benz GLA";
    suv.cost=5815000;
    suv.seats=4;
    suv.colour="white";

    cout<<suv.cost;
}