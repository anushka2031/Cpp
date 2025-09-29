#include<iostream>
using namespace std;

int main()
{
    int n,i,j,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(a[i]==a[j])
            count++;
           
          //cout<<a[i]<<a[j]<<count<<endl;
          //cout<<count;
        }
      count++;
      cout<<a[i]<<a[j]<<count<<endl;
        //cout<<count;  
    }
    
    if(count==0)
      cout<<"no duplicate element";
    else
       cout<<"dulicate elements"<<a[j]<<count;
}