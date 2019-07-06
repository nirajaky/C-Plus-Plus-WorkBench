#include <iostream>

using namespace std;

int main()
{
    int a = 4,b=1;
    for(int i=1; i<=5; i++) {
            for(int j =1; j<=a;j++) {
                cout << " ";
            }
            a--;
            for (int k =1; k<=b;k++) {
                cout << "*";
            }
            b=b+2;
            cout << endl;
    }
    return 0;
}
