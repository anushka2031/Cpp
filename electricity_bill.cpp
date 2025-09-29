#include<iostream>
using namespace std;

int main()
{
    double bill;
    int units;
    cin>>units;

    if(units<=100)
      {
        bill=units*3.36;
        cout<<bill;
      }
    else
    {
     if(units>100 && units<=300)
     {
        bill=100*3.36+(units-100)*7.34;
        cout<<bill;
     }
     else
     {
        if(units>300 && units<=500)
         {
            bill=100*3.36+200*7.34+(units-300)*10.37;
            cout<<bill;
         }
        else
        {
            bill=100*3.36+200*7.34+200*10.37+(units-500)*11.86;
            cout<<bill;
        }
     }
    }
}