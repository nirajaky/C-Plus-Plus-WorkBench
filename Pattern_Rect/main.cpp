#include <iostream>

using namespace std;

int main()
{
    for(int j =1; j<=5; j++) {
                cout <<"*";
            }
            cout << endl;
    for(int i=1; i<=3; i++) {
            for(int k=1; k<=5; k++) {
                if(k == 1 || k == 5)
                    cout <<"*";
                else
                    cout << " ";
            }
            cout << endl;
    }
    for(int j =1; j<=5; j++) {
                cout <<"*";
            }
    return 0;
}
