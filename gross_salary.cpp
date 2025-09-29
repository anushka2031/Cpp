#include<iostream>
using namespace std;

int main()
{
    string name;
    int basic_salary;
    cout << "enter your name";
    cin >> name;
    cin >> basic_salary;
    float gross_salary = basic_salary + (basic_salary*0.05) + (basic_salary*0.1);
    cout << name << "\n" << gross_salary;
    return 0;
}