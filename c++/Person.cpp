#include <iostream>
#include <sstream>
#include "Person.h"

using namespace std;

Person :: Person()
{
    name = "";
    age = 0;
}
Person :: Person(string name,int age )
{
    this->name = name;
    this->age = age;
    cout << "Memory location is : " << this << endl;
}
string Person :: toString()
{
    stringstream ss;
    ss << "Name is " << name << " ; Age is " << age << endl;

    return ss.str();
}
