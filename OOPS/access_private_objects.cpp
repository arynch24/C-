#include <bits/stdc++.h>
using namespace std;

class car
{
private:
    string name;
    int cost, seats;
    string colour;
    // access private objects using
    // setter function used to assign the values 

public:
    void setname(string n)
    {
        if (n.size() == 0)
        {
            cout << "invalid name\n";
            return;   
        }
        name = n;
    }
    void setcost(int c)
    {
          if (c>6000000)
        {
            cout << "invalid cost\n";
            return;   
        }
        cost = c;
    }

    void setseats(int s)
    {
        seats = s;
    }

    void setcolour(string co)
    {
        colour = co;
    }

//getter function used to access the objects
    void getcost()
    {
        cout << cost << "\n";
    }
    string getcolour(int pin)
    {
        if(pin==865)
        return colour;

        return "Invalid Pin";
    }
};
int main()
{
    car suv;
    suv.setname("Mercedes-Benz GLA");
    suv.setcost(5815000);
    suv.setseats(4);
    suv.setcolour("white");
//getter
    suv.getcost();
    cout<<suv.getcolour(865);
    
}