#include<iostream>
using namespace std;

int main()
{
    float C,F;
    cout << "Enter temperature in celcius" << endl;
    cin >> C;
    F=C*(9/5.0f)+32;
    cout << "temp in celcius: " << F;
    
}

//(t+n)%24