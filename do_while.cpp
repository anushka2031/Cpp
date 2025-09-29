#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    do{
        cin>>n;
        sum=sum+n;
    }while(n!=-1);
    cout<<sum;

}