#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=7; i++) {
        if(i == 1 || i == 4 || i ==7)
            cout << " ";
        else
            cout << "*";
    }
    cout << endl;
    for(int i=1; i<=7; i++) {
        if(i == 1 || i == 4 || i ==7)
            cout << "*";
        else
            cout << " ";
    }
    cout << endl;
    int a =1,b=7;
    for(int i=1; i<=4; i++) {
            for(int j =1; j<=7; j++) {
                if(j == a || j == b)
                    cout <<"*";
                else
                    cout << " ";
            }
            cout << endl;
            a++;
            b--;
    }
    return 0;
}
