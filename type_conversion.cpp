#include<iostream>
#include<typeinfo>
using namespace std;

// int main()
// {
//     bool a = false;
//     char b = a;
//     short c = b;
//     int d = c;
//     long e = d;
//     float f = e;
//     double g =f;
//     cout << typeid(g).name();
//      return 0;
//  }

// new code
 int main()
 {
    int x = 1000;
    char y = static_cast<char>(x);
     //cout << (int)x; //c style type casting
     //cout << static_cast<int>(x);  
     //c++ type casting
     cout << static_cast<int>(y);
 }