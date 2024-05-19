#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *balance;//a pointer which stores an address only

    public:

    Customer()
    {
        name ="Aryan";
        balance = new int;//eg this is dynamic memory
        *balance =1000;
        cout<<"Constructor is called\n";
    }

    //Destructor - by default compiler makes it for us
    // we can also make it
    //it is last function is going to be called before the object is destroyed
    //the memory which are taken dynamically are released by destructor
    ~Customer()
    {
        delete balance;
        cout<<"Destructor is called\n";
    }
};
int main()
{
    Customer();
}