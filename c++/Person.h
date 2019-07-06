#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;


class Person
{
    string name ;
    int age;
    public:
        Person();
        Person(string name,int age);
        string toString();


    protected:

    private:
};

#endif // PERSON_H
