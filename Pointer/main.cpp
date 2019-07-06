#include <iostream>
#include <iomanip>

using namespace std;
void manipulate (double* pValue)
{
    cout << "2. Pointer value " << *pValue << endl;
    *pValue =10.165;
    cout << "3. Pointer Value " << *pValue << endl;
}

int main()
{
    int nValue = 23;
    int* pValue = &nValue;
    cout <<"Pointer to int address " << setprecision(10) << pValue << endl;
    cout << "Int value via pointer " << *pValue << endl;
    *pValue += 10;
    cout << "Value of nValue = " << nValue << endl;

    cout << "=====================" << endl;
    double dValue =245.11;
    cout << "1. dValue = " << dValue << endl;
    manipulate(&dValue);
    cout << "dValue = " << dValue << endl;



    return 0;
}
