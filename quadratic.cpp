#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    cout<<setprecision(2)<<fixed;
    int a,b,c;
    cin<<a<<b<<c;
    double delta;
    delta = b*b-4*a*c;
    if(delta==0)
    {
        double root=-b/(2.0*a);
        cout<<root<<endl;
    }
    else if(delta>0)
    {
        double root1,root2;
        root1=(-b+sqrt(delta))/(2.0*a);
        root2=(-b+sqrt(delta))/(2.0*a);
        cout<<root1<<"\n"<<root2;

    }
    else
    {
      delta=-delta;
      double real=-b/(2.0*a);
      double imag=sqrt(delta)/(2.0*a);
      if(imag<0) imag=-imag;
      cout<<real<<"+"<<imag<<"i\n"<<endl;
      cout<<real<<"-"<<imag<<"i\n"<<endl;
    }
}