#include <iostream>

using namespace std;

int main()
{
    const int num = 4;
    int a[num] = {2,7,23,45};
    int *pStart = a;
    int *pEnd = &a[num];
    while (pStart != pEnd) {
        cout << *pStart << " " << flush;
        pStart ++;
    }
    return 0;
}
