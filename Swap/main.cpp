#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 30;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << a << endl;
    cout << b << endl;

    return 0;
}
