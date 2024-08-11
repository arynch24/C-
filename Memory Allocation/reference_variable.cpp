#include<iostream>
using namespace std;



void update2(int& n) {
    n++;
}

void update1(int n) {
    n++;
}

int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

int main() {

   int n = 5;
    
    cout<<func(n)<<endl;
    cout<<fun(n)<<endl;


    /*
    int i = 5;

    //create a ref variable 

    int& j = i;

    cout << i << endl; 
    i++;
    cout << i << endl; 
    j++;
    cout << i << endl; 
    cout << j << endl;
    */


   
//    cout << "Before " << n << endl;
//    update2(n);
//    cout << "After " << n << endl;


    

    return 0;
}