//how to find size of memory used
#include<iostream>
using namespace std;

class a
{
    //comment every datatype randomly and shuffle it up and down and guess the memory space
    //if at present index is multiple of the size of datatype then only it will start allocation from there for ex

    char c; // c [1 byte]
    int b;// c x x x   b b b b  [8 byte] after allocation of c it was at first index but 1 was not multiple of 4 so it went to nearest multiple of index
    char d;// c x x x   b b b b  d x x x  [12 byte]
    double e; //c x x x  b b b b  d x x x  x x x x  (16 index)~ e e e e  e e e e [24 byte]

    //just keep in mind to put biggest datatype at the top in des order to use the minimum memory
};
int main()
{
    a obj;
    cout<<sizeof(obj)<<" ";
}