#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat()
{
    cout << "Cat Created" << endl;
}
Cat::~Cat()
{

    cout << "Cat Destroyed" << endl;
}
void Cat :: speak()
{
    cout << "Meouwww!" << endl;
}
