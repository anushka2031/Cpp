#include<iostream>
using namespace  std;

int main()
{
    int a[100] ,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    //int size= sizeof(a)/sizeof(a[0]);
    int max = a[0];
    int smax = INT8_MIN;

    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        }
       else if (smax<a[i])
        {
           smax=a[i];
        }
    }
    cout<<max<<" "<<smax<<endl;
    return 0;
        
}