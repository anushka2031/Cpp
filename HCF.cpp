#include<iostream>
using namespace std;

int main()
{
    int x,y,temp;
    cin>>x>>y;

    while(x>0)
    {
        temp=x;
        x=y%x;
        y=temp;
    }
    cout<<y;
}