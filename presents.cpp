#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[100];
    int final[100];
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++){
        final[arr[i]] = i;
    }
    for(int i=1;i<=n;i++){
        cout << final[i] << " ";
    }

}