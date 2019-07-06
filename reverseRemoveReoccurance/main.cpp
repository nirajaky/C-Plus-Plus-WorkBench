#include <iostream>

using namespace std;

int main()
{
    char str[] = "Neeraj";
    //cout << "Enter a word : ";
    //cin >> str;
    int j = sizeof(str)/sizeof(char) - 1;
    cout << j << endl;
    int len = j;


    for(int i = 0; i<j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for(int i = 0; i<=len; i++ )
    cout << str[i];

    return 0;
}
