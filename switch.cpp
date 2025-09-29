#include<iostream>
using namespace std;

int main()
{
    int  i;
    cin>>i;
    switch (i<=31)
    {
    case 1:cout<<"it is a date";break;
    case 0 :cout<<"not a date";break;
    
    default:cout<<"invalid";
        break;
    }

}