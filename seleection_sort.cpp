#include<iostream>
using namespace std;
int main(){
    int i,j,A[]={11,2,44,33,55,68};
    int size=sizeof(A)/sizeof(A[1]);
    
    for(int i=0;i<size;i++){
        int min=i;
        for(j=i+1;j<size;j++){
            if(A[min]>A[j]){
                min=j;
            }
        }
        swap(A[min],A[i]);
    }
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}