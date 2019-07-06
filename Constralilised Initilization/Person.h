#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;


class Person
{
    string name;
    int age;
    public:
        Person() : name("Undefined"),age(0) {};
        Person(string name,int age) : name(name), age(age){};
        string toString();

    protected:

    private:
};

#endif // PERSON_H
