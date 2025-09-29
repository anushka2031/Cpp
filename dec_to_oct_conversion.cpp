#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i;
   
    cout << "dec" << setw(5) << "oct" << setw(4) <<" hex "<< endl;
    for(int i=0;i<=100;i++) 
    {
        cout<<setw(3)<<dec<<i;
        cout<<oct<<setw(5)<<i;
        cout<<hex<<setw(4)<<i<<endl;
    }
    return 0;
}