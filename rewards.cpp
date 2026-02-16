#include<iostream>
using namespace std;

int main(){

    int a1,a2,a3;
    int b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    int n;
    cin>>n;

    int cuptotal = a1+a2+a3;
    int medalTotal = b1+b2+b3;

    int x = cuptotal/5;
    if(cuptotal %5 != 0){
        x++;
    }

    int y = medalTotal/10;
    if(medalTotal%10 != 0){
        y++;
    }

    if(x+y<=n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}