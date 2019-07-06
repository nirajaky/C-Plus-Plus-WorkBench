#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person person1;
    Person person2("Niraj",20);
    Person person3("Sonu",25);
    cout << person2.toString() << "Memory locaton " << &person2 <<endl;
    cout << person3.toString() << "Memory locaton " << &person3 <<endl;
    return 0;
}
