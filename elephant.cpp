#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[100005];
    

    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    int min = arr[0];
    int count =0;
    int index=0;

    for(int i=0;i<n;i++){
        
        if(min > arr[i]){
            min = arr[i];
            // break;
        }

    }

    for(int j=0;j<n;j++){
        if(arr[j] == min){
            // cout<<arr[j];
            count++;
            index = j+1;
        }
    }

    // cout<<i;
    // cout<<min;


    if(count > 1){
        cout<<"Still Rozdil";
    }else{
        cout<<index;
    }
    
    
    

}