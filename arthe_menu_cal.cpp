#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char n;
    do
    {
       cout<<"MENU"<<"\n"<<"1.Addition\n"<<"2.Sudtraction\n"<<"3.Multiplication\n"<<"4.Division\n"<<"5.EXIT"<<endl;
       cout<<"enter your choice"<<endl;
       cin>>n;
       cout<<"enter the two numbers:"<<endl;
       cin>>a>>b;

    switch(n)
    {
    case '1':
              cout << a << "+" << b <<"=" << a+b;
              break;
     
    case '2' :
            cout << a << "-" << b << "=" << a-b;
            break;
    case '3' :
            cout << a << "*" << b << "=" << a*b;
            break;
    case '4':
    {
        
            cout << a << "/" << b << "=" << a/b;
         break;
    }
    case '5':
           cout <<"you have exited the loop sucessfully"<<endl;
            break;
    default:
       cout<<"NA"<<endl;
       break;
    }
    


    } 
    while (n==5);
    
    
}