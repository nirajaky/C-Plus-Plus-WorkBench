#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;


class Person
{
    string name;
    public:
        Person();
        void setName(string);
        string toString();
        string getName();


    protected:

    private:
};

#endif // PERSON_H
