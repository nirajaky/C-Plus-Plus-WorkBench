#include <iostream>
#include "Person.h"

using namespace std;
Person::Person()
{
    name = "Niraj";

}
string Person :: toString()
{
    return name;

}
void Person ::setName(string name1)
{
    name = name1;
}
string Person :: getName()
{
    return name;
}
