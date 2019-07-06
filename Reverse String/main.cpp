#include <iostream>

using namespace std;

int main()
{
    char texts[] = "Niraj Kumar";
    int nChar = sizeof(texts)-1;
    char *pStart = texts;
    char *pEnd = texts + nChar -1;

    while(pStart < pEnd) {
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;

        pStart++;
        pEnd--;
    }
    cout << endl << texts;
    return 0;
}
