#include<iostream>
using namespace std;

class customer
{
    string name;//this->name   pointing here   hover and see both 
    int acc_number;
    int balance;
    public:
    //these are basically names of constructor
    //default contructor creation if we create it than it will not be constructed on its own.
    customer()
    {
        cout<<"Default Constructor:\n";
        name="Aryan";
        acc_number=73737;
        balance = 10000000;
    }
    //parameterised constructor

    // customer(string a,int b, int c)
    // {
    //     cout<<"Parameterised Constructor:\n";
    //     name =a;
    //     acc_number=b;
    //     balance=c;
    // }

    //use of "this" ~
    //this pointer stores the address of the object called

    // customer(string name ,int acc_number, int balance)
    // {
    //     cout<<"Parameterised Constructor:\n";
    //     this->name =name; //"this->name is pointing to customer class - object"
    //     this->acc_number=acc_number;
    //     this->balance=balance;
    // }

    //constructor overloading ~ as parameter is different 
    customer(string a,int b)
    {
        cout<<"Constructor Overloading:\n";
        name =a;
        acc_number=b;
        balance=899;//value initialised 
    }
    //Inline Constructor  ~ same written as abouve in "this->"  one we cannot redeclare the same constructor.
    inline customer(string a, int b, int c): name(a),acc_number(b),balance(c){
        
    }

    //not needed made by default if not created
    //creation of our own copy constructor
    customer(customer &B)//as only B was reference but &B is the actual value
    //now &B is refering to A3. means both are same and both are pointing to A4.
    { 
        name=B.name;
        acc_number=B.acc_number;
        balance=B.balance;
    }

    void display()
    {
        cout<<name<<" "<<acc_number<<" "<<balance<<endl;
    }                      
};

int main()
{
    customer A1;//called to default contructor
    A1.display();
    customer A2("Ashutosh",77763,10000000);// called to parameterised constructor
    A2.display();
    customer A3("Aditya",67782);
    A3.display();

    cout<<"Copying constructor: \n";
    //default copy constructor is used to copy if not created
    customer A4(A3);//copied value of A3 object in A4
    A4.display();

    //other way to assign value of another object.
    customer A5;
    A5=A3;
    A5.display();
}