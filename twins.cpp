#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[100];
    int totalSum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        totalSum += arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int sum = 0;
    int count = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
        count++;
        if(sum > totalSum-sum){
            break;
        }
    }

    cout<< count;
}