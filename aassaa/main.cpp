#include <iostream>

using namespace std;

int main()
{
    string name[] = {"a" ,"b", "c", "d", "e", "f"};
    cout << sizeof(name) << endl;
    cout << sizeof(string) << endl;
    for(int i =0; i <sizeof(name)/sizeof(string); ) {
        cout << ++i <<" " << name[i]<<endl;
        //++name[name[i]];
    }
    return 0;
}
