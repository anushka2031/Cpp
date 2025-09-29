#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=2;
    while(n>1)
    {
         if(n%i == 0 && i<=n)
         {
            cout<<i<<" ";
            n=n/i;
         }
         else
         { 
             i++;
         }
        // if(i=n+1)
        // {
        //     cout<<i-1;
        //     break;
        // }

    }

}