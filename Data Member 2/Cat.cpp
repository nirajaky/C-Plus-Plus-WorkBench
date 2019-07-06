#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak()
{
    if (happy) {
        cout << "Meouu!" << endl;
    }
    else {
        cout << "sssss!" << endl;
    }
}
