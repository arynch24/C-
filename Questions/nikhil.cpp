#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int marks[5];
    cout<<"Input English, Hindi , Maths , Science and SST Marks:"<<endl;
    for (int i=0;i<5;i++)
    {
        cin>>marks[i];
        if(marks[i]<=100)
        sum+=marks[i];

        else
        {cout<<"Invalid Marks"<<endl;
        break;}
        
    }
    int perc=sum/5;

    if(perc>=90 && perc<95)
    {
        cout<<"Congrats you scored:"<<perc<<"%"<<endl;
        cout<<"You won mobile of worth 10K +";
    }
    
    else if(perc>=95 && perc<100)
    {
        cout<<"Congrats you scored:"<<perc<<"%"<<endl;
        cout<<"You won mobile of worth 30K +";
    }
    else
    {
        cout<<"Sorry you scored:"<<perc<<"%"<<endl;
        cout<<"You won Nokia 6300";
    }
    
}