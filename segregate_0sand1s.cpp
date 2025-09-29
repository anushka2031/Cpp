#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int start=0,end=(n-1);
    while(start<end)
    {
     while(a[start]!=1 && start<end)
        start++;
     
     while(a[end]!=0 && start<end)
        end--;
     
     if(start<end){
     a[start]=0;
     a[end]=1;
     }
     start++;
     end--;
    
    }

    cout<<"segregation of 0's and 1's"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}