#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int num ,result =1;
    stringstream ss;

    cout << "Enter a number: ";
    cin >> num;
    if(num == 0) {
        ss << result;
        return 0;
    }
    else {
        for (int i = 1; i<=num;i++) {
        result = result*i;
    }
    }

    ss << result;
    string info = ss.str();
    cout << info;



    //stringstream ss;
    return 0;
}
