#include <iostream>

using namespace std;
void doSomething(double &value) {
    value = 123.45;

}
int main()
{
    double value = 3.45;
    doSomething(value);
    cout << value << endl;
    return 0;
}
