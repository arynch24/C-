#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *balance;//a pointer which stores an address only

    public:
    Customer()
    {
        //to know that constructor is called
        name="4";
         cout<<"Constructor is "<<name<<endl;
    }

    Customer(string name)
    {
        this->name=name;
        cout<<"Constructor is "<<name<<endl;
    }

    ~Customer()//destructor deallocate the dynamically allocated memory
    {
        cout<<"Destructor is "<<name<<endl;
    }
    //objects are destroyed in reverse order may be because they are stored in stack.
};
int main()
{
    Customer A1("1"),A2("2"),A3("3");
    Customer *A4 =new Customer; //as here it is pointer thats why destructor is not activated
    delete A4; //memory is deleted or destructor has activated for this allocated memory 
    // A4=
}