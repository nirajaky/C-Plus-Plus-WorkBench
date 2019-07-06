#include <iostream>

using namespace std;

int main()
{
    int firstTerm = 0;int secondTerm = 1;int thirdTerm = 1;int nextTerm;
    int num;


    cout << "Enter the numbers of Term :- ";
    cin >> num;

    cout << firstTerm << " " << flush;
    cout << secondTerm << " " << flush;
    cout << thirdTerm << " " << flush;

    for(int i =1;i<=num-3;i++) {
        nextTerm = firstTerm + secondTerm + thirdTerm;
        firstTerm = secondTerm;
        secondTerm = thirdTerm;
        thirdTerm = nextTerm;

        cout << nextTerm << " ";
    }
    return 0;
}
