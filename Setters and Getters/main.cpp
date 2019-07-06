#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person pp;
    cout << "Name is " << pp.toString() << endl;
    pp.setName("Suraj");
    cout << "Person name using get method " << pp.getName();
    return 0;
}
