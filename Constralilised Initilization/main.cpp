#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person person;
    Person person1("Niraj",20);
    cout << person.toString();
    cout << person1.toString();
    return 0;
}
