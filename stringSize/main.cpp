#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char ch{30};
    cout << "Enter string: ";
    gets(&ch);
    int len = strlen(&ch);
    cout << len;
    return 0;
}
