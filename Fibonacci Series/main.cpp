#include <iostream>

using namespace std;

int main()
{
    int firstTerm = 0,secondTerm = 1,nextTerm,num;
    cout << "Enter the number of terms!";
    cin >> num;

    cout << "Fibonacci Series--" << endl;
    for(int i=1; i<=num; i++) {
        if(i == 1)
            cout << firstTerm << " ";
        else if(i == 1)
            cout << secondTerm << " ";

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        cout << nextTerm << " ";
    }
    return 0;
}
