#include <bits/stdc++.h> //
//#include <iostream>
//#include <sstream>
using namespace std;

int main()
{
    string name = "Niraj";
    int age = 20;

    stringstream ss;
    ss << "Name is " << name << endl;
    //ss << name << endl;
    ss << "Age is " << age;
    //ss << age;

    string info = ss.str();
    cout << info << endl;
    return 0;

}
