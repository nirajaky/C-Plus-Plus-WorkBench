#include <iostream>

using namespace std;

int main()
{
    char str[] = "Neeraj Kumar";
    cout << str << endl;

    char newStr[100];
    int ind = 0;
    int len = sizeof(str) - 1;

    for(int i=(len-1); i>=0; i--) {
        newStr[ind] = str[i];
        ind++;
    }
    cout << "Reversed String with no character repeated----------" << endl;

    int flag = 0;
    for(int i =0; i<=(len-1); i++) {
        for(int j =i+1; j<=len-1; j++) {
            if(newStr[i] == newStr[j]){
                flag = 1;
            }
        }
        if (flag ==0)
            cout << newStr[i];

        flag = 0;
    }
    return 0;
}
