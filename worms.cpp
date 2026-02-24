#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    long long arr[100005];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0){
            arr[i] = arr[i] + arr[i-1];
        }
    }

    int m;
    cin>>m;

    while (m--)
    {
        long long q;
        cin>>q;
        int left=0 , right=n-1;
        int ans = n-1;
        while (left<=right)
        {
            int mid = (left+right)/2;
            if(arr[mid]>=q){
                ans = mid;
                right=mid - 1;
            }
            else{
                left=mid+1;
            }
        }
        cout<<ans+1<<endl;
        
    }

    return 0;
    
}