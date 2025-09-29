#include<iostream>
using namespace std;
class car
{
    public:
    string Brand="audi";
    string model="A8";
    string color="black";
   // float price = "25000000";
};

int main()
{
    car c1;
    cout << c1.Brand;
    cout << endl;
    cout << c1.model << endl;
    cout << c1.color << endl;
   // cout << c1.price << endl;
    return 0;
   
}
