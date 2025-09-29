#include<iostream>
using namespace std;
int main()
{
    int h,m;
    cin >> h >> m;
    int interval;
    cin >> interval;
    int new_h = (h+interval)%24; //%13 for 12hours format
    cout << new_h << ":" << m;
    return 0;
}