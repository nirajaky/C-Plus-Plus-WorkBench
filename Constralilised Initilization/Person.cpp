#include <iostream>
#include "Person.h"
#include <sstream>

using namespace std;
string Person :: toString()
{
    stringstream ss;
    ss << "Name is " << name << " ; Age is " << age << endl;
    return ss.str();
}
