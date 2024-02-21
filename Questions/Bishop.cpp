#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter row:";
    cin>>r;
    cout<<"Enter column:";
    cin>>c;
    int total=0;

//last row mtlb subtract 8 
//first row mtlb subtract 1 
//and similar for column


    //last row or last column --- right lower
    total+=min(8-r,8-c);
    //last row or first column --- left lower
    total+=min(8-r,c-1);
    //first row or first column --- top left
    total+=min(r-1,c-1);
    //first row or last column --- top right
    total+=min(r-1,8-c);
    cout<<total;
    
}