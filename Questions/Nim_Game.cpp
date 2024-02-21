//if the number is factor of 4 dont start yourself
//if it is not the factorof 4 than start the number till its remainder when divided by 4.
#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Input a number:";
cin>>num;
if (num%4!=0)
cout<<"-Start yourself with saying till the remainder:"<<num%4<<endl<<"and further speak till the factor of 4";
else 
cout<<"-tell opponent to start to win and you speak the number till the factor of 4.";
}
