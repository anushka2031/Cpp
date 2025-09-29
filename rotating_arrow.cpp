#include<iostream>
using namespace std;

void delay()
{
    for(int i=0;i<500000;i++)    //fast rotation 50000 
    {
        for(int i=0;i<1000;i++);
    }
}
int main()
{
    char cursor[] = {'|','/','-','\\'};
    for(int i=0;i<50;i++)
    {
        cout<<cursor[i%4];
        delay();
        cout<<'\b';
    }
}