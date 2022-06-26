//Zachary Hoppock
//math.cpp
//9/12/2020
//Formulate some string
//Version  #1
#include <iostream>
#include <string>

using namespace std;
int main()
{
string s = "Hello";
string t = "World";

double a = s.length() + t.length();
cout << a << endl;

string b = s.substr(1, 2);
cout << b << endl;

string c = s.substr(s.length() / 2, 1);
cout << c << endl;

string d = s + t;
cout << d << endl;

string e = t + s;
cout << e << endl;

  return 0;
}