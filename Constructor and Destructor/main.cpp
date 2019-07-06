#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{
    cout << "Strating Program" << endl;

    {
        Cat kk;
        kk.speak();
    }

    cout << "Ending Program" << endl;
    return 0;
}
