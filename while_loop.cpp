#include<iostream>
using namespace std;

// int main()
// {
//     int x=5,y=1;
//     while(x>0)
//     {
//         cout<<"x="<<x<<"y="<<y<<endl;
//         x--;
//         y++;
//     }
// }

//find x^y where x and y are given

int main()
{
    int x,y;
    cin>>x>>y;
    long long result=1;
    while(y>0)
    {
       result=result*x;
        y--;
    }
    cout<<result;
}