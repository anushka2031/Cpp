#include<iostream>
using namespace std;
int main(){
    int A[]={1,1,2,2,3,3,4,4};
    int size =sizeof(A)/sizeof(A[0]);
    int i=0,j=i+1;
    while(j<size){
        if (A[i]!=A[j]){
            A[i+1]=A[j];
            i++;
        }
        j++;
    }
    size = i+1;
    for(int i=0;i<size;i++){
        cout<<A[i]<<" "<<endl;
    }
}