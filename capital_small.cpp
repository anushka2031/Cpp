#include<iostream>
using namespace std;

int main()
{
   char c; //american standard codes for information interchange
   cin>>c;
   if(c>='A' && c<='Z')/*A-Z = 65-90  a-z = 97-122*/
   cout<<"capital";
   else
   cout<<"small";
    return 0;
}