#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter a num: "<<endl;
    cin>>n;

//cout<<setw(5)<<setfill("")

    for(i=1;i<=10;i++)
      {
        cout << n << " X "  ;
        cout << setw(2) << i;
        cout << " = " << setw(6) << n*i << endl; 
      }
   
   return 0;
}